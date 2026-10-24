## IR Remote Controlled LED System
An Arduino-based embedded systems prototype that decodes infrared (IR) signals from a wireless remote control to toggle an LED and handle specific button commands using the 'IRremote' library.
## Components Used
* Arduino Uno ( Microcontroller)
* IR Receiver Module
* IR Remote Control
* LED & Resistor
* Jumper Wires
## Repository Structure
* 'ir_remote_led.ino' - Arduino 5v
* 'ir_remote_Circuit_diagram.png' - Circuit schematic diagram.
## Circuit Connections
* IR Receiver VCC -> Arduino 5v
* IR Receiver GND -> Arduino GND
* IR Receiver Signal (DAT) -> Arduino Digital Pin 3
* LED Positive (Anode via Resistor) -> Arduino Digital Pin 5
## How It Works
1. The system initializes the serial communication and starts the IR receiver using 'IrReceiver.begin()' in 'setup()'.
2. In the 'loop()', the receiver continuously listens for incoming infrared light pulses from the remote.
3. when a button is pressed, the signal is decoded into a unique hexadecimal value and printed to the Serial Monitor.
4. A 'switch' statement evaluates the received code:
   * Button 1: Turns the Output LED 'HIGH' (ON).
   * Button 2: Turns the output LED 'LOW'(OFF).
5. The system calls 'IrReceiver.resume()' to prepare and listen for the next remote signal
