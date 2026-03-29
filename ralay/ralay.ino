int l = 13;
int m = 11;

void setup(){
  pinMode(l,OUTPUT);
  pinMode(m,OUTPUT);
  Serial.begin(9600);
}
void loop(){
  if(!Serial.available()){
    String d = Serial.readString();
    if(d == "1"){
      digitalWrite(l,HIGH);
      digitalWrite(m,HIGH);
      Serial.println("relay active");
    }
    else if(d=="0"){
      digitalWrite(l,LOW);
      digitalWrite(m,LOW);

      Serial.println("relay desecative");
    }

 }

}
  