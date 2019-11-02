void setup() {
  // put your setup code here, to run once:
  Serial.begin(2000000);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(1){
    Serial.print(analogRead(0));
    Serial.print(",");
    Serial.println(analogRead(1));
  }
}
