#include "sonicSensor.h"

SonicSensor frontSensor = SonicSensor(2, 3);

void setup()
{
    // put your setup code here, to run once:
    Serial.begin(9600);
    Serial.println("Started!");

    pinMode(13, OUTPUT);
}

void loop()
{
    // put your main code here, to run repeatedly:
    long d = frontSensor.getDistance();
    Serial.println(d);
    
    if (d < 10.0)
    {
        digitalWrite(13, HIGH);
    }
    else
    {
        digitalWrite(13, LOW);
    }
}
