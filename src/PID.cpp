#include "main.h"
#include "motors.h"
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

int DrivePID() {

while(enableDrivePID){

    prevError = error;
    vex::task::sleep(20);    //Works with prevError, makes prevError, the Error that was 20ms ago 

}


    return 1;
}