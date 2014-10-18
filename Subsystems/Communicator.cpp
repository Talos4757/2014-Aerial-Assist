#include "Communicator.h"
#include "../Commands/ArcadeCamera.h"
#define HOST "10.47.57.13"

Communicator::Communicator() : Subsystem("Communicator") {
	/*in_addr addr;
	sock = socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);
	inet_pton(AF_INET,HOST,&addr);
	bind(sock,addr,sizeof(addr));
	listen(sock,6);
//	fcntl()*/
}
    
void Communicator::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new ServerListen()); //ServerListenis a command that will check for connections on tcp socket
	
}
