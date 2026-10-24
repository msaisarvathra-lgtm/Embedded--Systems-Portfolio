## Button Controlled LED System
An Arduino-based embedded systems project demonstrating digital output control and microcontroller pin  confoguration.
## Components Used
* Arduino Uno (Microcontroller)
* LED & Resistor
* Push Button
* Jumper Wires & Breadboard
## Repository Structure
* 'push_button_led.ino' - Arduino C++ source code for digital pin control.
* 'push_button_circuit-diagram.png' - |C|ircuit schematic diagram.
## Circuit Connections
* LED Positive (Anode via Resistor) -> Arduino Digital Pin
* Push Button -> Arduino Digital |Pin and Ground/VCC as configured in the schematic.
## How It Works
1. The microcontroller initializes the digital pins in the 'setup()' function using 'pinMode()'
2. The 'loop()' executes the core logic to control the LED state, managing outputs and timing or input states.
