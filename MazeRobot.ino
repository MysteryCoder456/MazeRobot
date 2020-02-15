#include "SonicSensor.h"
#include "Car.h"

SonicSensor leftSensor = SonicSensor(2, 3);
SonicSensor frontSensor = SonicSensor(4, 5);
SonicSensor rightSensor = SonicSensor(6, 7);

Car robot = Car(12, 13, 10, 11);

void setup()
{
    Serial.begin(9600);
    Serial.println("Started!");
}

void loop()
{
    long left = leftSensor.getDistance();
    long front = frontSensor.getDistance();
    long right = rightSensor.getDistance();

    long frontThreshold = 10;
    long sideThreshold = 15;

    int moveDelay = 1000;
    int turnDelay = 500;

    // Not Blocked Left
    if (left >= sideThreshold)
    {
        robot.turnLeft();
        delay(turnDelay);
        
        robot.moveForward();
        delay(moveDelay);
    }
    // Not Blocked Right
    else if (right >= sideThreshold)
    {
        robot.turnRight();
        delay(turnDelay);
        
        robot.moveForward();
        delay(moveDelay);
    }
    // Not Blocked Front
    else if (front >= frontThreshold)
    {
        robot.moveForward();
    }
    // Blocked Front, Left and Right
    else if (front < frontThreshold && left < sideThreshold && right < sideThreshold)
    {
        robot.turnLeft():
        delay(turnDelay * 2);
    }
}
