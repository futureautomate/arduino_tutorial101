const int ledPin = 9; // PWM-capable pin
const int analogPin = A0; // Analog input pin (A0)

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Read the analog value from A0 (0 to 1023) and map it to LED brightness (0 to 255)
  int sensorValue = analogRead(analogPin);
  int brightness = map(sensorValue, 0, 1023, 0, 255);
  
  // Control LED brightness
  analogWrite(ledPin, brightness);
}