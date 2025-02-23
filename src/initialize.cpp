#include "main.h"
//Change 1 to the port number of each
//Defining the drive train motors 
void initialize() {
pros::Motor R1(5,pros::E_MOTOR_GEARSET_#, true, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor R2(6,pros::E_MOTOR_GEARSET_#, true, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor R3(7,pros::E_MOTOR_GEARSET_#, true, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor R4(8,pros::E_MOTOR_GEARSET_#, true, pros::E_MOTOR_ENCODER_COUNTS);

pros::Motor L1(1,pros::E_MOTOR_GEARSET_#, false, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor L2(2,pros::E_MOTOR_GEARSET_#, false, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor L3(3,pros::E_MOTOR_GEARSET_#, false, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor L4(4,pros::E_MOTOR_GEARSET_#, false, pros::E_MOTOR_ENCODER_COUNTS);

//Defining the Arm motors
pros:: Motor A1(1, pros::E_MOTOR_GEARSET_#, true, pros::E_MOTOR_ENCODER_COUNTS);
pros:: Motor A2(1, pros::E_MOTOR_GEARSET_#, true, pros::E_MOTOR_ENCODER_COUNTS);

//Defining the Indeder Motors 
pros:: Motor I1(1, pros::E_MOTOR_GEARSET_#, true, pros::E_MOTOR_ENCODER_COUNTS);
pros:: Motor I2(1, pros::E_MOTOR_GEARSET_#, true, pros::E_MOTOR_ENCODER_COUNTS);

}