#include "Robot.h"

void Robot::Intake(){
if (Controller.GetRawButton(1))
{
    IntakeMotor.Set(1.0);
}
else
{
     IntakeMotor.Set(0);
}

}



