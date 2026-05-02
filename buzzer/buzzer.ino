int buzzerPin = 8;

void setup() {
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  tone(buzzerPin, 440);
  delay(1000);
  noTone(buzzerPin);
  delay(1000);
}
