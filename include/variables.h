#ifndef variables
#define variables 

#include "main.h"

// -------------------------------------------------- Settings
#define turningReversed 1 // 1 for true and -1 for false
#define drivingReversed 1 // 1 for true and -1 for false

#define BACK_LEFT_MOTOR_REV true
#define FRONT_LEFT_MOTOR_REV true
#define BACK_RIGHT_MOTOR_REV false
#define FRONT_RIGHT_MOTOR_REV false


// --------------------------------------------------  Drivetrian ports
#define FRONT_RIGHT_MOTOR 1
#define FRONT_LEFT_MOTOR 2
#define BACK_LEFT_MOTOR 3
#define BACK_RIGHT_MOTOR 4


// -------------------------------------------------- Extra motor ports
#define FLY_WHEEL_MOTOR 5


// ---------------------------------------------------  Sensors 
#define ROTATION_RIGHT_PORT 10
#define ROTATION_LEFT_PORT 11
int sensorValue = 0;

#endif
