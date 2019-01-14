/*
 * lighting a bunch of LEDs repeated number of times using Arduino Uno
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
  for(int i=1;i<=2;i++)
  {
    digitalWrite(LED1,HIGH);
    delay(150);
    digitalWrite(LED2,HIGH);
    delay(150);
    digitalWrite(LED3,HIGH);
    delay(150);
    digitalWrite(LED3,LOW);
    delay(150);
    digitalWrite(LED2,LOW);
    delay(150);
    digitalWrite(LED1,LOW);
    delay(150);
  }
}
