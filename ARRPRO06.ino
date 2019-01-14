int LED1=9;
int LED2=11;
int d=15;
String Msg1="The 1st LED is blinking";
void setup() {
  // put your setup code here, to run once:
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<=255;i++)
  {
    analogWrite(LED1,i);
    delay(d);
  }
  for(int i=255;i>=0;i--)
  {
    analogWrite(LED1,i);
    delay(d);
  }
  for(int i=0;i<=255;i++)
  {
    analogWrite(LED2,i);
    delay(d);
  }
  for(int i=255;i>=0;i--)
  {
    analogWrite(LED2,i);
    delay(d);
  }
}
