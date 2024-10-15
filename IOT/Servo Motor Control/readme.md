# Servo Motor Control with Arduino

This project demonstrates how to control a servo motor's position using an Arduino and a potentiometer. The potentiometer allows you to adjust the angle of the servo motor, providing a simple interface for controlling its movement.

## Components Required

- **Arduino Board** (e.g., Arduino Uno, Nano)
- **Servo Motor**
- **Potentiometer** (10kΩ)
- **Jumper Wires**
- **Breadboard** (optional)

## Circuit Diagram

![Circuit Diagram](https://example.com/circuit-diagram.png) <!-- Replace with actual circuit diagram link -->

### Connections

- **Servo Motor:**
  - Red wire to Arduino 5V
  - Brown wire to Arduino GND
  - Yellow wire to Arduino Pin 9 (Control)

- **Potentiometer:**
  - One side to Arduino 5V
  - Other side to Arduino GND
  - Middle pin to Arduino Pin A0 (Analog Input)

## Code

```cpp
#include <Servo.h>

Servo myServo;  // Create a servo object
int potPin = A0; // Pin connected to the potentiometer
int potValue;     // Variable to store the value from the potentiometer
int servoAngle;   // Variable to store the angle for the servo

void setup() {
  myServo.attach(9); // Attach the servo on pin 9
}

void loop() {
  potValue = analogRead(potPin);          // Read the potentiometer value
  servoAngle = map(potValue, 0, 1023, 0, 180); // Map the value to an angle (0-180)
  myServo.write(servoAngle);                // Set the servo position
  delay(15);                                // Wait for the servo to reach the position
}
