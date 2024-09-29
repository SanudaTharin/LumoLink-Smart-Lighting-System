#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include <string.h>

#define F_CPU 8000000UL
#define BAUD 115200
#define UBRR_VAL ((F_CPU / (16UL * BAUD)) - 1)

volatile char receivedData = '0';

void USART_Init(unsigned int ubrr) {
    // Set baud rate
    UBRRH = (unsigned char)(ubrr >> 8);
    UBRRL = (unsigned char)ubrr;
    // Enable receiver and enable received data interrupt
    UCSRB = (1 << RXEN) | (1 << RXCIE);
    // Set frame format: 8 data, 1 stop bit
    UCSRC = (1 << URSEL) | (1 << UCSZ0) | (1 << UCSZ1);
}

ISR(USART_RXC_vect) {
    receivedData = UDR;
}

void USART_Transmit(unsigned char data) {
    // Wait for empty transmit buffer
    while (!(UCSRA & (1 << UDRE)))
        ;
    // Put data into buffer, send the data
    UDR = data;
}

int main(void) {
    // Initialize UART with a baud rate of 9600
    USART_Init(UBRR_VAL);

    // Set PB0 as an output (LED)
    DDRB |= (1 << PB0);

    // Enable global interrupt
    sei();

    while (1) {
        if (receivedData == '1') {
            // Turn on the LED
            PORTB |= (1 << PB0);
        } else if (receivedData == '0') {
            // Turn off the LED
            PORTB &= ~(1 << PB0);
        }
        receivedData = '0'; // Reset received data
    }

    return 0;
}
