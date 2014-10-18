#ifndef AUTONOMOUS_PICKER_H
#define AUTONOMOUS_PICKER_H

#include "../CommandBase.h"

class AutonomousPicker: public CommandBase {
public:
	AutonomousPicker();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
