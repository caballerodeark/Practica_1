#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  Serial.print("Hola mundo");
  pinMode(23,OUTPUT);
  // put your setup code here, to run once:
}

void loop() {
  Serial.println("ON");
  delay(200);
  Serial.println("OFF");
  delay(200);
  // put your main code here, to run repeatedly:
}