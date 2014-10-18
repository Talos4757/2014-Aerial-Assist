#ifndef StaticShooter_H
#define StaticShooter_H

#include "../CommandBase.h"
#include "SmartDashboard/SmartDashboard.h"

class StaticShooter: public CommandBase {
private :
	int counter;
public:
	StaticShooter();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
