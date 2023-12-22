#ifndef FUNCTIONS
#define FUNCTIONS

#include "main.h"

//initialize 
void initial();

//sensors
void getSensorPosition(double sensor);

//movement 
void moveForward(double dist, double speed);
void moveBackward(double dist, double speed);
void turnLeft(double angle, double speed);
void turnRight(double angle, double speed);
void launch(double time);

//autonomous
void auton();

#endif
