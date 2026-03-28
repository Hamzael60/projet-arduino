int soundDigitalPin = 2; // الخيط راكب في DO
int ledPin = 13;         // البولة ديال الأردوينو

void setup() {
  pinMode(soundDigitalPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // كنشوفو واش الحساس عطى إشارة (البولة سنيات)
  int status = digitalRead(soundDigitalPin);

  if (status == HIGH) { // أو LOW على حسب نوع الحساس، جربهم بجوج
    digitalWrite(ledPin, HIGH); 
    Serial.println("Tsfika Detected!");
    delay(200); // غير باش تبان ليك البولة شعلات
  } else {
    digitalWrite(ledPin, LOW);
  }
}