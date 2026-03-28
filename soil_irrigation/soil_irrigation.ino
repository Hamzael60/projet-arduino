int relay = 5;
int soil = A0;
int himi,himidity;

void setup(){
  Serial.begin(9600);
  pinMode(relay,OUTPUT);
  pinMode(soil,INPUT);
  Serial.print("test irrigation ! ");

}


void loop(){
  himi = analogRead(soil);
  int himidity = map(himi ,1028 , 0 ,0 , 100);
  Serial.println(himidity);
  Serial.println("¨%");
  delay(1000);
  if(himidity < 40 ){
    digitalWrite(relay, HIGH);
    Serial.println("irrigation ON ");
  }
  else {
    digitalWrite(relay, LOW);
    Serial.println("full irrigation ");
  }

}
