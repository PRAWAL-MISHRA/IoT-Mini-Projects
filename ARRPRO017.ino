String voice;
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
  while(Serial.available())
  {
    delay(10);
    char c = Serial.read();
    if(c=='#')
    {
      break;
    }
    voice+=c;
  }
  if(voice.length()>0)
  {
    Serial.println(voice);
    if(voice == "all led on")
    {
      digitalWrite(LED1,HIGH);
      digitalWrite(LED2,HIGH);
      digitalWrite(LED3,HIGH);
      digitalWrite(LED4,HIGH);
    }
    else if(voice == "all led off")
    {
      digitalWrite(LED1,LOW);
      digitalWrite(LED2,LOW);
      digitalWrite(LED3,LOW);
      digitalWrite(LED4,LOW);
    }
    else if(voice == "first led on")
    {
      digitalWrite(LED1,HIGH);
    }
    else if(voice == "second led on")
    {
      digitalWrite(LED2,HIGH);
    }
    else if(voice == "third led on")
    {
      digitalWrite(LED3,HIGH);
    }
    else if(voice == "first led off")
    {
      digitalWrite(LED1,LOW);
    }
    else if(voice == "second led off")
    {
      digitalWrite(LED2,LOW);
    }
    else if(voice == "third led off")
    {
      digitalWrite(LED3,LOW);
    }
    else if(voice == "fourth led on")
    {
      digitalWrite(LED4,HIGH);
    }
    else if(voice == "fourth led off")
    {
      digitalWrite(LED4,LOW);
    }
    voice="";
  }
}
