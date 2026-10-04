const int POT_PIN = 34; // Potentiometer connected to Analog Pin GPIO 34

void setup() {
  // Initialize serial communication at 115200 baud rate
  Serial.begin(115200);
  
  // ESP32 ADC pins are INPUT by default, but explicit declaration is good practice
  pinMode(POT_PIN, INPUT);
}

void loop() {
  // Read the raw 12-bit analog value (0 to 4095)
  int potValue = analogRead(POT_PIN);
  
  // Print the value to the Serial Monitor
  Serial.print("Analog Value: ");
  Serial.println(potValue);
  
  // Wait for 500 ms before reading again
  delay(500);
}
