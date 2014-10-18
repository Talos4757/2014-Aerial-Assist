#ifndef Strecher_H
#define Strecher_H

#include "../CommandBase.h"
#include "SmartDashboard/SmartDashboard.h"

class Strecher: public CommandBase {
private :
public:
	Strecher();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
