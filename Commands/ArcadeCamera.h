#ifndef ARCADECAMERA_H
#define ARCADECAMERA_H

#include "../CommandBase.h"
#include "SmartDashboard/SmartDashboard.h"

class ArcadeCamera: public CommandBase {
private:
	Servo *servo1, *servo2;
	int port1, port2, counter;
public:
	ArcadeCamera();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
