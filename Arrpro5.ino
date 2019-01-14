int redpin = 13;
int bluepin = 12;
int greenpin = 11;
void setup() {
  // put your setup code here, to run once:
pinMode(redpin, OUTPUT);
pinMode(bluepin, OUTPUT);
pinMode(greenpin, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int val = 255;val>0;val--)
  {
    analogWrite(13, val);
    analogWrite(12, 255-val);
    analogWrite(11, 128-val);
    delay(10);
    Serial.println(val, DEC);
  }
  for(int val = 0;val<255;val++)
  {
    analogWrite(13, val);
    analogWrite(12, 255-val);
    analogWrite(11, 128-val);
    delay(10);
    Serial.println(val, DEC);
  }
}
