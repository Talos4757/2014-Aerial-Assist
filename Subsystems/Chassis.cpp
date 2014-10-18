#include "Chassis.h"
#include "../Commands/ArcadeDrive.h"

Chassis::Chassis() : Subsystem("Chassis") {
	this->drive =new RobotDrive(LEFT_FRONT_MOTOR,LEFT_REAR_MOTOR,RIGHT_FRONT_MOTOR,RIGHT_REAR_MOTOR);
	drive->SetExpiration(0.3f);
	gyro = new Gyro(GYRO);
	gyro->Reset(); //maybe move this?
}

Gyro *Chassis::GetGyro(){	
	return gyro;
}
    
void Chassis::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	SetDefaultCommand(new ArcadeDrive());
}



RobotDrive* Chassis::GetRobotDrive() {
	return this->drive;
}


