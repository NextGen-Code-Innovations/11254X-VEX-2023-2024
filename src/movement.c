#include "main.h"
#include "variables.h"

void moveForward(double dist, double speed){
    motor_move_absolute(FRONT_LEFT_MOTOR, dist, speed);
    motor_move_absolute(FRONT_RIGHT_MOTOR, dist, speed);
    motor_move_absolute(BACK_LEFT_MOTOR, dist, speed);
    motor_move_absolute(BACK_RIGHT_MOTOR, dist, speed);
}

void moveBackward(double dist, double speed){
    motor_move_absolute(FRONT_LEFT_MOTOR, dist, -(speed));
    motor_move_absolute(FRONT_RIGHT_MOTOR, dist, -(speed));
    motor_move_absolute(BACK_LEFT_MOTOR, dist, -(speed));
    motor_move_absolute(BACK_RIGHT_MOTOR, dist, -(speed));
}

void turnLeft(double angle, double speed){
    motor_move_absolute(FRONT_LEFT_MOTOR, angle, -(speed));
    motor_move_absolute(FRONT_RIGHT_MOTOR, angle, speed);
    motor_move_absolute(BACK_LEFT_MOTOR, angle, -(speed));
    motor_move_absolute(BACK_RIGHT_MOTOR, angle, speed);
}

void turnRight(double angle, double speed){
    motor_move_absolute(FRONT_LEFT_MOTOR, angle, speed);
    motor_move_absolute(FRONT_RIGHT_MOTOR, angle, -(speed));
    motor_move_absolute(BACK_LEFT_MOTOR, angle, speed);
    motor_move_absolute(BACK_RIGHT_MOTOR, angle, -(speed));
}

void launch(double time){
    motor_move(FLY_WHEEL_MOTOR, 127);
    delay(time);
    motor_brake(FLY_WHEEL_MOTOR);
}
