void setup() {
  pinMode(18, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(23, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  digitalWrite(18, LOW);
  digitalWrite(2, LOW);
  digitalWrite(23, LOW);
  digitalWrite(5, LOW);
  delay(200);

  digitalWrite(18, HIGH);
  digitalWrite(2, LOW);
  digitalWrite(23, LOW);
  digitalWrite(5, LOW);
  delay(200);

  digitalWrite(18, LOW);
  digitalWrite(2, HIGH);
  digitalWrite(23, LOW);
  digitalWrite(5, LOW);
  delay(200);

  digitalWrite(18, LOW);
  digitalWrite(2, LOW);
  digitalWrite(23, HIGH);
  digitalWrite(5, LOW);
  delay(200);

  digitalWrite(18, LOW);
  digitalWrite(2, LOW);
  digitalWrite(23, LOW);
  digitalWrite(5, HIGH);
  delay(200);
}