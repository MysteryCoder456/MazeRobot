#include "Car.h"

Car::Car(int LA, int LB, int RA, int RB)
{
    // Left Motors
    motorLeftA = LA;
    motorLeftB = LB;
    pinMode(LA, OUTPUT);
    pinMode(LB, OUTPUT);

    // Right Motors
    motorRightA = RA;
    motorRightB = RB;
    pinMode(RA, OUTPUT);
    pinMode(RB, OUTPUT);
}
