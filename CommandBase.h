#ifndef COMMAND_BASE_H
#define COMMAND_BASE_H
#include "Subsystems/Picker.h"
#include "Subsystems/Chassis.h"
#include "Subsystems/CameraStand.h"
#include "Subsystems/Catapult.h"
#include "OI.h"

/**
 * The base for all commands. All atomic commands should subclass CommandBase.
 * CommandBase stores creates and stores each control system. To access a
 * subsystem elsewhere in your code in your code use CommandBase.examplesubsystem
 */
class CommandBase: public Command {
public:
	CommandBase();
	// Create a single static instance of all of your subsystems
	//static ExampleSubsystem *examplesubsystem;
	static OI *oi;
	static Chassis *chassis;
	static Picker *picker;
	static CameraStand *cameraStand;
	static Catapult *catapult;
	static void Init();
};

#endif
