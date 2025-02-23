#include "main.h"
#include "pros/adi.hpp"
using pros::ADIDigitalOut;

ADIDigitalOut pneumaticValve('A');

//Toggle the pneumatic 
void togglePneumatic() {
    static bool isExtended = false; //sees if its extended or not 

    pneumaticValve.set_value(isExtended);
    isExtended =! isExtended; //toggles the state for the next time 
}
void opcontrol() {
    while (true) {
        togglePneumatic();
        pros::delay(5000); //Waits 5 seconds 

    }
}