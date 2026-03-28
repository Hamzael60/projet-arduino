#include <Servo.h>
Servo s;
void setup() {
  s.attach(9);
  s.write(0);
  Serial.begin(9600);

}

void loop() {
  if(Serial.available()){
    String cn = Serial.readString();
    if(cn == "0"){  s.write(0); }
    else if(cn == "45"){  s.write(45); }
    else if(cn == "90"){  s.write(90); }
    else if(cn == "135"){  s.write(135); }
    else if(cn == "180"){  s.write(180); }
  }

}
