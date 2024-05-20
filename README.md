# LumoLink: Smart Lighting System

This project demonstrates how to build a smart light bulb using an ESP01 module and an ATmega32 microcontroller. The ESP01 connects to a local network and hosts a webpage with buttons to turn the light bulb on and off. When a button on the webpage is clicked, the ESP01 sends a signal to the ATmega32, which controls the light bulb. Additionally, the system is powered by a custom power supply built with two 18650 rechargeable batteries and an LM7805 voltage regulator.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Components](#components)
- [Circuit Diagram](#circuit-diagram)
- [Power Supply](#power-supply)
- [Installation](#installation)
  - [ESP01 Setup](#esp01-setup)
  - [ATmega32 Setup](#atmega32-setup)
- [Usage](#usage)
- [License](#license)

## Introduction

LumoLink uses the ESP01 to create a Wi-Fi-enabled light bulb that can be controlled through a web interface. The ESP01 hosts a webpage with buttons to turn the light on and off. These actions send signals to the ATmega32 microcontroller, which then controls the light bulb accordingly. The entire system is powered by a custom power supply.

## Features

- Control the light bulb from any device connected to the local network
- Simple web interface with ON and OFF buttons
- ESP01 handles Wi-Fi connectivity and web server
- ATmega32 manages the light bulb switching
- Custom power supply with rechargeable batteries for portability

## Components

- ESP01 Wi-Fi module
- ATmega32 microcontroller
- Light bulb
- Relay module (to control the light bulb)
- Two 18650 rechargeable batteries
- LM7805 voltage regulator
- Power supply circuit components
- Connecting wires

## Circuit Diagram

![image](https://github.com/SanudaTharin/LumoLink-Smart-Lighting-System/assets/154645932/9e4ea7fa-d025-4e97-9dca-4a76ba1ecb7e)


## Power Supply

The power supply for the system is built using two 18650 rechargeable batteries and an LM7805 voltage regulator to provide a stable 5V output. This setup ensures that the system is portable and can operate independently of a fixed power source.

### Power Supply Components

- Two 18650 rechargeable batteries
- Battery holder
- LM7805 voltage regulator
- Capacitors (10µF and 100µF) for voltage regulation
- Switch for power on/off
- Connecting wires

### Power Supply Circuit Diagram

![image](https://github.com/SanudaTharin/LumoLink-Smart-Lighting-System/assets/154645932/9855dabd-8683-4037-b809-88f36df26fda)


## Installation

### ESP01 Setup

1. **Connect the ESP01 to the Arduino for Programming:**
   - TX (ESP01) -> RX (Arduino)
   - RX (ESP01) -> TX (Arduino)
   - VCC and CH_PD (ESP01) -> 3.3V (Arduino)
   - GND (ESP01) -> GND (Arduino)
   - GPIO0 (ESP01) -> GND (for programming mode)

2. **Upload Code to ESP01:**
   - Use the Arduino IDE to upload the code to the ESP01.
   - Ensure the code handles Wi-Fi connection and web server setup, and sends signals to the ATmega32 based on webpage button clicks.

### ATmega32 Setup

1. **Program the ATmega32:**
   - Use your preferred method (e.g., USBasp programmer) to upload the C code to the ATmega32.
   - Ensure the code sets up UART communication and controls the relay module based on received signals from the ESP01.

2. **Connect the ATmega32:**
   - PB0 (ATmega32) -> Relay module (to control the light bulb)
   - VCC and GND (ATmega32) -> Power supply
   - TX (ESP01) -> RX (ATmega32)

## Usage

1. Power on the ESP01 and ATmega32.
2. Connect to the same Wi-Fi network as the ESP01.
3. Open a web browser and navigate to the IP address of the ESP01.
4. Use the web interface to turn the light bulb on and off.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

