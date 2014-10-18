#include "StaticShooter.h"
#include "SmartDashboard/SmartDashboard.h"


StaticShooter::StaticShooter() {
	Requires(catapult);
}

void StaticShooter::Initialize() {
	SmartDashboard::PutString("interrupted", "FALSE");
	counter = 0;
}
void StaticShooter::Execute() {
	catapult->Lock();
	catapult->SetMotorSpeed(0);
	SmartDashboard::PutNumber("Static Shooter", ++counter);
	int currentValue = 100 - (int)((oi->getLeftStick()->GetThrottle()+1.0f)*50);;
	int wantedValue = 100 - (int)((oi->getRightStick()->GetThrottle()+1.0f)*50);
	SmartDashboard::PutNumber("SHOOTER!",(wantedValue << 16) +currentValue);
}
bool StaticShooter::IsFinished() {
	return false;
}
void StaticShooter::End() {
	counter = 0;
	SmartDashboard::PutNumber("Static Shooter", -1);
	Cancel();	
}
void StaticShooter::Interrupted() {
	SmartDashboard::PutString("interrupted", "TRUE");
	End();
}
