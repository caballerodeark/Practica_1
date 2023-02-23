#include <Arduino.h>



void setup() {
  Serial.begin(115200);
  Serial.print("afesdzxgds");
  pinMode(23,OUTPUT);
  
  // put your setup code here, to run once:
}

void loop() {
  digitalWrite(23,HIGH);
  Serial.println("ON");
  Serial.println(temperatureRead());
  Serial.println(analogRead(15));
  delay(200);

  digitalWrite(23,LOW);
  Serial.println("OFF");
  delay(200);

  // put your main code here, to run repeatedly:
}
