
#include <iostream>
#include <winsock2.h>
#include "PDOS.cpp"
 
using namespace std;
 
int main()
{
	
	////////DATOS DEL MAIN////////
	string cod_input;
	
	int cod_input_int;
	string nom_input;
	string cat_input;
	string pro_input;
	bool Desc=false;
	int cod_categoria;
	int int_cant_input;
	string cant_input;
	int precio;
	char yes_no;
	int cod_cliente_input_int;
	string super_input;
	int int_super_input;
	int int_cat_input;
	int int_pro_input;
	
	Binario BBB;
	ArbolB B;
	ArbolAVL AVL;
	ArbolAA AA;
	ArbolRN RN;
	
	
	B.LeerClientes();
	
	
	
	///////FIN DATOS DEL MAIN/////
	
	
    WSADATA WSAData;
 
    SOCKET server, client;
 
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
        
        for (;;){
			
			char *intro_msg = "||||||||||||||||||||||||||||||||Bienvenido al sistema|||||||||||||||||||||||||||||||||||||||\r\n";
			send(client, intro_msg, strlen(intro_msg), 0);
			
			if (BBB.LeerProveedores() && AVL.LeerSupermercados() && B.LeerClientes())
				{
					RN.LeerCategorias(AVL);
					AA.LeerProductos(AVL);
					//B.LeerClientes() && RN.LeerCategorias() && ListaProductos.LeerProductos()
					
		
				while (true)
					{
					BBB.PreordenR(BBB.RetornarRaiz());
					
					char * proveedor_msg = "Ingrese el codigo del proveedor: "; 
					send(client, proveedor_msg, strlen(proveedor_msg), 0);
					//std::getline(std::cin,cod_input);
					
					 recv(client, buffer, sizeof(buffer), 0);
			        //cout << "Client says: " << buffer << endl;
			        
			        //memset(buffer, 0, sizeof(buffer));
        
					
					try{
						cod_input_int = std::atoi(buffer);
						
					}
					catch (std::exception& e) {
						
		    			std::cerr << "******************ERROoooOOOOOR******************\n";
		    			//return 0;
		 				}
					
				memset(buffer, 0, sizeof(buffer));
					cout<<"Number: "<<cod_input_int<<endl;
					if (BBB.VerificarProveedor(BBB.RetornarRaiz(),cod_input_int))
						{
						cout<<"------------------------ Clientes regulares: ------------------------"<<endl;
						
						B.RecorridoInordenB(B.raizB);
						
						//cout<<"\nIngrese el codigo del cliente: ";
						char * cliente_msg = "Ingrese el codigo del cliente: "; 
						send(client, cliente_msg, strlen(cliente_msg), 0);
						
						recv(client, buffer, sizeof(buffer), 0);
						
						//std::getline(std::cin,nom_input);
						try{
						cod_cliente_input_int = std::atoi(buffer);
						}
						catch (std::exception& e) {
		    			std::cerr << "******************ERROR******************\n";
		    			//return 0;
		 				}
						memset(buffer, 0, sizeof(buffer));
						
						
						if (B.VerificarCliente(B.raizB, cod_cliente_input_int)){
							Desc = true;
						}
						
						cout<<"------------------------ Supermercados disponibles: ------------------------"<<endl;
						
						AVL.PreordenI(AVL.raiz);
						
						
						
						//ListaCategorias.MostrarTodasCategorias();
						
						while (true){
						//cout<<"\nIngrese el codigo del supermercado: ";
						//std::getline(std::cin,super_input);
						
						char * supermercado_msg = "\nIngrese el codigo del supermercado: "; 
						send(client, supermercado_msg, strlen(supermercado_msg), 0);
						
						recv(client, buffer, sizeof(buffer), 0);
						
						try{
						int_super_input = std::atoi(buffer);
						}
						catch (std::exception& e) {
		    			std::cerr << "******************ERROR******************\n";
		 				}
						
						memset(buffer, 0, sizeof(buffer));
						
						RN = AVL.BuscarSupermercado(AVL.raiz, int_super_input);
						
						cout<<"------------------------ Categorias de productos disponibles: ------------------------"<<endl;
						
		
						RN.InordenRN(RN.raiz);
						
						
						//cout<<"\nIngrese el codigo de la categoria: ";
					//	std::getline(std::cin,cat_input);
						
						char * categoria_msg = "\nIngrese el codigo de la categoria: "; 
						send(client, categoria_msg, strlen(categoria_msg), 0);
						
						recv(client, buffer, sizeof(buffer), 0);
						
						try{
						int_cat_input = std::atoi(buffer);
						}
						catch (std::exception& e) {
		    			std::cerr << "******************ERROR******************\n";
		 				}
		 				memset(buffer, 0, sizeof(buffer));
		 				
						if (RN.VerificarCategoria(RN.raiz, int_cat_input)){
							cout<<"------------------------  Productos disponibles en esta categoria: ------------------------"<<endl;//CORRER ESTO PARA ARRIBA
							
							AA = RN.BuscarCategoria(RN.raiz, int_cat_input);
		 				
		 					AA.PreordenI(AA.raiz);
							
								while (true){
											//cout<<"\nIngrese el codigo del producto: ";
											//std::getline(std::cin,pro_input);
											
											char * producto_msg = "\nIngrese el codigo del producto: "; 
											send(client, producto_msg, strlen(producto_msg), 0);
											
											recv(client, buffer, sizeof(buffer), 0);
											
											try{
												int_pro_input = std::atoi(buffer);
											}
												catch (std::exception& e) {
								    			std::cerr << "******************ERROR******************\n";
								 				}
								 				
		 									memset(buffer, 0, sizeof(buffer));
		 									
											if (AA.VerificarProducto(AA.raiz, int_pro_input))
												{
												break;
												}
											}
								
								
								while (true){
											//cout<<"\nIngrese el cantidad que desea comprar: ";
											//std::getline(std::cin,cant_input);
											
											char * cantidad_msg = "\nIngrese la cantidad que desea comprar: "; 
											send(client, cantidad_msg, strlen(cantidad_msg), 0);
											
											recv(client, buffer, sizeof(buffer), 0);
											
											try{
												int_cant_input = std::atoi(buffer);
												}
											catch (std::exception& e) {
							    				std::cerr << "******************ERRpppOR******************\n";
							    				//return 0;
							 					}
							 				
											memset(buffer, 0, sizeof(buffer));
											
							 				if (AA.VerificarStock(AA.raiz, int_pro_input)<int_cant_input){
												cout<<endl<<"******************No hay tantas unidades en stock******************"<<endl;
												
												}
											else{
												break;
												}
											}
										break;
								
							}
						cout<<"AJKSFJLASKJFLAKSJF";
						//break;
						}
						
						/*
						cod_categoria = ListaCategorias.MostrarCodigoCategoria(cat_input);
						precio = ListaProductos.MostrarPrecio(pro_input);
												
						ItemFactura* Item = new ItemFactura(cod_input_int, nom_input, Desc,cod_categoria, cat_input, int_cant_input, pro_input, precio, precio*int_cant_input);
												
						Item->facturar();
						
						printf ("%.90s\n", "\n///////////////// ¿Desea efectuar la compra? (Y/N) \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n");
						yes_no = cin.get();
						
						if (yes_no == 'Y')
							{
							Items.InsertarInicio(Item);
							
							ListaProductos.ReducirStock(pro_input, int_cant_input);	
							}
						cin.sync();	
							printf ("%.90s\n", "\n///////////////// ¿Desea comprar otro producto? (Y/N) \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n");
							char comprar_otra_vez;
							//std::getline(std::cin,comprar_otra_vez);
							comprar_otra_vez = cin.get();
							
							if (comprar_otra_vez == 'N')
								{
								break;
								}
								*/
							
						}
					
						
						
					cin.sync();
					cod_input="";
					}
				/*
				cout<<"||||||||||||||||||||||||||||||||||| Resumen del dia ||||||||||||||||||||||||||||||||||||||"<<endl;
				cout<<"Proveedor que mas vendio: ";
				ListaProveedores.ProveedorMayoresVentas();
				
				cout<<"Categoria mas vendida: ";
				ListaCategorias.CategoriaMayoresVentas();
				
				cout<<"Producto mas vendido: ";
				ListaProductos.ProductoMayoresVentas();
				
				cout<<"Cliente que mas compro: ";
				ListaClientes.ClienteMayoresVentas();
				
				cout<<endl;
				
				
				Items.ImprimirFactura();*/
				
				}
			else{
				return 0;
			}
			
			
			
        recv(client, buffer, sizeof(buffer), 0);
        
	
        cout << "Client says: " << buffer << endl;
        memset(buffer, 0, sizeof(buffer));
        
        int nError=WSAGetLastError();
        if(nError!=WSAEWOULDBLOCK&&nError!=0)
		{
			
			std::cout<<"Client disconnected!\r\n";

			// Shutdown our socket
			shutdown(server,SD_SEND);

			// Close our socket entirely
			closesocket(server);

			break;
		}
        //closesocket(client);
        //cout << "Client disconnected." << endl;
 		}
        
    }
   }

