#include "main.h"
#include "motors.h"
#include "pros/rtos.hpp"
void pre_autom(void) {
//Initializing Robot Config DO NOT REMOVE!
vexcodeInit();

 //All activities that happen before the competition starts
 //Example: clearing encoders, setting servo positions, etc...




}

//Settings (Constants) (sets it initially, when it loops it will reset?)
double Kp = 0.0;             //Proportional gain 
double Ki = 0.0;             //Integral gain 
double Kd = 0.0;             //Derivative gain 

int error; //SensorValue - DesiredValue - Positional Value (gets the difference AKA the error)
int prevError;  //Position 20 miliseconds ago 
int derivative;
int totalError; 

//Variables
bool enableDrivePID = true;

int DrivePID(int targetPosition) {
    int sensorPosition = 0;  // Current position of the robot/drivetrain

while(enableDrivePID){
    sensorPosition = GetSensorPosition(); // Function to get current sensor position (DO THIS)
     // Calculate error
    error = targetPosition - sensorPosition;

     // Calculate cumulative error
    totalError += error;

    // Calculate the rate of error change
    derivative = error - prevError;

    // Calculate control variable (motor power/voltage)
    int drivePower = Kp * error + Ki * totalError + Kd * derivative;

    // Function to set motor power, assuming function exists (DO THIS)
    SetMotorPower(drivePower);  
    prevError = error;   //Works with prevError, makes prevError, the Error that was 20ms ago 
    pros::delay(20);    
}
    return 1;
}