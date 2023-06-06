# Pràctica 1: Blink (Guillem Pérez, Vadym Lakymchuk)

En esta pràctica se nos pide desarrollar un codigo para ESP32 donde:

1. Iniciamos el pin LED (pin 23, segun nos indico el profesor) como salida (OUTPUT)
2. Iniciamos el terminal serie (Serial)
3. Iniciamos el bucle infinito (void loop()):
   * encender LED (HIGH)
   * sacar por puerto serie mensaje ON (con el subprograma Serial.println("ON"))
   * esperar 500 milisegundos (delay(500))
   * apagar LED (LOW)
   * sacar por puerto serie mensaje OFF (igual pero con "OFF")
   * esperar 500 milisegundos

El script es el siguiente:

```cpp
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
```
