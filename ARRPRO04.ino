int LED1=9;
int LED2=11;
int LED1b;
int LEDb;
String Msg1="The 1st LED is blinking";
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);

  Serial.println("How many times you want the 1st LED to blink?");
  while(Serial.available()==0){ }
  LED1b = Serial.parseInt();

  Serial.println("How many times you want the 2nd LED to blink?");
  while(Serial.available()==0){ }
  LEDb = Serial.parseInt();
}

void loop() {
  // put your main code here, to run repeatedly:
   Serial.println(Msg1);
   for(int i=1;i<=LED1b;i++)
   {
     Serial.print("  You are on blink:-");
     Serial.println(i);
     digitalWrite(LED1,HIGH);
     delay(250);
     digitalWrite(LED1,LOW);
     delay(250);
   }
   Serial.println(" ");
   Serial.println("The 2nd LED is blinking");
   for(int i=1;i<=LEDb;i++)
   {
     Serial.print("  You are on blink:-");
     Serial.println(i);
     digitalWrite(LED2,HIGH);
     delay(250);
     digitalWrite(LED2,LOW);
     delay(250);
   }
}
