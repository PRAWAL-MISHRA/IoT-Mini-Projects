int data=A0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(data,INPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = analogRead(data);
  float vol = (0.5/1023.0)*value;
  Serial.print(vol);
  Serial.println(" volt");
  delay(1000);
}
