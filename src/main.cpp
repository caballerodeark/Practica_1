#include <arduino.h>

void setup()
{
    pinMode(23,OUTPUT) //Paso 1
    Serial.begin(115200); //Paso 2
}

void loop() //Paso 3
{
    digitalWrite(23,HIGH);
    Serial.println("ON");
    delay(500);
    digitalWrite(23,LOW);
    Serial.println("OFF");
    delay(500);
}
