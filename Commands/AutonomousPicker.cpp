#include "AutonomousPicker.h"

AutonomousPicker::AutonomousPicker() {
	Requires(picker);	
}
void AutonomousPicker::Initialize() {
	SetTimeout(2);
}
void AutonomousPicker::Execute() {
	picker->Release();
}
bool AutonomousPicker::IsFinished() {
	return IsTimedOut();
}
void AutonomousPicker::End() {
	Cancel();	
}
void AutonomousPicker::Interrupted() {
	End();
}
