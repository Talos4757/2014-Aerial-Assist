#ifndef TELEOPPICKER_H
#define TELEOPPICKER_H

#include "../CommandBase.h"

class TeleopPicker: public CommandBase{
public:
	TeleopPicker();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
