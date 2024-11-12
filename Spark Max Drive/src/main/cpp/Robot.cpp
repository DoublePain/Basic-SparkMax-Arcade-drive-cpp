// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "Robot.h"

#include <fmt/core.h>
#include <frc/smartdashboard/SmartDashboard.h>

void Robot::RobotInit() {
//Print out the motor ID'S for each of your motors if you arent sure which is which! :)
std::cout << "Left Front Motor ID: " << LeftFront.GetChannel() << std::endl;
std::cout << "Right Front Motor ID: " << RightFront.GetChannel() << std::endl;
std::cout << "Left Back Motor ID: " << LeftBack.GetChannel() << std::endl;
std::cout << "Right Back Motor ID: " << RightBack.GetChannel() << std::endl;
std::cout << "Right Back Motor ID: " << IntakeMotor.GetChannel() << std::endl;

}

void Robot::RobotPeriodic() {}

void Robot::AutonomousInit() {
 Auto();
}

void Robot::AutonomousPeriodic() {

}

void Robot::TeleopInit() {}

//Once teleop begins, everything in here will run periodically
void Robot::TeleopPeriodic() {
  arcade_drive(); //Calling the drive function
  Intake(); // Calling the intake function
}

void Robot::DisabledInit() {}

void Robot::DisabledPeriodic() {}

void Robot::TestInit() {}

void Robot::TestPeriodic() {}

void Robot::SimulationInit() {}

void Robot::SimulationPeriodic() {}

#ifndef RUNNING_FRC_TESTS
int main() {
  return frc::StartRobot<Robot>();
}
#endif
