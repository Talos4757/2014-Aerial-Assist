#ifndef SHOOT_H
#define SHOOT_H

#include "../CommandBase.h"
#include "SmartDashboard/SmartDashboard.h"

class Shoot: public CommandBase {
private :
	int stage;
	int counter;
public:
	Shoot();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
