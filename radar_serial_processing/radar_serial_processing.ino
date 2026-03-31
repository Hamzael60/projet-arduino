#include <Servo.h>

Servo s;
int trig = 12;
int echo = 13;

float d, t;

void plus() {
  for (int i = 0; i <= 180; i++) {
    s.write(i);
    delay(30);

    digitalWrite(trig, LOW);
    delayMicroseconds(2);
    digitalWrite(trig, HIGH);
    delayMicroseconds(10);
    digitalWrite(trig, LOW);

    t = pulseIn(echo, HIGH);
    d = t * 0.034 / 2;

     Serial.print(i);
    Serial.print(",");
    Serial.print(d);
    Serial.print(".");
  }
}

void moin() {
  for (int i = 180; i >= 0; i--) {
    s.write(i);
    delay(30);

    digitalWrite(trig, LOW);
    delayMicroseconds(2);
    digitalWrite(trig, HIGH);
    delayMicroseconds(10);
    digitalWrite(trig, LOW);

    t = pulseIn(echo, HIGH);
    d = t * 0.034 / 2;

    Serial.print(i);
    Serial.print(",");
    Serial.print(d);
    Serial.print(".");
  }
}

void setup() {
  Serial.begin(9600);

  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);

  s.attach(10);
}

void loop() {
  plus();
  moin();
}