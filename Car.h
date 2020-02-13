#pragma once

#include <Arduino.h>

class Car
{
public:
    int motorLeftA;
    int motorLeftB;

    int motorRightA;
    int motorRightB;

    Car(int LA, int LB, int RA, int RB);
};
