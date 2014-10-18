#include "Shoot.h"
#include "SmartDashboard/SmartDashboard.h"


Shoot::Shoot() {
	Requires(catapult);
}

void Shoot::Initialize() {
	counter = 0;
	stage = 1;
	SetTimeout(2);//set time out for stage 1
}
void Shoot::Execute() {
	SmartDashboard::PutNumber("Shoot", counter++);

	catapult->Unlock();
	/* This is good
	if(stage == 1)//stage 1 unlocks the catapult
		if(IsTimedOut())
			stage++;//advance a stage if timeout has been reached
		else
			catapult->Unlock();
	else if(stage == 2)//stage 2 releases the spring to the top
		if(catapult->SetMotorSpeed(1)) {//SetMotorSpeed returns true if top has been reached
			stage++;
			SetTimeout(3);
		}
	else if(stage == 3)//stage 3 locks the catapult
		catapult->Lock();
		*/
}

bool Shoot::IsFinished() {
	return IsTimedOut();//part of goodness : && stage == 3;
}
void Shoot::End() {
	SmartDashboard::PutNumber("Shoot", -1);
	counter = 0;
	Cancel();
}
void Shoot::Interrupted() {
	End();
}
