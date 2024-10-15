#include <Servo.h>

Servo myservo; // Create a Servo object named myservo
void setup() {
  myservo.attach(7); // Attach the servo to digital pin 7
  Serial.begin(9600); // Initialize serial communication at 9600 baud rate
}

void loop() {
  for (int ang = 0; ang < 180; ang++) { // Loop from 0 to 359 degrees
    myservo.write(ang); // Set the servo position to the current angle
    Serial.println(ang); // Print the current angle to the Serial Monitor
    delay(50); // Wait for 50 milliseconds
  delay(15);
  }

  for (int ang = 180; ang > 0; ang--) { // Loop from 180 to 1 degree
    myservo.write(ang); // Set the servo position to the current angle
    Serial.println(ang); // Print the current angle to the Serial Monitor
    delay(50); // Wait for 50 milliseconds
  }
}
