void setup() {
  //start serial connection
  Serial.begin(9600);
  //configure pin 2 as an input and enable the external pull-down
  pinMode(13, OUTPUT);
  pinMode(2, INPUT);
}

void loop() {
  // READ THE PUSH BUTTON VALUE INTO A VARIABLE
  int sensorVal = digitalRead(2);
  //print out the value of the pushbutton
  Serial.println(sensorVal);
  if(sensorVal==HIGH){
    digitalWrite(13,HIGH);
  }
  else
  {
    digitalWrite(13,LOW);
  }
}
