int trigPin = 9;
int echoPin = 10;
int ledPin = 11;
int buzzerPin = 12;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  long duration = pulseIn(echoPin, HIGH);
  int distance = duration / 58;
  
  Serial.println(distance);
  
  if (distance < 10 && distance > 0) {
    digitalWrite(ledPin, HIGH);
    tone(buzzerPin, 1000);
    delay(50);
    noTone(buzzerPin);
    delay(50);
  }
  else if (distance < 30 && distance > 0) {
    digitalWrite(ledPin, HIGH);
    tone(buzzerPin, 500);
    delay(200);
    noTone(buzzerPin);
    delay(200);
  }
  else if (distance < 60 && distance > 0) {
    analogWrite(ledPin, 50);
    noTone(buzzerPin);
  }
  else {
    digitalWrite(ledPin, LOW);
    noTone(buzzerPin);
  }
  
  delay(100);
}