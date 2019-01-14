int pin=A0;
int LED1=11;
int LED2=10;
int LED3=9;
int LED4=8;
int value;
void setup() {
  // put your setup code here, to run once:
  pinMode(pin,INPUT);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  value=analogRead(pin);
  if(value>0)
  {
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,HIGH);
    digitalWrite(LED3,HIGH);
    digitalWrite(LED4,HIGH);
    Serial.print("Motion Detected :-");
    Serial.println(value);
    delay(100);
  }
  else
  {
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,LOW);
    digitalWrite(LED3,LOW);
    digitalWrite(LED4,LOW);
    Serial.println(value);
    delay(100);
  }
}
