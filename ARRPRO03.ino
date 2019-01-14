int LED1=9;
int LED2=7;
String Msg1="The 1st LED is blinking";
void setup() {
  // put your setup code here, to run once:
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(Msg1);
  for(int i=1;i<=5;i++)
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
  for(int i=1;i<=5;i++)
  {
    Serial.print("  You are on blink:-");
    Serial.println(i);
    digitalWrite(LED2,HIGH);
    delay(250);
    digitalWrite(LED2,LOW);
    delay(250);
  }
}
