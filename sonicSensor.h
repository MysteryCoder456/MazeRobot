#pragma once

#include <Arduino.h>

class SonicSensor
{
public:
    int trig;
    int echo;

    SonicSensor(int trigPin, int echoPin);
    long getDistance();
};
