#include "main.h"
#include "variables.h"
#include "functions.h"

void initial(){
    motor_set_reversed(BACK_LEFT_MOTOR, BACK_LEFT_MOTOR_REV);
    motor_set_reversed(FRONT_LEFT_MOTOR, FRONT_LEFT_MOTOR_REV);
	motor_set_reversed(BACK_RIGHT_MOTOR, BACK_RIGHT_MOTOR_REV);
    motor_set_reversed(FRONT_RIGHT_MOTOR, FRONT_RIGHT_MOTOR_REV);
    motor_set_brake_mode(FRONT_RIGHT_MOTOR, MOTOR_BRAKE_HOLD);
    motor_set_brake_mode(FRONT_LEFT_MOTOR, MOTOR_BRAKE_HOLD);
    motor_set_brake_mode(BACK_RIGHT_MOTOR, MOTOR_BRAKE_HOLD);
    motor_set_brake_mode(BACK_LEFT_MOTOR, MOTOR_BRAKE_HOLD);
}