int l = 13;
int m = 11;

void setup(){
  pinMode(l,OUTPUT);
  pinMode(m,INPUT);
  Serial.begin(9600);
}
void loop(){
  int d = digitalRead(m);
  if(d == HIGH){
    digitalWrite(l,HIGH);
    Serial.println("mottion detecté");
  }
  else{ digitalWrite(l,LOW);Serial.println("mottion NO detecté");}
  delay(1000);
}
  