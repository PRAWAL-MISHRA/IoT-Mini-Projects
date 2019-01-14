# include <LiquidCrystal.h>
LiquidCrystal LCD(10,9,5,4,3,2);
int myCounter=0;
void setup() {
  // put your setup code here, to run once:
  LCD.begin(16,2);
  LCD.setCursor(0,0);
  LCD.print("My Timer :-");
}

void loop() {
  analogWrite(11,130);
  // put your main code here, to run repeatedly:
  for(int myCounter=1; myCounter<=10; myCounter++)
  {
    LCD.setCursor(0,1);
    LCD.print("                ");
    LCD.setCursor(0,1);
    LCD.print(myCounter);
    LCD.print(" seconds");
    delay(1000);
  }

  for(int myCounter=10; myCounter>=0; myCounter--)
  {
    LCD.setCursor(0,1);
    LCD.print("                ");
    LCD.setCursor(0,1);
    LCD.print(myCounter);
    LCD.print(" seconds");
    delay(1000);
  }
}
