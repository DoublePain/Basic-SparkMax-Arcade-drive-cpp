#include "Robot.h"


void Robot::arcade_drive() {
/*Basic arcade drve function, may need to invert controls if drives odd
//again all depends on wiring set up and motor IDS
  Get joystick input (X is for steering, Y is for forward/backward)*/
  double driveSpeed = -Controller.GetY();  // Forward is positive, backwards negative
  double turnSpeed = Controller.GetX();    // Turning left is negative, right is positive

  LeftFront.Set(driveSpeed + turnSpeed);  // Left motors
  LeftBack.Set(driveSpeed + turnSpeed);
  RightFront.Set(driveSpeed - turnSpeed); // Right motors
  RightBack.Set(driveSpeed - turnSpeed);
}