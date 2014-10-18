#ifndef TOGGLEPICKER_H
#define TOGGLEPICKER_H

#include "../CommandBase.h"
#include "SmartDashboard/SmartDashboard.h"

class TogglePicker: public CommandBase {
private :
	static bool ON;
public:
	static bool IsOn();
	TogglePicker();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
