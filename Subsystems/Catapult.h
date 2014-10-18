#ifndef CATAPULT_H
#define CATAPULT_H

#include "../Robotmap.h"
#include "WPILib.h"

class Catapult: public Subsystem {
private:
	Talon* motor;
	Relay* locker;
	DigitalInput* floorSwitch;
	DigitalInput* ceilingSwitch;
	Encoder* encoder;
	
public:	
	void Lock();
	void Unlock();
	bool SetMotorSpeed(float speed);//speed between -1 to 1. returns true if one of the switches is trigered
	double GetTurnPeriod();
	Catapult();
	void InitDefaultCommand();
};

#endif
