#include "Catapult.h"
#include "../CommandBase.h"
#include "../Commands/StaticShooter.h"

Catapult::Catapult() : Subsystem("Catapult") {	
	motor=new Talon(CATAPULT_SCREW_MOTOR);
	locker=new Relay(CATAPULT_LOCKER);
	floorSwitch = new DigitalInput(CATAPULT_FLOOR_SWITCH);
	ceilingSwitch = new DigitalInput(CATAPULT_CEILING_SWITCH);
	//later
	//encoder = new Encoder(CATAPULT_ENCODER);
}
    
void Catapult::InitDefaultCommand() {
	SetDefaultCommand(new StaticShooter());
}
/*
 * Since we do not know how the locker is going to be 
 * implemented, this is a fair assumption
 */
void Catapult::Lock() {
	locker->Set(Relay::kOff);
}
void Catapult::Unlock() {
	locker->Set(Relay::kForward);
}
 
double Catapult::GetTurnPeriod() {
	return encoder->GetPeriod();
}

bool Catapult::SetMotorSpeed(float speed) {
	
	if(speed > 0)
	{
		if(0)//ceilingSwitch->Get())
		{
			motor->SetSpeed(0);
			return true;
		}
		motor->SetSpeed(speed);
	}
	else
	{
		if(0)//floorSwitch->Get())
		{
			motor->SetSpeed(0);
			return true;
		}
		motor->SetSpeed(speed);
	}
	return false;
}






