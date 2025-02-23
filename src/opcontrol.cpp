#include "main.h"
#include "globals.hpp"
#include "drive.cpp"
//Groups the motors to make them easier to use/code
pros::MotorGroup leftMotors({1, 2, 3, 4});
pros::MotorGroup rightMotors({-5, -6, -7, -8});  //Reversed direction

void opcontrol() {
    pros::Controller master(pros::E_CONTROLLER_MASTER);
    while (true) {
        int dir = master.get_analog(ANALOG_LEFT_Y);  // Forward/backward from the left joystick 
        int turn = master.get_analog(ANALOG_RIGHT_X);  // Turning from the right joystick 

        leftMotors.move(dir + turn); //Sets the left motor voltage
        rightMotors.move(dir - turn); //Sets the right motor voltage

        pros::delay(20);  //Run for 20ms then update 
    }
}