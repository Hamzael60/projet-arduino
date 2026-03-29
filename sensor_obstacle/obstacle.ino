int o = 13;
int l = 12;
void setup() {
  pinMode(o,INPUT);
  pinMode(l,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  int v = digitalRead(o);
  if(v == LOW){
    digitalWrite(l,HIGH); Serial.println("objet detecté");
  }
  else {
    digitalWrite(l,LOW); Serial.println("objet NO detecté");
  }
  delay(500);
}
