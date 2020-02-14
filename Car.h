#pragma once

#include <Arduino.h>

class Car
{
public:
    int motorLA; // Left Clockwise
    int motorLB; // Left Counter-Clockwise

    int motorRA; // Right Clockwise
    int motorRB; // Right Counter-Clockwise

    Car(int LA, int LB, int RA, int RB);
    void stopCar();
    void moveForward();
    void turnLeft();
    void turnRight();
};
