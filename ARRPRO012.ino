# include <LiquidCrystal.h>
LiquidCrystal LCD(10,9,5,4,3,2);
int TrigPin = 13;
int EchoPin = 12;
float distance;
float Time;
void setup() {
  // put your setup code here, to run once:
  LCD.begin(16,2);
  LCD.setCursor(0,0);
  LCD.print("Distance is:-");
  pinMode(TrigPin,OUTPUT);
  pinMode(EchoPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(11,130);
  digitalWrite(TrigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(TrigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(TrigPin,LOW);

  Time=pulseIn(EchoPin,HIGH);

  distance=(Time*0.000343)/2;

  Measure(distance);
  delay(500);
}
void Measure(float d)
{
  int dcm=d*100;
  if(d<1)
  {
    LCD.setCursor(0,1);
    LCD.print("                ");
    LCD.setCursor(0,1);
    LCD.print(dcm);
    LCD.print(" cm");
  }
  else if(d>=1)
  {
    LCD.setCursor(0,1);
    LCD.print("                ");
    LCD.print(d);
    LCD.print(" meters");
  }
}
