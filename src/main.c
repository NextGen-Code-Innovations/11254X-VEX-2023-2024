#include "main.h"
#include "variables.h"
#include "functions.h"

void initialize() {
    motor_set_reversed(BACK_LEFT_MOTOR, BACK_LEFT_MOTOR_REV);
    motor_set_reversed(FRONT_LEFT_MOTOR, FRONT_LEFT_MOTOR_REV);
	motor_set_reversed(BACK_RIGHT_MOTOR, BACK_RIGHT_MOTOR_REV);
    motor_set_reversed(FRONT_RIGHT_MOTOR, FRONT_RIGHT_MOTOR_REV);
    motor_set_brake_mode(FRONT_RIGHT_MOTOR, MOTOR_BRAKE_HOLD);
    motor_set_brake_mode(FRONT_LEFT_MOTOR, MOTOR_BRAKE_HOLD);
    motor_set_brake_mode(BACK_RIGHT_MOTOR, MOTOR_BRAKE_HOLD);
    motor_set_brake_mode(BACK_LEFT_MOTOR, MOTOR_BRAKE_HOLD);

}

void disabled() {}

void competition_initialize() {}

void autonomous(){
    if (Auton_Selection_port == 0){  // button off
        offensive();
    } else if(Auton_Selection_port == 1){ // button on
        defensive();
    } else {
        return 0;
    }
}

void drive_FN(){  // this is the main drive function for the robot for op control -- DO NOT CHANGE
                  // You can change the direction under 'variables.h' setting section
    for (;;) {
        int y = controller_get_analog(CONTROLLER_MASTER, drivingReversed * ANALOG_LEFT_Y);
        int t = controller_get_analog(CONTROLLER_MASTER, turningReversed * ANALOG_RIGHT_X);
        if (y == 0 && t == 0) {
            motor_brake(FRONT_RIGHT_MOTOR);
            motor_brake(BACK_RIGHT_MOTOR);
            motor_brake(FRONT_LEFT_MOTOR);
            motor_brake(BACK_LEFT_MOTOR);

        } else {
            motor_move(FRONT_RIGHT_MOTOR, y + t);
            motor_move(FRONT_LEFT_MOTOR, y - t);
            motor_move(BACK_LEFT_MOTOR, y - t);
            motor_move(BACK_RIGHT_MOTOR, y + t);
        }
        task_delay(20);
    }
}

void FlyWheel_FN(){
    static bool c_on = false;
    for (;;) {
        if (controller_get_digital_new_press(CONTROLLER_MASTER, DIGITAL_DOWN)) 
            c_on = !c_on;
        if (c_on)
            motor_move(FLY_WHEEL_MOTOR, 100);
        else
            motor_brake(FLY_WHEEL_MOTOR);
        task_delay(2);
    }
}

void opcontrol(){  //----------------------------------------------------------- Threading
    task_create(drive_FN, NULL, TASK_PRIORITY_DEFAULT, TASK_STACK_DEPTH_DEFAULT, "Drive");
    task_create(FlyWheel_FN, NULL, TASK_PRIORITY_DEFAULT, TASK_STACK_DEPTH_DEFAULT, "Fly Wheel");
}
