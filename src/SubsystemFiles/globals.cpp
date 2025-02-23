#include "main.h"
//I think I need to define it gloabally 
pros::MotorGroup leftMotors({1, 2, 3, 4});
pros::MotorGroup rightMotors({-5, -6, -7, -8}); 

pros::Controller master(pros::E_CONTROLLER_MASTER);
