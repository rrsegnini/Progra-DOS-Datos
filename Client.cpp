
#include <winsock2.h>
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <exception>
#include <cstdlib>
 
using namespace std;
 
int main()
{
    WSADATA WSAData;
    SOCKET server;
    SOCKADDR_IN addr;
 
    WSAStartup(MAKEWORD(2,0), &WSAData);
    server = socket(AF_INET, SOCK_STREAM, 0);
 
    addr.sin_addr.s_addr = inet_addr("192.168.0.12"); // replace the ip with your futur server ip address. If server AND client are running on the same computer, you can use the local ip 127.0.0.1
    addr.sin_family = AF_INET;
    addr.sin_port = htons(1986);
 
    connect(server, (SOCKADDR *)&addr, sizeof(addr));
    cout << "Connected to server!" << endl;
 	string msg;
 	const char *msg_char;
 	char buffer[1024];
 	
 	cout<<"Presione ENTER para realizar una compra"<<endl;
 for (;;){
	
	recv(server, buffer, sizeof(buffer), 0);
        
	
    cout << buffer << endl;
    memset(buffer, 0, sizeof(buffer));
	
	//buffer = cin.get();
	std::getline(std::cin, msg);
	msg_char = msg.c_str();
	send(server, msg_char, strlen(msg_char),0);
//	memset(msg_char, 0, sizeof(msg_char));
	
	//cin.get();				
    //cout << "Message sent!" << endl;
 } 
    //closesocket(server);
    //WSACleanup();
    //cout << "Socket closed." << endl << endl;
}
