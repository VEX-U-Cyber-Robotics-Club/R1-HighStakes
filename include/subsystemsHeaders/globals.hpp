#include "main.h"
#include "globals.hpp"
//motors


//defines lift motor
extern pros::Motor lift; 

//Defines right side drive train motors
extern pros:: Motor R1;
extern pros:: Motor R2;
extern pros:: Motor R3;
extern pros:: Motor R4;

//Defines left side drive train motors 
extern pros:: Motor L1;
extern pros:: Motor L2;
extern pros:: Motor L3;
extern pros:: Motor L4;

//Defines 2 Arm motors 
extern pros:: Motor A1; 
extern pros:: Motor A2;

//Defines 2 Indexer motors
extern pros:: Motor I1;
extern pros:: Motor I2; 

//Defines the Drive Train motors as a group
extern pros::MotorGroup leftMotors;
extern pros::MotorGroup rightMotors;

//Defines the controller
extern pros::Controller master;