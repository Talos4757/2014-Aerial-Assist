#ifndef CAMERASTAND_H
#define CAMERASTAND_H
#include "Commands/Subsystem.h"
#include "../Robotmap.h"
#include "WPILib.h"

class CameraStand: public Subsystem {
private:	
	Servo* TiltMotor;
	Servo* RotateMotor;
public:
	CameraStand();
	void InitDefaultCommand();
	Servo* GetTiltMotor();
	Servo* GetRotateMotor();
};

#endif
