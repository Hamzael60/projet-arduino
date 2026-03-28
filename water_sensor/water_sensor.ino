int s=A0;

void setup(){
  Serial.begin(9600);
  pinMode(s,INPUT);
}
void loop(){
  int d = analogRead(s);
  int l = map(d,600,700,0,100);//map(source, s_min,s_max,affich_min,affich,max)
  Serial.println(l);
  Serial.println(" % ");
  delay(500);
}