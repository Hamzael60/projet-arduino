#include <Servo.h>
Servo s;
int soundDigitalPin = 13; 

void setup() {
  pinMode(soundDigitalPin, INPUT);
  Serial.begin(9600);
  s.attach(9);
  s.write(88);

}

void loop() {
  // كنشوفو واش الحساس عطى إشارة (البولة سنيات)
  int status = digitalRead(soundDigitalPin);

  if (status == HIGH) { // أو LOW على حسب نوع الحساس، جربهم بجوج
    s.write(0);
    Serial.println("open");
    delay(2000); // غير باش تبان ليك البولة شعلات
  } else {
    s.write(88);
  }
}