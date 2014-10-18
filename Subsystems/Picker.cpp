#include "Picker.h"
#include "../CommandBase.h"
#include "../Commands/TeleopPicker.h"

Picker::Picker() : Subsystem("Picker") {
	right=new Talon(RIGHT_PICKER);
	left=new Talon(LEFT_PICKER);
	holder=new Servo(PICKER_HOLDER);
	
}
void Picker::SetSpeed(float speed, PickerStates state){
	switch( state ) 
	{
	    case UP:
	    	right->SetSpeed(-speed);
	    	left->SetSpeed(speed);
	        break;
	    case DOWN :
	    	right->SetSpeed(speed);
	    	left->SetSpeed(-speed);
	        break;
	    case LEFT :
	    	right->SetSpeed(-speed);
	    	left->SetSpeed(-speed);
	        break;
	    case RIGHT :
	    	right->SetSpeed(speed);
	    	left->SetSpeed(speed);
	    	break;
	}
	
	
}
void Picker::Release() {
	holder->SetAngle(70);
}
    
void Picker::InitDefaultCommand() {
	SetDefaultCommand(new TeleopPicker());
}






