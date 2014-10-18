#include "ArcadeCamera.h"
#include "SmartDashboard/SmartDashboard.h"


ArcadeCamera::ArcadeCamera() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(cameraStand);
	port1 = 5;
	port2 = 6;
	counter = 0;
	servo1 = new Servo(port1);
	servo2 = new Servo(port2);
	SmartDashboard::PutNumber("Counter at latest change 1", counter);
	SmartDashboard::PutNumber("Counter at latest change 2", counter);
	SmartDashboard::PutNumber("Servo1 Port", port1);
	SmartDashboard::PutNumber("Servo2 Port", port2);
	SmartDashboard::PutNumber("servo1 degree", 0);
}

// Called just before this Command runs the first time
void ArcadeCamera::Initialize() {
	cameraStand->GetTiltMotor()->SetAngle(0);
	cameraStand->GetRotateMotor()->SetAngle(0);
}
//int i =0;
// Called repeatedly when this Command is scheduled to run
void ArcadeCamera::Execute() {
	SmartDashboard::PutNumber("Servo Code Counter", counter++);
	int _port1 = (int)SmartDashboard::GetNumber("Servo1 Port");
	if(_port1 != port1) {
		port1 = _port1;
		delete servo1;
		servo1 = new Servo(port1);
		SmartDashboard::PutNumber("Counter at latest change 1", counter);		
	}
	
	int _port2 = (int)SmartDashboard::GetNumber("Servo2 Port");
	if(_port2 != port2) {
		port2 = _port2;
		delete servo2;
		servo2 = new Servo(port2);
		SmartDashboard::PutNumber("Counter at latest change 2", counter);
	}
	
	cameraStand->GetTiltMotor()->SetAngle((oi->getLeftStick()->GetX() + 1)*170.0/2);
	cameraStand->GetRotateMotor()->SetAngle((oi->getLeftStick()->GetY() + 1)*170.0/2);
	//float degrees = SmartDashboard::GetNumber("servo1 degree");
	//servo1->SetAngle(degrees);
}
// Make this return true when this Command no longer needs to run execute()
bool ArcadeCamera::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void ArcadeCamera::End() {
	//cameraStand->GetTiltMotor()->SetAngle(0);
	//cameraStand->GetRotateMotor()->SetAngle(0);
	Cancel();	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ArcadeCamera::Interrupted() {
	End();
}
