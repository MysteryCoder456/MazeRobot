#include "SonicSensor.h"

SonicSensor::SonicSensor(int trigPin, int echoPin)
{
    trig = trigPin;
    echo = echoPin;

    pinMode (trig, OUTPUT);
    pinMode (echo, INPUT);
}

long SonicSensor::getDistance()
{
    digitalWrite(trig, LOW);
    delayMicroseconds(2);

    digitalWrite(trig, HIGH);
    delayMicroseconds(10);
    digitalWrite(trig, LOW);

    unsigned long duration = pulseIn(echo, HIGH);
    long distance = (duration * 0.034 / 2);
    int offset = distance * 0; //0.03

    distance += offset;
    return distance;
}
