#include "ArcadeDrive.h"
#include "SmartDashboard/SmartDashboard.h"

ArcadeDrive::ArcadeDrive() {
	Requires(chassis);	
	chassis->GetRobotDrive()->SetInvertedMotor(static_cast<RobotDrive::MotorType>(kFrontRightMotor),true);
	chassis->GetRobotDrive()->SetInvertedMotor(static_cast<RobotDrive::MotorType>(kRearRightMotor),true);
	chassis->GetRobotDrive()->SetInvertedMotor(static_cast<RobotDrive::MotorType>(kFrontLeftMotor),true);
	SmartDashboard::PutString("Driving-End", "Not Ended");
	SmartDashboard::PutString("Driving", "Not Executing");
	SmartDashboard::PutString("Driving-Init", "Not Init'd");
}
void ArcadeDrive::Initialize() {
	chassis->GetGyro()->Reset();
	SmartDashboard::PutString("Driving-Init", "Init'd");
}
void ArcadeDrive::Execute() {
	SmartDashboard::PutString("Driving", "Executing");
	//chassis->GetRobotDrive()->MecanumDrive_Cartesian(oi->getRightStick()->GetX(),oi->getRightStick()->GetY(),oi->GetRotateValue()*ROTVAL,chassis->GetGyro()->GetAngle());
	chassis->GetRobotDrive()->MecanumDrive_Cartesian(oi->getRightStick()->GetX(),oi->getRightStick()->GetY(),oi->GetRotateValue()*ROTVAL,0);//no gyro here
	SmartDashboard::PutNumber("stick x",oi->getRightStick()->GetX());
	
	SmartDashboard::PutNumber("stick y",oi->getRightStick()->GetY());
}
bool ArcadeDrive::IsFinished() {
	return false;
}
void ArcadeDrive::End() {
	SmartDashboard::PutString("Driving-End", "Ended");
	chassis->GetRobotDrive()->ArcadeDrive(0,0,false);
	Cancel();	
}
void ArcadeDrive::Interrupted() {
	End();
}
