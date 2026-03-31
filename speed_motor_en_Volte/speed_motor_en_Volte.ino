int motor = 5;

void setup() {
  pinMode(motor, OUTPUT);
}

void loop() {
  analogWrite(motor, 0);   // بطيء
  delay(2000);
  analogWrite(motor, 50);   // بطيء
  delay(2000);
  analogWrite(motor, 100);   // بطيء
  delay(2000);

  analogWrite(motor, 150);  // متوسط
  delay(2000);
  analogWrite(motor, 200);   // بطيء
  delay(2000);
  analogWrite(motor, 255);  // سريع
  delay(2000);
}