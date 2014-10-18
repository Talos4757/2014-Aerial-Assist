#include "TogglePicker.h"
#include "SmartDashboard/SmartDashboard.h"

bool TogglePicker::ON = false;

TogglePicker::TogglePicker() {
}
void TogglePicker::Initialize() {
	TogglePicker::ON = !TogglePicker::ON;
}
bool TogglePicker::IsOn() {
	return TogglePicker::ON;
}
void TogglePicker::Execute() {
	
}
bool TogglePicker::IsFinished() {
	return true;
}
void TogglePicker::End() {
	Cancel();	
}
void TogglePicker::Interrupted() {
	End();
}
