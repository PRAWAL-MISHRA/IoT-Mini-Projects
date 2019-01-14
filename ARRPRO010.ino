# include <TimerOne.h>
int RedLED=9;
int YellowLED=11;
String LEDStatus="ON";

void setup() {
  // put your setup code here, to run once:
  pinMode(RedLED,OUTPUT);
  pinMode(YellowLED,OUTPUT);
  Timer1.initialize(1000000);
  Timer1.attachInterrupt(BlinkYellow);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(RedLED,HIGH);
  delay(250);
  digitalWrite(RedLED,LOW);
  delay(250);
}

void BlinkYellow()
{
  if(LEDStatus=="ON")
  {
    digitalWrite(YellowLED,LOW);
    LEDStatus="OFF";
    return;
  }
  if(LEDStatus=="OFF")
  {
    digitalWrite(YellowLED,HIGH);
    LEDStatus="ON";
    return;
  }
}
