#include "SonicSensor.h"
#include "Car.h"

SonicSensor leftSensor = SonicSensor(2, 3);
SonicSensor frontSensor = SonicSensor(4, 5);
SonicSensor rightSensor = SonicSensor(6, 7);

Car robot = Car(12, 13, 11, 10);

void setup()
{
    Serial.begin(9600);
    Serial.println("Started!");

    pinMode(13, OUTPUT);
}

void loop()
{
    delay(100);
    Serial.print((String)leftSensor.getDistance() + " ");
    Serial.print((String)frontSensor.getDistance() + " ");
    Serial.println(rightSensor.getDistance());
}
