#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
void setup(){
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("hamza el ouardi");
}

void loop(){
  lcd.setCursor(0,0);
  lcd.clear();
  lcd.print("hamza");
  lcd.setCursor(0,1);
  lcd.print(millis()/1000);
  delay(1000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("el");
  lcd.setCursor(0,1);
  lcd.print(millis()/1000);
  delay(1000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("ouardi");
  lcd.setCursor(0,1);
  lcd.print(millis()/1000);
  delay(1000);
  


}