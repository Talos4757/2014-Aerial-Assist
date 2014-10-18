#include "Strecher.h"
#include "SmartDashboard/SmartDashboard.h"


Strecher::Strecher() {
	Requires(catapult);
}

void Strecher::Initialize() {
}
void Strecher::Execute() {
	catapult->SetMotorSpeed(-1);
}
bool Strecher::IsFinished() {
	return false;
}
void Strecher::End() {
	Cancel();
}
void Strecher::Interrupted() {
	End();
}
