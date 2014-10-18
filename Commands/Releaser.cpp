#include "Releaser.h"
#include "SmartDashboard/SmartDashboard.h"


Releaser::Releaser() {
	Requires(catapult);
}

void Releaser::Initialize() {
}
void Releaser::Execute() {
	catapult->SetMotorSpeed(1);
}
bool Releaser::IsFinished() {
	return false;
}
void Releaser::End() {
	Cancel();	
}
void Releaser::Interrupted() {
	End();
}
