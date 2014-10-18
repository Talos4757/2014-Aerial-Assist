#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI {
private:
	Joystick *LeftStick;
	Joystick *RightStick;
	JoystickButton *TogglePickerButton;
	JoystickButton *ShootButton;
	JoystickButton *ScrewUp;
	JoystickButton *ScrewDown;
	static const int RightStickChannel = 2;
	static const int LeftStickChannel =1; 
public:
	OI();
	int GetRotateValue(); //see if any turn buttons are pressed
	Joystick* getRightStick();
	Joystick* getLeftStick();
};

#endif
