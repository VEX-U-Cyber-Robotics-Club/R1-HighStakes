#include "main.h"
#include "pros/adi.hpp"

// Function to set the brake mode for a motor
void setMotorBrakeMode(pros::Motor& motor, pros::motor_brake_mode_e_t mode) {
    motor.set_brake_mode(mode);
}

// Function to configure both motors with the same brake mode
void configureAllMotorsBrakeMode(pros::motor_brake_mode_e_t mode) {
    setMotorBrakeMode(I1, mode);
    setMotorBrakeMode(I2, mode);
}


pros::adi::Button objectSensor('A'); // If an ADI Button sensor is on port 'A'
void intake(int speed) {
    while (!objectSensor.get_value()) { // Continue running intake while no object is detected
        I1.move_velocity(speed);
        I2.move_velocity(speed);
        pros::delay(20);
    }
    I1.move_velocity(0); // Stop the motors once an object is detected
    I2.move_velocity(0);
}
int main() {
    // Set up motors to hold their position when not powered
    configureAllMotorsBrakeMode(pros::E_MOTOR_BRAKE_HOLD);
    while (true) {
        if (someCondition) { // Replace someCondition with control logic
            intake(100); // Run intake at full speed
        }
        pros::delay(20); // Sleep 
    }
}