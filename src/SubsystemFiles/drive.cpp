#include "main.h"

//Defining the motor groups
pros::MotorGroup leftMotors({1, 2, 3, 4});
pros::MotorGroup rightMotors({-5, -6, -7, -8}); 

//Speed for motors is 100 for now
void driveForward (int speed) {
    leftMotors.move_velocity(speed);
    rightMotors.move_velocity(speed);;
}

void driveBackward(int speed) {
    leftMotors.move_velocity(-speed);  // Negative speed for backward motion
    rightMotors.move_velocity(-speed);
}

void turnLeft(int speed) {
    leftMotors.move_velocity(-speed);  // Negative speed for left motors to turn left
    rightMotors.move_velocity(speed);  // Positive speed for right motors
}

void turnRight(int speed) {
    leftMotors.move_velocity(speed);   // Positive speed for left motors
    rightMotors.move_velocity(-speed); // Negative speed for right motors to turn right
}

void opcontrol() {
    while (true) {
     if (master.get_digital(pros::E_CONTROLLER_DIGITAL_UP)) {
        driveForward(100);  // Drive forward at full speed
    } else if (master.get_digital(pros::E_CONTROLLER_DIGITAL_DOWN)) {
        driveBackward(100); // Drive backward at full speed
    } else if (master.get_digital(pros::E_CONTROLLER_DIGITAL_LEFT)) {
        turnLeft(100);      // Turn left at full speed
    } else if (master.get_digital(pros::E_CONTROLLER_DIGITAL_RIGHT)) {
        turnRight(100);     // Turn right at full speed
    } else {
        // Stop all motors if no controls are active
        leftMotors.move_velocity(0);
        rightMotors.move_velocity(0);

    pros::delay(20); // Delays it briefly 
    }
    }

}
