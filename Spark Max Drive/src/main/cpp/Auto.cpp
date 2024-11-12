#include "Robot.h"

void Robot::Auto(double Timer){

//Reset and start the timer
AutoTimer.Reset();
AutoTimer.Start();

 while (IsAutonomous() && AutoTimer.Get().value() < Timer){
   LeftBack.Set(0.2);
   RightBack.Set(0.2);
   RightFront.Set(0.2);
   LeftFront.Set(0.2);

 }
}