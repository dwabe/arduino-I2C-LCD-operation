#include <Wire.h>   
#include <LiquidCrystal_I2C.h> 

LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);  // Ustawienie adresu ukladu na 0x27

void setup()  
{
  lcd.begin(16,2);   
  lcd.backlight(); // zalaczenie podwietlenia 
  lcd.setCursor(0,0); 
  lcd.print("LCD & I2C");
  delay(500);
  lcd.setCursor(0,1); 
  lcd.print("**********");
}

void loop() 
{
   lcd.backlight(); // zalaczenie podswietlenia
   delay(5000);
   lcd.noBacklight(); // wylaczenie podswietlenia
   delay(5000);
}
