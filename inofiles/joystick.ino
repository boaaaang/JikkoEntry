#define sw 8

void setup(){
  Serial.begin(9600);  
  pinMode(sw, INPUT_PULLUP);
}

void loop(){
  Serial.print(analogRead(A0)); // x축
  Serial.print(" ");
  Serial.print(analogRead(A1)); // y축
  Serial.print(" ");
  Serial.println(digitalRead(sw));  // z축

  delay(1000);
}