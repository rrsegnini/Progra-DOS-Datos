#include <iostream>
#include <winsock2.h>
#pragma comment(lib,"ws2_32.lib")


#include <iostream>
#include <winsock2.h>
 
using namespace std;
 
int main()
{
    WSADATA WSAData;
 
    SOCKET server, client;
 	SOCKET Socket=socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);
 	
    SOCKADDR_IN serverAddr, clientAddr;
 
    WSAStartup(MAKEWORD(2,0), &WSAData);
    server = socket(AF_INET, SOCK_STREAM, 0);
 
    serverAddr.sin_addr.s_addr = INADDR_ANY;
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_port = htons(1986);
 
    bind(server, (SOCKADDR *)&serverAddr, sizeof(serverAddr));
    listen(server, 0);
 
    cout << "Listening for incoming connections..." << endl;
 //while (true){
 
    char buffer[1024];
    int clientAddrSize = sizeof(clientAddr);
    if((client = accept(server, (SOCKADDR *)&clientAddr, &clientAddrSize)) != INVALID_SOCKET)
    {
        cout << "Client connected!" << endl;
        recv(client, buffer, sizeof(buffer), 0);
        
	
        // Main loop
	for(;;)
	{
		char *szMessage="Welcome to the server!\r\n";
		send(Socket,szMessage,strlen(szMessage),0);
					
		int nError=WSAGetLastError();
			
		Sleep(1000);
	}

	WSACleanup();
	system("PAUSE");
	return 0;
 	
        closesocket(client);
        cout << "Client disconnected." << endl;
    }
   }



					
int main()
{
	WSADATA WsaDat;
	if(WSAStartup(MAKEWORD(2,2),&WsaDat)!=0)
	{
		std::cout<<"WSA Initialization failed!\r\n";
		WSACleanup();
		system("PAUSE");
		return 0;
	}
					
	SOCKET Socket=socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);
	if(Socket==INVALID_SOCKET)
	{
		std::cout<<"Socket creation failed.\r\n";
		WSACleanup();
		system("PAUSE");
		return 0;
	}
					
	SOCKADDR_IN serverInf;
	serverInf.sin_family=AF_INET;
	serverInf.sin_addr.s_addr=INADDR_ANY;
	serverInf.sin_port=htons(1986);
					
	if(bind(Socket,(SOCKADDR*)(&serverInf),sizeof(serverInf))==SOCKET_ERROR)
	{
		std::cout<<"Unable to bind socket!\r\n";
		WSACleanup();
		system("PAUSE");
		return 0;
	}
		
	listen(Socket,1);
					
	SOCKET TempSock=SOCKET_ERROR;
	while(TempSock==SOCKET_ERROR)
	{
		std::cout<<"Waiting for incoming connections...\r\n";
		TempSock=accept(Socket,NULL,NULL);
	}
				
	// If iMode!=0, non-blocking mode is enabled.
	u_long iMode=1;
	ioctlsocket(Socket,FIONBIO,&iMode);
					
	Socket=TempSock;
	std::cout<<"Client connected!\r\n\r\n";
					
	// Main loop
	for(;;)
	{
		char *szMessage="Welcome to the server!\r\n";
		send(Socket,szMessage,strlen(szMessage),0);
					
		int nError=WSAGetLastError();
		if(nError!=WSAEWOULDBLOCK&&nError!=0)
		{
			std::cout<<"Winsock error code: "<<nError<<"\r\n";
			std::cout<<"Client disconnected!\r\n";

			// Shutdown our socket
			shutdown(Socket,SD_SEND);

			// Close our socket entirely
			closesocket(Socket);

			break;
		}
			
		Sleep(100);
	}

	WSACleanup();
	system("PAUSE");
	return 0;
}
