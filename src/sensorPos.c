#include "main.h"
#include "variables.h"

void getSensorPosition(double sensor){
    if(sensor == 'left'){
        sensorValue = rotation_get_position(ROTATION_LEFT_PORT);
    }
    if(sensor == 'right'){
        sensorValue = rotation_get_position(ROTATION_RIGHT_PORT);
    }   
}