#include "WPILib.h"
#include "CommandBase.h"
#include "Commands/AutonomousPicker.h"
#include "SmartDashboard/SmartDashboard.h"
#include <math.h>

class Robot : public SimpleRobot
{
private:
	//ADXL345_I2C::AllAxes accelerations;
	
public:
	Robot(void)
	{ 
		
		CommandBase::Init();
		
		
	}
	~Robot(void)
	{ 
		
	}
	void Autonomous(void)
	{
		Scheduler::GetInstance()->AddCommand(new AutonomousPicker());
		while (IsAutonomous())
		{
			Scheduler::GetInstance()->Run();
			Wait(0.02f);
		}
	}

	void OperatorControl(void)
	{
		while(IsOperatorControl())
		{
			Scheduler::GetInstance()->Run();
			Wait(0.02f);
		}
	}
	
	void Test() {
	}

    void RobotInit()
	{
 	}
	void Disabled()
	{
	
	}

};

START_ROBOT_CLASS(Robot);

