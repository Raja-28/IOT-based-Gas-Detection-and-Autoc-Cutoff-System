#include <Servo.h>

const int gasSensorPin = A0;     // Analog pin connected to gas sensor
const int servoPin = 9;          // Digital pin connected to servo motor
const int mosfetPin = 8;         // Digital pin connected to MOSFET gate

Servo servoMotor;                // Create servo object to control a servo

int gasThreshold = 300;          // Threshold value for gas detection

void setup() {
  pinMode(gasSensorPin, INPUT);
  pinMode(mosfetPin, OUTPUT);
  servoMotor.attach(servoPin);   // Attaches the servo on pin 9 to the servo object

  Serial.begin(9600);            // Initialize serial communication
  servoMotor.write(0);           // Initial position of the servo motor (closed valve)
  digitalWrite(mosfetPin, LOW);  // Cooling fan is off initially
}

void loop() {
  int gasLevel = analogRead(gasSensorPin);  // Read the analog value from gas sensor

  Serial.print("Gas Level: ");
  Serial.println(gasLevel);

  if (gasLevel > gasThreshold) {
    // Gas detected
    Serial.println("Gas detected! Activating safety measures...");
    
    servoMotor.write(90);            // Turn the servo motor to close the valve (90 degrees)
    digitalWrite(mosfetPin, HIGH);   // Turn on the cooling fan
  } else {
    // No gas detected
    Serial.println("No gas detected.");
    
    servoMotor.write(0);             // Open the valve (0 degrees)
    digitalWrite(mosfetPin, LOW);    // Turn off the cooling fan
  }

  delay(1000);  // Wait for 1 second before next reading
}
