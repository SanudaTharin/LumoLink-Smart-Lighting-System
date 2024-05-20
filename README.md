# LumoLink: Smart Lighting System

This project demonstrates how to build a smart light bulb using an ESP01 module and an ATmega32 microcontroller. The ESP01 connects to a local network and hosts a webpage with buttons to turn the light bulb on and off. When a button on the webpage is clicked, the ESP01 sends a signal to the ATmega32, which controls the light bulb.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Components](#components)
- [Circuit Diagram](#circuit-diagram)
- [Installation](#installation)
  - [ESP01 Setup](#esp01-setup)
  - [ATmega32 Setup](#atmega32-setup)
- [Usage](#usage)
- 

## Introduction

LumoLink uses the ESP01 to create a Wi-Fi-enabled light bulb that can be controlled through a web interface. The ESP01 hosts a webpage with buttons to turn the light on and off. These actions send signals to the ATmega32 microcontroller, which then controls the light bulb accordingly.

## Features

- Control the light bulb from any device connected to the local network
- Simple web interface with ON and OFF buttons
- ESP01 handles Wi-Fi connectivity and web server
- ATmega32 manages the light bulb switching

## Components

- ESP01 Wi-Fi module
- ATmega32 microcontroller
- Light bulb
- Relay module (to control the light bulb)
- Power supply for ESP01 and ATmega32
- Connecting wires

## Circuit Diagram

![Circuit Diagram](link_to_your_circuit_diagram_image)

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
