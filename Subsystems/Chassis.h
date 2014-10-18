#ifndef CHASSIS_H
#define CHASSIS_H
#include "Commands/Subsystem.h"
#include "../Robotmap.h"
#include "WPILib.h"

class Chassis: public Subsystem {
private:	
	RobotDrive* drive;
	Gyro *gyro;
	
public:
	Chassis();
	void InitDefaultCommand();
	RobotDrive* GetRobotDrive ();
	Gyro *GetGyro();
};

#endif
