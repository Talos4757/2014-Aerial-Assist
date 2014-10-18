#include "OI.h"
#include "Commands/TogglePicker.h"
#include "Commands/Shoot.h"
#include "Commands/Strecher.h"
#include "Commands/Releaser.h"
OI::OI() {
	LeftStick = new Joystick(OI::LeftStickChannel);
	RightStick = new Joystick(OI::RightStickChannel);
	TogglePickerButton = new JoystickButton(LeftStick,6);
	TogglePickerButton->WhenPressed(new TogglePicker());
	ShootButton= new JoystickButton(RightStick,3);
	ShootButton->WhenPressed(new Shoot());
	ScrewUp= new JoystickButton(RightStick,6);
	ScrewUp->WhileHeld(new Strecher());
	ScrewDown= new JoystickButton(RightStick,7);
	ScrewDown->WhileHeld(new Releaser());
}

int OI::GetRotateValue(){
	return OI::getRightStick()->GetRawButton(4) ? -1 : 0 //turn left
			+ OI::getRightStick()->GetRawButton(5) ? 1 : 0; //turn right
	
}

Joystick* OI::getRightStick()
{
	return RightStick;
}
Joystick* OI::getLeftStick()
{
	return LeftStick;
}
