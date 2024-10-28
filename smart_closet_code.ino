const int irSensorPin = 7;    // IR sensor signal pin
const int ledPin = 8;        // LED pin

void setup() {
  pinMode(irSensorPin, INPUT); // Set IR sensor as input
  pinMode(ledPin, OUTPUT);     // Set LED as output
}

void loop() {
  int sensorState = digitalRead(irSensorPin); // Read IR sensor state

  if (sensorState == HIGH) {    // When the sensor detects (e.g., door open)
    digitalWrite(ledPin, HIGH); // Turn on LED
  } else {                     // When sensor does not detect (e.g., door closed)
    digitalWrite(ledPin, LOW);  // Turn off LED
  }
}
