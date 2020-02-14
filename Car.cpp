#include "Car.h"

Car::Car(int LA, int LB, int RA, int RB)
{
    // Left Motors
    motorLA = LA;
    motorLB = LB;
    pinMode(motorLA, OUTPUT);
    pinMode(motorLB, OUTPUT);

    // Right Motors
    motorRA = RA;
    motorRB = RB;
    pinMode(motorRA, OUTPUT);
    pinMode(motorRB, OUTPUT);
}

void Car::stopCar()
{
    digitalWrite(motorLA, LOW);
    digitalWrite(motorLB, LOW);
    digitalWrite(motorRA, LOW);
    digitalWrite(motorRB, LOW);
}

void Car::moveForward()
{
    stopCar();

    Serial.println("Moving forward...");
    digitalWrite(motorLB, HIGH);
    digitalWrite(motorRA, HIGH);
}

void Car::turnLeft()
{
    stopCar();

    Serial.println("Turning left...");
    digitalWrite(motorLA, HIGH);
    digitalWrite(motorRA, HIGH);
}

void Car::turnRight()
{
    stopCar();

    Serial.println("Turning right...");
    digitalWrite(motorLB, HIGH);
    digitalWrite(motorRB, HIGH);
}
