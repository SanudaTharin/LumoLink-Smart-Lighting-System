void setup() {
  Serial.begin(9600); // Start serial communication with ATmega32
}

void loop() {
  Serial.write('1');  // Send character '1'
  delay(1000);        // Wait 1 second
  Serial.write('0');  // Send character '0'
  delay(1000);        // Wait 1 second
}
