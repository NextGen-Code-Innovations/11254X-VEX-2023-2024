#ifndef FUNCTIONS
#define FUNCTIONS

#include "main.h"

//initialize 
void initial();

//sensors
void getSensorPosition(double sensor);

//movement 
void drivetrain(double direction, double distance, double speed);
void moveForward(double dist, double speed);
void moveBackward(double dist, double speed);
void turnLeft(double angle, double speed);
void turnRight(double angle, double speed);
void launch(double time);
void intake(double speed);
void stopFlywheel();

//autonomous
void offensive();
void defensive();

#endif
