int lm35Pin = A0;

void setup() {
  Serial.begin(9600);
  Serial.println("LM35 temperature sensor started");
}

void loop() {
  int analogValue = analogRead(lm35Pin);

  float voltage = analogValue * (5.0 / 1023.0);

  float temperature = voltage * 100.0;

  Serial.print("Analog: ");
  Serial.print(analogValue);
  Serial.print(", Voltage: ");
  Serial.print(voltage);
  Serial.print("V, Temperature: ");
  Serial.print(temperature);
  Serial.println("°C");

  delay(1000);
}