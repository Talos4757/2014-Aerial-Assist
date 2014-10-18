#ifndef COMMUNICATOR_H
#define COMMUNICATOR_H
#include "Commands/Subsystem.h"
#include "../Robotmap.h"
#include "WPILib.h"
#include <socket.h>

class Communicator: public Subsystem {
private:
	int sock;
public:
	Communicator();
	void InitDefaultCommand();
};

#endif
