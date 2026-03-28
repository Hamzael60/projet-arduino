#include <DHT.h>
int d = 11;
#define t DHT11

DHT dht(d,t);

void setup(){
  Serial.begin(9600);
  dht.begin();
}

void loop(){
  delay(3000);
  float T = dht.readTemperature();
  float H = dht.readHumidity();

  Serial.print("Humidity: ");
  Serial.print(H);
  Serial.print("%  |  Temperature: ");
  Serial.print(T);
  Serial.println("°C");
}