#include "TeleopPicker.h"
#include "TogglePicker.h"
#include "../Subsystems/Picker.h"

TeleopPicker::TeleopPicker() {
	Requires(picker);	
}
void TeleopPicker::Initialize() {

}
void TeleopPicker::Execute() {
	picker->SetSpeed(TogglePicker::IsOn() ? oi->getLeftStick()->GetY() : 0,UP);
	SmartDashboard::PutNumber("stick y", oi->getLeftStick()->GetY());
}
bool TeleopPicker::IsFinished() {
	return false;
}
void TeleopPicker::End() {
	Cancel();	
}
void TeleopPicker::Interrupted() {
	End();
}
