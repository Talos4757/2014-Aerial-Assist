#include "CameraStand.h"
#include "../Commands/ArcadeCamera.h"

CameraStand::CameraStand() : Subsystem("CameraStand") {
	this->TiltMotor =new Servo(CAMERA_TILT);
	this->RotateMotor =new Servo(CAMERA_ROTATE);
}
    
void CameraStand::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	SetDefaultCommand(new ArcadeCamera());
}

Servo* CameraStand::GetTiltMotor() {
	return this->TiltMotor;
}

Servo* CameraStand::GetRotateMotor() {
	return this->RotateMotor;
}
