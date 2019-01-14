int LED1=9;
int LED2=7;
int LEDb1=3;
int LEDb2=4;
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
  for(int i=1;i<=LEDb1;i++)
  {
    Serial.print("  You are on blink:-");
    Serial.println(i);
    analogWrite(LED1,255);
    delay(250);
    analogWrite(LED1,0);
    delay(250);
  }
  Serial.println(" ");
  Serial.println("The 2nd LED is blinking");
  for(int i=1;i<=LEDb2;i++)
  {
    Serial.print("  You are on blink:-");
    Serial.println(i);
    analogWrite(LED2,255);
    delay(250);
    analogWrite(LED2,0);
    delay(250);
  }
}
