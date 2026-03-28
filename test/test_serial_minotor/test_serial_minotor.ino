int p = 13;

void setup(){

  Serial.begin(9600);
  pinMode(p,OUTPUT);
  Serial.println("erire on et off  : ");

}

void loop(){

  if(Serial.available()){
    String cn = Serial.readString();
    if(cn == "on"){ digitalWrite(p,HIGH); Serial.println(" active ");}
    else if(cn == "off"){ digitalWrite(p,LOW); Serial.println(" desacative ");}
  }

}