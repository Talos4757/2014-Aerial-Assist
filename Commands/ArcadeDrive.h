#ifndef ARCADEDRIVE_H
#define ARCADEDRIVE_H

#include "../CommandBase.h"
#include "SmartDashboard/SmartDashboard.h"
enum MotorType
	{
		kFrontLeftMotor = 0,
		kFrontRightMotor = 1,
		kRearLeftMotor = 2,
		kRearRightMotor = 3
	};
	
class ArcadeDrive: public CommandBase {
private:
	static const float ROTVAL = 0.2; //increase for faster rotation
	int counter;
public:
	ArcadeDrive();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
