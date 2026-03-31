int echo = 13;
int trig = 12;
void setup() {
  Serial.begin(9600);
  pinMode(echo,INPUT);
  pinMode(trig,OUTPUT);

}

void loop() {
  digitalWrite(trig,LOW);
  delayMicroseconds(2);

  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);

  float t = pulseIn(echo,HIGH);
  float d = t*0.034 / 2;
  Serial.println("distance es : ");
  Serial.println(d);
  delay(500);

}
