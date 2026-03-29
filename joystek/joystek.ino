#define VRx A0
#define VRy A1
#define SW 2

void setup() {
  Serial.begin(9600);
  pinMode(SW, INPUT_PULLUP);
}

void loop() {
  int x = analogRead(VRx);
  int y = analogRead(VRy);
  int button = digitalRead(SW);

  Serial.print("X: ");
  Serial.print(x);

  Serial.print(" | Y: ");
  Serial.print(y);

  Serial.print(" | Button: ");
  Serial.println(button);

  delay(1000);
}