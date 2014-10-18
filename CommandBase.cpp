#include "CommandBase.h"

CommandBase::CommandBase() : Command()
{
	
}
OI* CommandBase::oi = NULL;
Picker* CommandBase::picker = NULL;
Chassis* CommandBase::chassis = NULL;
CameraStand* CommandBase::cameraStand = NULL;
Catapult* CommandBase::catapult = NULL;
void CommandBase::Init()
{	
	chassis = new Chassis();
    catapult = new Catapult();
	picker = new Picker();
	cameraStand = new CameraStand();
	oi = new OI();
	
}
