int Pin1=9;
int Pin2=10;
int Pin3=11;
int Choice;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(Pin1,OUTPUT);
  pinMode(Pin2,OUTPUT);
  pinMode(Pin3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Enter the number of LED you want to blink:-");
  while(Serial.available()==0);
  Choice=Serial.parseInt();
  switch(Choice)
  {
    case 1:
      digitalWrite(Pin1,HIGH);
      break;
    case 2:
      digitalWrite(Pin2,HIGH);
      break;
    case 3:
      digitalWrite(Pin3,HIGH);
      break;
    case 12:
    case 21:
      digitalWrite(Pin1,HIGH);
      digitalWrite(Pin2,HIGH);
      break;
    case 23:
    case 32:
      digitalWrite(Pin2,HIGH);
      digitalWrite(Pin3,HIGH);
      break;
    case 13:
    case 31:
      digitalWrite(Pin1,HIGH);
      digitalWrite(Pin3,HIGH);
      break;
    case 123:
    case 132:
    case 213:
    case 312:
    case 321:
    case 231:
      digitalWrite(Pin1,HIGH);
      digitalWrite(Pin2,HIGH);
      digitalWrite(Pin3,HIGH);
      break;
    default:
      Serial.println("Please Enter a valid number");
  }
  delay(1000);
  digitalWrite(Pin1,LOW);
  digitalWrite(Pin2,LOW);
  digitalWrite(Pin3,LOW);
}
