#ifndef PICKER_H
#define PICKER_H
//#include "../Commands/TeleopPicker.h"
#include "../Robotmap.h"
#include "WPILib.h"

enum PickerStates { UP, DOWN, LEFT, RIGHT };

class Picker: public Subsystem {
private:	
	Talon* right;
	Talon* left;
	Servo* holder;
public:	
	void SetSpeed(float speed, PickerStates state);
	void Release();
	Picker();
	void InitDefaultCommand();
};

#endif
