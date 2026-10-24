## PIR Motion Security System
An Arduino-based security alarm prototype that detects unauthorized movement using a PIR motion sensor, instantly triggering an audible buzzer alert and a visual LED indicator
## Components Used
* Arduino Uno (Microcontroller)
* PIR Motion Sensor
* Active/Passive Buzzer
* LED & Resistor
* Jumper Wires & Breadboard
## Repository Structure
* 'pir_motion_alarm.ino' - Arduino C++ source code for motion detection logic.
* 'pir_circuit_diagram.png' - Circuit schematic diagram.
## Circuit Connections
* PIR Sensor VCC -> Arduino 5v
* PIR Sensor GND -> Arduino GND
* PIR Sensor OUT -> Arduino Digital pin 2
* LED Positive (Anode via Resistor) -> Arduino Digital Pin 4
* Buzzer Positive -> Arduino Digital Pin 6
## How It Works
1. The system initializes and calibrates the PIR sensor during 'setup()'.
2. In the 'loop()', the sensor continuously monitors for infrared radiation changes.
3. When motion is detected('HIGH' state):
    * The buzzer sounds an alarm tone.
    * The Warning LED turns on.
    * A notification message is printed to the Serial Monitor.
4. when motion stops, the system safely resets to standby mode.
