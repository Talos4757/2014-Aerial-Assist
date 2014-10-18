#ifndef Releaser_H
#define Releaser_H

#include "../CommandBase.h"
#include "SmartDashboard/SmartDashboard.h"

class Releaser: public CommandBase {
private :
public:
	Releaser();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
