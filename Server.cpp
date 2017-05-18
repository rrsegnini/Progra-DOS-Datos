
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
	bool SALIR=false;
	
	int int_borrarSuper;
	int int_borrarCat;
	int	int_borrarProd;
	
	listaDC Items;
	listaDC	Ventas;
	listaDC Ventas2;
	Binario BBB;
	ArbolB B;
	ArbolAVL AVL;
	ArbolAA AA;
	ArbolRN RN;
	
	Ventas.LeerClientesVentas();
	Ventas2.LeerProductosVentas();
	
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
        
        while (true){
        	
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
			
			char *intro_msg = "||||||||||||||||||||||||||||||||Bienvenido al sistema|||||||||||||||||||||||||||||||||||||||\r\n";
			send(client, intro_msg, strlen(intro_msg), 0);
			
			/*
			char *opciones = "Ingrese 1 para ventas y 2 para borrar un producto\r\n";
			send(client, opciones, strlen(intro_msg), 0);
			
			
			
			if (buffer[0] == '1'){
			
			*/
			
			//recv(client, buffer, sizeof(buffer), 0);
			
			if (BBB.LeerProveedores() && AVL.LeerSupermercados() && B.LeerClientes())
				{
					RN.LeerCategorias(AVL);
					AA.LeerProductos(AVL);
					//B.LeerClientes() && RN.LeerCategorias() && ListaProductos.LeerProductos()
					
				
				while (true)
					{
						
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
						
		    			std::cerr << "******************ERROR******************\n";
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
						
						
						//cout<<"\nIngrese el codigo del supermercado: ";
						//std::getline(std::cin,super_input);
						while (true){
							
							char * supermercado_msg = "\nIngrese el codigo del supermercado: "; 
							send(client, supermercado_msg, strlen(supermercado_msg), 0);
							
							recv(client, buffer, sizeof(buffer), 0);
							
							try{
							int_super_input = std::atoi(buffer);
							}
							catch (std::exception& e) {
			    			std::cerr << "******************ERROR******************\n";
			 				}
			 				
			 				RN = AVL.BuscarSupermercado(AVL.raiz, int_super_input);
			 				
			 				if (AVL.VerificarSupermercado(AVL.raiz, int_super_input) && RN.raiz != NULL){
			 					break;
							 }
							
							memset(buffer, 0, sizeof(buffer));
						
							
							cout<<"No hay categorias disponibles en este supermercado"<<endl;					
							
						}
						
						cout<<"------------------------ Categorias de productos disponibles: ------------------------"<<endl;
						
		
						RN.InordenRN(RN.raiz);
						
						
						
						//cout<<"\nIngrese el codigo de la categoria: ";
					//	std::getline(std::cin,cat_input);
					memset(buffer, 0, sizeof(buffer));
					while (true){	
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
		 				
		 				AA = RN.BuscarCategoria(RN.raiz, int_cat_input);
		 				
						if (RN.VerificarCategoria(RN.raiz, int_cat_input) & AA.raiz != NULL){
							cout<<"------------------------  Productos disponibles en esta categoria: ------------------------"<<endl;//CORRER ESTO PARA ARRIBA
							
							
		 				
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
							    				std::cerr << "******************ERROR******************\n";
							    				
												
							 					}
							 				
											memset(buffer, 0, sizeof(buffer));
											
							 				if (AA.VerificarStock(AA.raiz, int_pro_input)<int_cant_input){
												char * error_stock = "******************No hay tantas unidades en stock******************\n Presione ENTER.";
												send(client, error_stock, strlen(error_stock), 0);
												//memset(buffer, 0, sizeof(buffer));
												}
											else{
												break;
												}
											}
										break;
								
							}
						if (AA.raiz == NULL){
							cout<<"No hay productos disponibles"<<endl;
						}
						
						//break;
						}
						
					precio = AA.MostrarPrecio(AA.raiz, int_pro_input);
										
					ItemFactura* Item = new ItemFactura(cod_input_int, nom_input, Desc,int_cat_input, 
					"", int_cant_input, "", precio, precio*int_cant_input);
											
					Item->facturar();
					
					memset(buffer, 0, sizeof(buffer));
					
					
					
					char * comprar_msg = "\n///////////////// ¿Desea efectuar la compra? (Y/N) \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n"; 
					send(client, comprar_msg, strlen(comprar_msg), 0);
											
					recv(client, buffer, sizeof(buffer), 0);
					
					if (buffer[0] == 'Y' || buffer[0] == 'y')
						{
						Items.InsertarInicio(Item);
						Ventas2.ReducirStockVentas(int_pro_input, int_cant_input);
						AA.ReducirStock(AA.raiz, int_pro_input, int_cant_input);	
						}
						
					memset(buffer, 0, sizeof(buffer));
					cin.sync();	
						
						
						char * comprar_otra_vez = "\n///////////////// ¿Desea comprar otro producto? (Y/N) \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n"; 
						send(client, comprar_otra_vez, strlen(comprar_otra_vez), 0);
											
						recv(client, buffer, sizeof(buffer), 0);
						
						if (buffer[0] == 'N' || buffer[0] == 'n')
							{
							
							SALIR = true;
							break;
							}
							
						
						}
				
					
					
					cin.sync();
					cod_input="";
					}
				cout<<"Producto mas vendido: ";
				Ventas2.ProductoMayoresVentas();
					
				cout<<"Cliente que mas compro: ";
				Ventas.ClienteMayoresVentas();
				
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
				
				*/
				Items.ImprimirFactura();
				
				}
			else{
				return 0;
			}

        
        
        //closesocket(client);
        //cout << "Client disconnected." << endl;
        
        if (SALIR){
			break;
		}
 	/*	}else{
 			//int int_borrarSuper;
	//int int_borrarCat;
	//int	int_borrarProd
    	cout<<"Borrar"<<endl;
    	memset(buffer, 0, sizeof(buffer));
    	char *borrarSuper = "Ingrese el codigo del supermercado\r\n";
		send(client, borrarSuper, strlen(borrarSuper), 0);	
		recv(client, buffer, sizeof(buffer), 0);
		
		try{
			int_borrarSuper = std::atoi(buffer);
			}
		catch (std::exception& e) {
			std::cerr << "******************ERROR******************\n";
		}
		memset(buffer, 0, sizeof(buffer));
		
		
		
		char *borrarCat = "Ingrese el codigo de la categoria\r\n";
		send(client, borrarCat, strlen(borrarCat), 0);	
		recv(client, buffer, sizeof(buffer), 0);
		
		try{
			int_borrarCat = std::atoi(buffer);
			}
		catch (std::exception& e) {
			std::cerr << "******************ERROR******************\n";
		}
		memset(buffer, 0, sizeof(buffer));
		
		
		
		char *borrarProd = "Ingrese el codigo del producto\r\n";
		send(client,borrarProd, strlen(borrarProd), 0);	
		recv(client, buffer, sizeof(buffer), 0);
		try{
			int_borrarProd = std::atoi(buffer);
			}
		catch (std::exception& e) {
			std::cerr << "******************ERROR******************\n";
		}
		memset(buffer, 0, sizeof(buffer));
		
		AVL.LeerSupermercados();
		RN.LeerCategorias(AVL);
		AA.LeerProductos(AVL);
		RN = AVL.BuscarSupermercado(AVL.raiz, int_borrarCat);
		AA = RN.BuscarCategoria(RN.raiz, int_borrarProd);
		
		AA.borrar(AA.raiz, int_borrarProd);
		
		AA.PreordenI(AA.raiz);
		
	//	break;
		
		
		
		
		
			
    //	return 0;
		}*/
 	
       //return 0;
       
    
    }
    closesocket(client);
	cout << "Client disconnected." << endl;
    return 0;
   }
}


