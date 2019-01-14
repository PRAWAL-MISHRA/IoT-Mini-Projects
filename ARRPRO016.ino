int LED1=11;
int LED2=10;
int LED3=9;
int LED4=8;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available())
  {
    char data=Serial.read();
    switch(data)
    {
      case 'a':
        digitalWrite(LED1,HIGH);
        Serial.println("LED 1 is switched ON");
        break;
      case 'b':
        digitalWrite(LED1,LOW);
        Serial.println("LED 1 is switched OFF");
        break;
      case 'c':
        digitalWrite(LED2,HIGH);
        Serial.println("LED 2 is switched ON");
        break;
      case 'd':
        digitalWrite(LED2,LOW);
        Serial.println("LED 1 is switched OFF");
        break;
      case 'e':
        digitalWrite(LED3,HIGH);
        Serial.println("LED 3 is switched ON");
        break;
      case 'f':
        digitalWrite(LED3,LOW);
        Serial.println("LED 3 is switched OFF");
        break;
      case 'g':
        digitalWrite(LED4,HIGH);
        Serial.println("LED 4 is switched ON");
        break;
      case 'h':
        digitalWrite(LED4,LOW);
        Serial.println("LED 4 is switched OFF");
        break;
      default:
        break;
    }
  }
}
