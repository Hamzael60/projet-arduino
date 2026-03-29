int o = 13;
int l = 12;
void setup() {
  pinMode(o,INPUT);
  pinMode(l,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  int v = digitalRead(o);
  if(v == HIGH){
    digitalWrite(l,HIGH); Serial.println("touch detecté");
  }
  else {
    digitalWrite(l,LOW); Serial.println("touch NO detecté");
  }
  delay(500);
}
