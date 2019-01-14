/*
 * controlling the lighting of a bunch of LEDs using Arduino Uno
 * Here they are 4 of them
*/
int LED1=9;
int LED2=7;
int LED3=5;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED1,HIGH);
  delay(375);
  digitalWrite(LED2,HIGH);
  delay(375);
  digitalWrite(LED3,HIGH);
  delay(375);
  digitalWrite(LED1,HIGH);
  delay(250);
  digitalWrite(LED1,LOW);
  delay(250);
  digitalWrite(LED1,HIGH);
  delay(250);
  digitalWrite(LED1,LOW);
  delay(250);
  digitalWrite(LED2,HIGH);
  delay(250);
  digitalWrite(LED2,LOW);
  delay(250);
  digitalWrite(LED2,HIGH);
  delay(250);
  digitalWrite(LED2,LOW);
  delay(250);
  digitalWrite(LED3,HIGH);
  delay(250);
  digitalWrite(LED3,LOW);
  delay(250);
  digitalWrite(LED3,HIGH);
  delay(250);
  digitalWrite(LED3,LOW);
  delay(250);
  digitalWrite(LED1,HIGH);
  delay(375);
  digitalWrite(LED1,LOW);
  delay(375);
  digitalWrite(LED2,HIGH);
  delay(375);
  digitalWrite(LED2,LOW);
  delay(375);
  digitalWrite(LED3,HIGH);
  delay(900);
  digitalWrite(LED3,LOW);
  delay(100);
  digitalWrite(LED1,HIGH);
  delay(250);
  digitalWrite(LED1,LOW);
  delay(250);
  digitalWrite(LED1,HIGH);
  delay(250);
  digitalWrite(LED1,LOW);
  delay(250);
  digitalWrite(LED3,HIGH);
  delay(250);
  digitalWrite(LED3,LOW);
  delay(250);
  digitalWrite(LED3,HIGH);
  delay(250);
  digitalWrite(LED3,LOW);
  delay(250);
  digitalWrite(LED1,LOW);
  delay(2500);
  digitalWrite(LED2,LOW);
  delay(2500);
  digitalWrite(LED3,LOW);
  delay(2500);
  
}
