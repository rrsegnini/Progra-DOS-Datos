
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <exception>
#include <cstdlib>



using namespace std;











class ItemFactura{
	
	public:
		ItemFactura()
			{
			CodigoProveedor;
			NombreCliente;
			Descuento;
			CodigoCategoria;
			NombreCategoria;
			cantidadProducto;
			NombreProducto;
			PrecioUnitario;
			PrecioTotal;
			
			}
		
		ItemFactura(int _CodigoProveedor, string _NombreCliente, 
		bool _Descuento, int _CodigoCategoria, 
		string _NombreCategoria, int _cantidadProducto, string _NombreProducto,
		int _PrecioUnitario, int _PrecioTotal)
			{
			CodigoProveedor=_CodigoProveedor;
			NombreCliente=_NombreCliente;
			Descuento=_Descuento;
			CodigoCategoria=_CodigoCategoria;
			NombreCategoria=_NombreCategoria;
			cantidadProducto=_cantidadProducto;
			NombreProducto=_NombreProducto;
			PrecioUnitario=_PrecioUnitario;
			PrecioTotal=_PrecioTotal;			
			}
		
		int getCodigoP(){
			return CodigoProveedor;
		}
		string getNombreCliente(){
			return NombreCliente;
		}
		string getCategoria(){
			return NombreCategoria;
		}
		int getCodCategoria(){
			return CodigoCategoria;
		}
		int getCantidadProducto(){
			return cantidadProducto;
		}
		
		string getNombreProducto(){
			return NombreProducto;
		}
		
		int getPrecioTotal(){
			return PrecioTotal;
		}
		int getPrecioUnitario(){
			return PrecioUnitario;
		}
			
		void facturar(){
			
			if (Descuento)
				{
				PrecioTotal = PrecioTotal - (PrecioTotal * 0.05);
				}
			string a = "||||||||||Codigo del proveedor: " +std::to_string(CodigoProveedor) +" ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||";
			string b = "||||||||||Nombre del proveedor: " +std::to_string(CodigoProveedor) + "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||";
			string c = "||||||||||Cliente: " +NombreCliente + "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||";
			string d = "|||||Codigo: " + std::to_string(CodigoCategoria) + "  Categoria: " + NombreCategoria + "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||";
			string e = "|||||Producto: " + NombreProducto + "  Cantidad: " + std::to_string(cantidadProducto) + "  Precio unitario:" + std::to_string(PrecioUnitario)  + "|||||||||||||||||||||||||||||||||||||||||||||||||||||";
			string f = "|||||Precio total: " + std::to_string(PrecioTotal) + "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||";
			
			
			printf ("%.90s\n", "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
			printf ("%.90s\n","|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
			printf ("%.90s\n","||||||||||||||||||||||||||||||||||INFORMACION DE COMPRA|||||||||||||||||||||||||||||||||||||");
			printf ("%.90s\n","|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
			printf ("%.90s\n",a.c_str());
			printf ("%.90s\n","|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
			printf ("%.90s\n",b.c_str());
			printf ("%.90s\n","|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
			
			printf ("%.90s\n", c.c_str());
		
			printf ("%.90s\n","|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
			
			printf ("%.90s\n",d.c_str());
			
			printf ("%.90s\n",e.c_str());
			printf ("%.90s\n",f.c_str());
			printf ("%.90s\n","|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
			printf ("%.90s\n","|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
			printf ("%.90s\n","|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
			
		}
		
	
		
		
	private:
		int CodigoProveedor;
		string NombreCliente;
		bool Descuento;
		int CodigoCategoria;
		string NombreCategoria;
		int cantidadProducto;
		string NombreProducto;
		int PrecioUnitario;
		int PrecioTotal;
		
		
};




//////////////CLASES PARA LOS ARCHIVOS DE TEXTO//////////////
class Proveedor{
	
	public:
		Proveedor(){
		Codigo = 0;
		Nombre = "Nulo";
		Direccion = "Nulo";
		Telefono = 0;
		cont=0;
		}
		
		Proveedor(int _code, string _name, string _direccion, int _tel)
			{
			Codigo = _code;
			Nombre = _name;
			Direccion = _direccion;
			Telefono = _tel;			
			}
		
		int getCodigo(){
			//cout<<Codigo<<endl;
			return Codigo;
		}
		
		string getNombre(){
			//cout<<Nombre<<endl;
			return Nombre;
		}
		
		string getDireccion(){
			cout<<Direccion<<endl;
			return Direccion;
		}
		
		int getTelefono(){
			cout<<Telefono<<endl;
			return Telefono;
		}
		
		int getCont(){
			return cont;
		}
		
		void sumarCont(){
			cont++;
		}
		
	private:
		int Codigo;
		string Nombre;
		string Direccion;
		int Telefono;
		int cont=0;
		
		
};

class Categoria{
	
	public:
		Categoria()
			{
			Codigo = 0;
			Descripcion = "Nulo";			
			}
			
		Categoria(int _code, string _descripcion)
			{
			Codigo = _code;
			Descripcion = _descripcion;			
			}
		
		int getCodigo(){
			//cout<<Codigo<<endl;
			return Codigo;
		}
		
		string getDescripcion(){
			return Descripcion;
		}
		
		int getCont(){
			return cont;
		}
		
		void sumarCont(){
			cont++;
		}
		
	private:
		int Codigo;
		string Descripcion;
		int cont=0;
};


class Producto{
	//CodProducto;CodCategoria;Nombre;PrecioUnit;CantidadStock
	public:
		Producto(){
			CodProducto = 0;
			CodCategoria = 0;
			Nombre = "Nulo";
			PrecioUnit = 0.0;
			CantidadStock = 1;
		}
		
		Producto(int _codP, int _codC, string _nomC, float _precio, int _stock){
			
			CodProducto = _codP;
			CodCategoria = _codC;
			Nombre = _nomC;
			PrecioUnit = _precio;
			CantidadStock = _stock;
		}
		
		int getCodProducto(){
			//cout<<CodProducto<<endl;
			return CodProducto;
		}
		
		int getCodCategoria(){
			//cout<<CodCategoria<<endl;
			return CodCategoria;
		}
		
		string getNombre(){
			//cout<<Nombre<<endl;
			return Nombre;
		}
		
		float getPrecioUnit(){
			cout<<PrecioUnit<<endl;
			return PrecioUnit;
		}
		
		int getCantidadStock(){
			//cout<<CantidadStock<<endl;
			return CantidadStock;
		}
		
		void reducirStock(int num){
			CantidadStock = CantidadStock - num;
		}
		
		int getCont(){
			return cont;
		}
		
		void sumarCont(int n){
			cont = cont+n;
		}
	
	
	private:
		int CodProducto;
		int CodCategoria;
		string Nombre;
		float PrecioUnit;
		int CantidadStock;
		int cont=0;
};




class Cliente{
	//Cedula;Nombre_c;Direccion_c;Telefono_C
	public:
		Cliente(){
		Cedula = 0;
		Nombre_c = "Nulo";
		Direccion_c = "Nulo";
		Telefono_c = 0;
		}
		
		Cliente(int _ced, string _name, string _direccion, int _tel)
			{
			Cedula = _ced;
			Nombre_c = _name;
			Direccion_c = _direccion;
			Telefono_c = _tel;			
			}
		
		int getCedula(){
			//cout<<"Este es el codiguito: ";
			//cout<<Cedula<<endl;
			return Cedula;
		}
		
		string getNombre(){
			//cout<<Nombre_c<<endl;
			return Nombre_c;
		}
		
		string getDireccion(){
			cout<<Direccion_c<<endl;
			return Direccion_c;
		}
		
		int getTelefono(){
			cout<<Telefono_c<<endl;
			return Telefono_c;
		}
		
		int getCont(){
			return cont;
		}
		
		void sumarCont(){
			cont++;
		}
		
		
		
	private:
		int Cedula;
		string Nombre_c;
		string Direccion_c;
		int Telefono_c;
		int cont=0;
		
		
};

class ArbolRN;
class Supermercado{
	
	public:
		Supermercado(){
		Codigo = 0;
		codigoLugar = 0;
		Nombre = "Nulo";
		
		}
		
		Supermercado(int _code, int _codLugar, string _name)
			{
			Codigo = _code;
			Nombre = _name;
			codigoLugar = _codLugar;
			//arbol=NULL;			
			}
		
		int getCodigo(){
			//cout<<Codigo<<endl;
			return Codigo;
		}
		
		string getNombre(){
			//cout<<Nombre<<endl;
			return Nombre;
		}
		

		int getCodigoLugar(){
			return codigoLugar;
		}
		
		
	private:
		int Codigo;
		string Nombre;
		int codigoLugar;
		
		
	friend class ArbolAVL;
	
	
		
};


//////////////END CLASES PARA LOS ARCHIVOS DE TEXTO//////////////




////////////////////////////////////ABB////////////////////////////////////////
using namespace std;

class NodoBinario{
	public:
		NodoBinario(int v){
		valor = v;
		Hizq = NULL;
		Hder = NULL;
		}
		
		NodoBinario(Proveedor* v){
		valorP = v;
		Hizq = NULL;
		Hder = NULL;
		}
		void InsertaBinario(int num);
		void InsertaBinario(Proveedor *o);
		
		
		
	private:
		int valor;
		Proveedor * valorP;
		NodoBinario * Hizq;
		NodoBinario * Hder;
	friend class Binario;
};

class Binario{
	public:
		Binario(){
			raiz = NULL;
		}
		
		void InsertaNodo(int num);
		
		void InsertaNodo(Proveedor* o);
		
		void PreordenR(NodoBinario *R);
		void InordenR(NodoBinario *R);
		void PostordenR(NodoBinario *R);
		NodoBinario* RetornarRaiz();
		bool LeerProveedores();
		
	private:
		NodoBinario* raiz;
		
};


void NodoBinario::InsertaBinario(int num)
	{

	if(num<valor){
		if(Hizq==NULL){
			Hizq = new NodoBinario(num);
		}else{
			Hizq->InsertaBinario(num);
			}
	}else{
		if(Hder==NULL){
			Hder = new NodoBinario(num);
		}else{
			Hder->InsertaBinario(num);

		}
	}
	}
	

void Binario::InsertaNodo(int num)
	{
	if(raiz==NULL){
		raiz = new NodoBinario(num);
	}else{
		raiz->InsertaBinario(num);
	}
	} 





void Binario::PreordenR(NodoBinario *R){

	if(R==NULL){
		return;
	
	}else{
		cout<<R->valorP->getCodigo()<<"-";
		PreordenR(R->Hizq);
		PreordenR(R->Hder);
	
		}
	}

void Binario::InordenR(NodoBinario *R){
	
	if(R==NULL){
		return;
	
		}else{
			InordenR(R->Hizq);
			cout<<R->valorP->getCodigo()<< "-";
			InordenR(R->Hder);
		}
	}

void Binario::PostordenR(NodoBinario *R){
	if(R==NULL){
		return;
	
	}else{
		PostordenR(R->Hizq);
		PostordenR(R->Hder);
		cout<<R->valorP->getCodigo()<< "-";
		}
	}
NodoBinario* Binario::RetornarRaiz(){
	cout<<raiz->valor<<endl;
	return raiz;
}



////////////////////////////////////ABB////////////////////////////////////////


///////////////////////INSERTAR PROVEEDORES///////////////////////
void NodoBinario::InsertaBinario(Proveedor* o)
	{
	 
	if(o->getCodigo() < valorP->getCodigo()){
		if(Hizq==NULL){
			Hizq = new NodoBinario(o);
		}else{
			Hizq->InsertaBinario(o);
			}
	}else{
		if(Hder==NULL){
			Hder = new NodoBinario(o);
		}else{
			Hder->InsertaBinario(o);

		}
	}
	}
	

void Binario::InsertaNodo(Proveedor* o)
	{
	if(raiz==NULL){
		raiz = new NodoBinario(o);
	}else{
		raiz->InsertaBinario(o);
	}
	} 
/////////////////////////////////////////////////////////////////

class nodo;
class ArbolAVL;

/////////////////ARBOL RN//////////////////////////
enum Color {RED, BLACK};

class ArbolRN{

  public:

  nodo* raiz;
  //ArbolRN():raiz(NULL){}
  
  ArbolRN(){
  raiz=NULL;
  }

  void insertarValorNodoRN(int _code, string _descripcion);
  //void inordenRN(nodo*R);
  void levelOrder();

  void rotarIzquierda(nodo *&, nodo *&);
  void rotarDerecha(nodo *&, nodo *&);
  void aplicarReglas(nodo *&, nodo *&);
  nodo* InsertarNodoRN(nodo* RaizRN, nodo *pt);
  
  void InordenRN(nodo *R);
  bool LeerCategorias(ArbolAVL AVL);

 // void InordenRN(nodo *T);
  int ConsultarTransporteAux2(nodo*H, int idT, int bandera, int x);

};


//////////////FIN ARBOL RN////////////////////////



//////////////LISTA CIRCULAR DOBLE//////////////

class nodo {
	typedef nodo *pnodo;
   public:
   		nodo(){
   			FB=0;
		   }
   		//Constructor int
	    nodo(int v)
	    {
	    	
	       valor = v;
	       siguiente = NULL;
	       anterior =NULL;
	    }
		nodo(int v, nodo * signodo)
	    {
	       valor = v;
	       siguiente = signodo;
	    }
		//Fin Constructor int
		
		
		
		
		//Constructor Supermercado
	    nodo(Supermercado* v)
			{
	    	valorS = v;
	    	siguiente = NULL;
	    	anterior =NULL;
	    	
	    	Hizq = NULL;
			Hder = NULL;
			
			FB=0;
		//	arbol = NULL;
			//padre=NULL;
	    	}
		
		//Fin Constructor Supermercado
		
		
		//Constructor Proveedor
		nodo(Proveedor *v)
			{
	    	valorP = v;
	    	siguiente = NULL;
	    	anterior =NULL;
	    	}
		
	   nodo(Proveedor* v, nodo * signodo)
	    {
	    	
	       valorP = v;
	       siguiente = signodo;
	    }
		//Fin Constructor Proveedor
		
		
		//Constructor Categoria
		nodo(Categoria* v)
			{
	    	valorC = v;
	    	siguiente = NULL;
	    	anterior =NULL;
	    	
	    	Hizq = NULL;
			Hder = NULL;
			padre=NULL;
	    	}
		
	   nodo(Categoria* v, nodo * signodo)
	    {
	    	
	       valorC = v;
	       siguiente = signodo;
	    }
		//Fin Constructor Categoria
		
		
		
		//Constructor Producto
		nodo(Producto* v)
			{
	    	valorPp = v;
	    	siguiente = NULL;
	    	anterior =NULL;
	    	}
		
	   nodo(Producto* v, nodo * signodo)
	    {
	    	
	       valorPp = v;
	       siguiente = signodo;
	    }
		//Fin Constructor Producto
		
		
		//Constructor Cliente
		nodo(Cliente* v)
			{
	    	valorCl = v;
	    	siguiente = NULL;
	    	anterior =NULL;
	    	}
		
	   nodo(Cliente* v, nodo * signodo)
	    {
	    	
	       valorCl = v;
	       siguiente = signodo;
	    }
		//Fin Constructor Cliente
		
		
		//Constructor Factura
		nodo(ItemFactura* v)
			{
	    	valorF = v;
	    	siguiente = NULL;
	    	anterior =NULL;
	    	}
		
	   nodo(ItemFactura* v, nodo * signodo)
	    {
	    	
	       valorF = v;
	       siguiente = signodo;
	    }
		//Fin Constructor Factura
		
	Supermercado* valorS;
		Categoria* valorC;
		
	ArbolRN	arbol;	
	
	
 private:
    int valor;
    Proveedor* valorP;
    //Categoria* valorC;
    Producto* valorPp;
    Cliente* valorCl;
    ItemFactura* valorF;
    //Supermercado* valorS;
    
    nodo *siguiente;
    nodo *anterior;
    
    nodo * Hizq;
	nodo * Hder;
	
	nodo *padre;
	bool color;
	
	int FB;
    
    //ArbolRN	* arbol;
    
        
   friend class listaDC;
	friend class ArregloClaves;
	friend class ArbolB;
	friend class PilaB;
	friend class ArbolRN;
	friend class ArbolAVL;
	
};

typedef nodo *pnodo;



///////////////////////////AVL/////////////////////////////////

class ArbolAVL{
  public:
    nodo *raiz;

    //ArbolAVL():raiz(NULL){}
    
    ArbolAVL(){raiz=NULL;}
	

    void PreordenI(nodo *k);
    ArbolRN BuscarSupermercado(nodo *ra, int _codeSuper);    
    void InsertarBalanceado(nodo *&ra, int _code, int _codLugar, string _name);

    bool Hh;

    void Equilibrar1(nodo *&n, bool);
    void Equilibrar2(nodo *&n, bool);
    void InsertaNodoAVL(int _code, int _codLugar, string _name);
    void RotacionDobleIzquierda(nodo *&n1, nodo *&n2);
    void RotacionDobleDerecha(nodo *&n1, nodo *&n2);
    void RotacionSimpleIzquierda(nodo *&n1, nodo *&n2);
    void RotacionSimpleDerecha(nodo *&n1, nodo *&n2);
    
    bool LeerSupermercados();

    //++++++++++++++++++Inserciones +++++++++++++++++++++++++++++++++++++++++

   // void InsertaNodoTransporte(nodo *n,int idHotel, int idTransporte, int tipoTransporte,string origen, string destino,string salida,string horaSalida ,string llegada,string horaLlegada,string compannia ,int  plazas,int precio,int cantT);
    //void InsertaNodoOferta(nodo *R,int idHotel, int  idOferta,int  precioInd,int precioDoble,int cantI,int  cantD);

};


void ArbolAVL::InsertaNodoAVL(int _code, int _codLugar, string _name)
{
	//Hh = false;
    if(raiz==NULL){
    	Supermercado * s = new Supermercado(_code, _codLugar, _name);
        raiz = new nodo(s);

    }else{
        //raiz->InsertaAVL(_code, _codLugar, _name);
       // Supermercado * s = new Supermercado(_code, _codLugar, _name);
        //nodo *sn = raiz;
        InsertarBalanceado(raiz, _code, _codLugar, _name);
    }
}

void ArbolAVL::InsertarBalanceado(nodo *&ra, int _code, int _codLugar, string _name){
    nodo *n1;

    if(ra==NULL){
    	Supermercado *sup = new Supermercado(_code, _codLugar, _name);
        ra=new nodo(sup);
        Hh = true;
    }else{
       // cout<<endl;
        if(_code<ra->valorS->getCodigo()){
            InsertarBalanceado(ra->Hizq,_code, _codLugar, _name);

        if(Hh){
            switch(ra->FB){
                case 1: ra->FB=0;
                Hh = false;
                break;
                case 0: ra->FB  = -1;
                break;
                case -1: n1=ra->Hizq;
                if(n1->FB ==-1){
                    RotacionSimpleIzquierda(ra, n1);
                }else{
                    RotacionDobleIzquierda(ra,n1);
                }
                Hh = false;
                break;
            }
        }
        }else{
            if(_code > ra->valorS->getCodigo()){
                InsertarBalanceado(ra->Hder,_code, _codLugar, _name);

                if(Hh){
                    switch(ra->FB){
                        case -1: ra->FB=0;
                        Hh = false;
                        break;
                        case 0: ra->FB=1;
                        break;
                        case 1:n1=ra->Hder;
                        if(n1->FB==1){
                            RotacionSimpleDerecha(ra, n1);
                        }else{
                            RotacionDobleDerecha(ra, n1);
                        }
                        Hh=false;
                        break;
                    }
                }
            }
        }
    }
}

void ArbolAVL::Equilibrar1(nodo*& n, bool Hh){
    nodo *n1;
    switch (n->FB){
        case -1: n->FB = 0;
        break;
        case 0: n->FB = 1;
        Hh = false;
        break;
        case 1: n1 = n->Hder;
        if(n1->FB>=0){
            if(n1->FB=0){
                Hh = false;
                RotacionSimpleDerecha(n, n1);
            }else{
                RotacionDobleDerecha(n, n1);
            }
        }
    }
}

void ArbolAVL::Equilibrar2(nodo*& n, bool Hh){
    nodo *n1;
    switch (n->FB){
        case 1: n->FB = 0;
        break;
        case 0: n->FB = 1;
        Hh = false;
        break;
        case -1: n1 = n->Hizq;
        if(n1->FB<=0){
            if(n1->FB=0){
                Hh = false;
                RotacionSimpleIzquierda(n, n1);
            }else{
                RotacionDobleIzquierda(n, n1);
            }
        }
    }
}



void ArbolAVL::RotacionDobleIzquierda(nodo*& n, nodo*& n1){
    nodo *n2;
    n2=n1->Hder;
    n->Hizq = n2->Hder;
    n2->Hder=n;
    n1->Hder=n2->Hizq;
    n2->Hizq=n1;

    if(n2->FB==1){
        n1->FB=-1;
    }else{
        n1->FB=0;
    }
    if(n2->FB==-1){
        n->FB=1;
    }else{
        n->FB=0;
    }
    n2->FB=0;
    n=n2;
}

void ArbolAVL::RotacionDobleDerecha(nodo*& n, nodo*& n1){
    nodo *n2;
    n2=n1->Hizq;
    n->Hder = n2->Hizq;
    n2->Hizq=n;
    n1->Hizq=n2->Hder;
    n2->Hder=n1;

    if(n2->FB==1){
        n->FB=-1;
    }else{
        n->FB=0;
    }
    if(n2->FB==-1){
        n1->FB=1;
    }else{
        n1->FB=0;
    }
    n2->FB=0;
    n=n2;
}

void ArbolAVL::RotacionSimpleDerecha(nodo*& n, nodo*& n1){
    n->Hder=n1->Hizq;
    n1->Hizq=n;

    if(n1->FB==1){
        n->FB=0;
        n1->FB=0;
    }else{
        n->FB=1;
        n1->FB=-1;
    }
    n=n1;
}

void ArbolAVL::RotacionSimpleIzquierda(nodo*& n, nodo*& n1){
    n->Hizq=n1->Hder;
    n1->Hder=n;

    if(n1->FB==-1){
        n->FB=0;
        n1->FB=0;
    }else{
        n->FB=-1;
        n1->FB=-1;
    }
    n=n1;
}

void ArbolAVL::PreordenI(nodo *R){
    if(R==NULL){
        return;
    }else{
        cout<<R->valorS->getNombre()<<endl;
        PreordenI(R->Hizq);
        PreordenI(R->Hder);
    }
}
/*
//++++++++++++++++++++ inserciones de archivo+++++++++++++++++++++++++++++
void ArbolAVL :: InsertaNodoTransporte(nodo *H,int idHotel, int idTransporte, int tipoT,string origen, string destino,string salida,string horaSalida ,string Llegada,string horaLlegada,string compannia ,int  plazas,int precio,int cantT){
    if (H==NULL){
        return;
    }
    else{
        if (H->obtenerValor()==idHotel){
            if (H->siguiente==NULL){
                H->siguiente=new RNegro();
            }
        H->siguiente->insertarValorNodoRN(idTransporte,tipoT,origen, destino, salida, horaSalida, Llegada, horaLlegada,compannia, plazas, precio,  cantT  );
        return;

        }

        else{
            InsertaNodoTransporte(H->Hizq,idHotel, idTransporte,tipoT,origen, destino, salida, horaSalida, Llegada, horaLlegada,compannia, plazas, precio,  cantT );
            InsertaNodoTransporte(H->Hder,idHotel, idTransporte,tipoT,origen, destino, salida, horaSalida, Llegada, horaLlegada,compannia, plazas, precio,  cantT );
        }
    }
}
void ArbolAVL:: InsertaNodoOferta(nodo *H,int idHotel, int  idOferta,int  precioInd,int precioDoble,int cantI,int  cantD){
    if (H==NULL){
        return;
    }
    else{
        if (H->obtenerValor()==idHotel){
            if (H->anterior==NULL){
                H->anterior=new AA();
            }
        H->anterior->lookup( idOferta,  precioInd,  precioDoble,  cantI,  cantD);
            return;
        }
        else{
            InsertaNodoOferta(H->Hizq, idHotel,  idOferta,  precioInd,  precioDoble,  cantI,  cantD);
            InsertaNodoOferta(H->Hder, idHotel,  idOferta,  precioInd,  precioDoble,  cantI,  cantD);
        }
    }
}
*/


    



/////////////////////FIN AVL//////////////////////////////////

//////////////////ARBOL B//////////////////////
class ArregloClaves
{
public:

    ArregloClaves(){

        for(int clave = 0; clave < 5; clave++){
            arregloClaves[clave] = NULL;
        }
    }

    void InsertarClave(nodo* Clave, int Numero);
    int ObtenerClave(int Numero);
    nodo* ObtenerApuntadorClave(int Numero);

	nodo* arregloClaves[5];
	
private:

    

    friend class Pagina;
};

void ArregloClaves::InsertarClave(nodo* Clave, int Numero)
{
    arregloClaves[Numero] = Clave;
}

int ArregloClaves::ObtenerClave(int Numero)
{
    nodo* Clave;
    Clave = arregloClaves[Numero];
    //int numero = Clave->numero;
    int numero = Clave->valorCl->getCedula();
    return numero;
}

nodo* ArregloClaves::ObtenerApuntadorClave(int Numero)
{
    nodo* Clave;
    Clave = arregloClaves[Numero];
    return Clave;
}

typedef ArregloClaves *ApuntadorClaves;

class Pagina;
typedef Pagina *ApuntadorPagina;

class ArregloRamas
{
public:

    ArregloRamas(){
        for(int k = 0; k < 5; k++){
            arregloRamas[k] = NULL;
        }
    }
    void InsertarRama(ApuntadorPagina Rama, int Numero);
    ApuntadorPagina ObtenerRama(int Numero);
	ApuntadorPagina arregloRamas[5];
	
private:

   

    friend class Pagina;
};

typedef ArregloRamas *ApuntadorRamas;

void ArregloRamas::InsertarRama(ApuntadorPagina Rama, int Numero)
{
    arregloRamas[Numero] = Rama;
}

ApuntadorPagina ArregloRamas::ObtenerRama(int Numero)
{
    ApuntadorPagina AP;
    AP = arregloRamas[Numero];
    return AP;
}

class Pagina
{
public:

    Pagina(){
        cuenta = 0;
        Claves = new ArregloClaves();
        Ramas = new ArregloRamas();
        EmpujarArriba = false;
        X = 0;
        Xr = NULL;
        K = 0;
        Esta = false;
        llamadas = 0;
    }



    //private:

    int cuenta;
    ApuntadorClaves Claves;
    ApuntadorRamas Ramas;
    bool EmpujarArriba;
    int X;
    ApuntadorPagina Xr;
    int K;
    bool Esta;
    int llamadas;

    friend class ArbolB;

};

class ArbolB
{
public:

    ArbolB(){raizB = NULL;}
    bool BVacio(){return raizB == NULL;}
    void EstablecerRaizB(ApuntadorPagina Raiz);
    void IniciarInsercionB(int Numero, int _id, string _nombre, string _direccion, string _telefono);
    ApuntadorPagina InsertarB(ApuntadorPagina Raiz, int Numero,  int _id, string _nombre, string _direccion, string _telefono);
    ApuntadorPagina EmpujarB(ApuntadorPagina Raiz, int Numero, int _id, string _nombre, string _direccion, string _telefono);
    ApuntadorPagina BuscarNodoB(ApuntadorPagina Raiz, int Numero);
    ApuntadorPagina MeterHojaB(ApuntadorPagina Raiz, int _id, string _nombre, string _direccion, string _telefono);
    ApuntadorPagina DividirNodoB(ApuntadorPagina Raiz,  int _id, string _nombre, string _direccion, string _telefono);
    void IniciarRecorridoB();
    void RecorridoInordenB(ApuntadorPagina Raiz);
    bool existeCliente(ApuntadorPagina Raiz,int _Numero);


	bool LeerClientes();
    // Funcion que simplemente agrega un cliente usando IniciarInsercionB(para Numero se utiliza el mismo _id, son 2 _id
    // en total)
    void Clientes();
    
    
    
    void Eliminar (int C1, ApuntadorPagina Raiz);
    
    void EliminarRegistro(int C1, ApuntadorPagina  Raiz, bool & Encontrado);
    
    void Quitar(ApuntadorPagina & P, int &K);
    
    void Sucesor (ApuntadorPagina P, int &K);
    
    void BuscarNodo(int Clave, ApuntadorPagina P, bool &Encontrado, int &K);

	void Restablecer (ApuntadorPagina P, int &K);
	
	void MoverDerecha(ApuntadorPagina P, int &K);
	
	void Combina(ApuntadorPagina P, int &K);
	
	void MoverIzquierda (ApuntadorPagina P, int &K);
	
    //private:

    ApuntadorPagina raizB;

};


void ArbolB::EstablecerRaizB(ApuntadorPagina Raiz)
{
    raizB = Raiz;
}

void ArbolB::IniciarInsercionB(int Numero, int _id, string _nombre, string _direccion, string _telefono)
{
    ApuntadorPagina Raiz = raizB;
    raizB = InsertarB(Raiz,Numero,  _id,  _nombre,  _direccion,  _telefono);
    
   // if (Raiz->Esta){
    //	delete raizB;
//	}
}

ApuntadorPagina ArbolB::InsertarB(ApuntadorPagina Raiz, int Numero, int _id, string _nombre, string _direccion, string _telefono)
{
    ApuntadorPagina P = NULL;

    Raiz = EmpujarB(Raiz,Numero,  _id,  _nombre,  _direccion,  _telefono);
    if	(Raiz->Esta){
    	Raiz->Esta= false;
    	return Raiz;
	}
    if(Raiz->EmpujarArriba == true){
        P = new Pagina();
        P->cuenta = 1;
        int	int_tel = stoi(_telefono);
        Cliente *clienteTemp = new Cliente(_id, _nombre, _direccion, int_tel);
		 
        nodo* Auxiliar = new nodo(clienteTemp);
        P->Claves->InsertarClave(Auxiliar,1);
        P->Ramas->InsertarRama(Raiz->Xr,1);
        if(Raiz->llamadas == 1){
            P->Ramas->InsertarRama(NULL,0);
        }
        else{
            P->Ramas->InsertarRama(Raiz,0);
        }

        Raiz = P;
    }
    return Raiz;


}

ApuntadorPagina ArbolB::EmpujarB(ApuntadorPagina Raiz, int Numero, int _id, string _nombre, string _direccion, string _telefono)
{
    if(Raiz == NULL){
        Raiz = new Pagina();
        Raiz->EmpujarArriba = true;
        Raiz->X = Numero;
        Raiz->Xr = NULL;
        Raiz->llamadas++;
        return Raiz;
    }

    else{
        Raiz = BuscarNodoB(Raiz,Numero);
        if(Raiz->Esta){
            cout << "Elemento Repetido" << endl;
            return Raiz;
        }
        if(Raiz->K == 0){

        }
        ApuntadorPagina Aux;
        Aux = EmpujarB(Raiz->Ramas->ObtenerRama(Raiz->K),Numero,  _id,  _nombre,  _direccion,  _telefono);
        Raiz->EmpujarArriba = Aux->EmpujarArriba;
        Raiz->X = Aux -> X;
        Raiz->Xr = Aux->Xr;
        if(Raiz->EmpujarArriba ==  true){
            if(Raiz->cuenta < 4){
                Raiz->EmpujarArriba = false;
                Raiz = MeterHojaB(Raiz,  _id,  _nombre,  _direccion,  _telefono);
            }
        //}
        else{
            Raiz->EmpujarArriba = true;
            Raiz = DividirNodoB(Raiz,  _id,  _nombre,  _direccion,  _telefono);

        }
        return Raiz;

    }
}
}
ApuntadorPagina ArbolB::BuscarNodoB(ApuntadorPagina Raiz, int Numero)
{
    //int PClave1 = Raiz->Claves->ObtenerClave(1);
    int PClave1 = Raiz->Claves->ObtenerApuntadorClave(1)->valorCl->getCedula();
    if(Numero < PClave1){
        Raiz->Esta = false;
        Raiz->K = 0;
    }
    else{
        Raiz->K = Raiz->cuenta;
        while(Numero < Raiz->Claves->ObtenerClave(Raiz->K) && Raiz->K > 1){
            Raiz->K--;
        }
        if(Numero == Raiz->Claves->ObtenerClave(Raiz->K)){
            Raiz->Esta = true;
        }
    }
    Raiz->llamadas++;
    return Raiz;
}

ApuntadorPagina ArbolB::MeterHojaB(ApuntadorPagina Raiz, int _id, string _nombre, string _direccion, string _telefono)
{
    int I;
    I = Raiz->cuenta;
    while(I >= Raiz->K + 1){
        Raiz->Claves->InsertarClave(Raiz->Claves->ObtenerApuntadorClave(I),I+1);
        Raiz->Ramas->InsertarRama(Raiz->Ramas->ObtenerRama(I),I+1);
        I--;
    }
    int	int_tel = stoi(_telefono);
    Cliente *clienteTemp2 = new Cliente(_id, _nombre, _direccion, int_tel);
		 
    nodo* X = new nodo(clienteTemp2);
        
    //nodo* X = new NodoCliente(Raiz->X, _id,  _nombre,  _direccion,  _telefono);
    Raiz->Claves->InsertarClave( X,Raiz->K + 1);
    Raiz->Ramas->InsertarRama(Raiz->Xr ,Raiz->K + 1);
    Raiz->cuenta++;


    return Raiz;


}

ApuntadorPagina ArbolB::DividirNodoB(ApuntadorPagina Raiz, int _id, string _nombre, string _direccion, string _telefono)
{
    int I;
    int Posmda;
    ApuntadorPagina Mder;
    int Mda;

    if(Raiz->K <= 2){
        Posmda = 2;
    }
    else{
        Posmda = 3;
    }

    Mder = new Pagina();
    I = Posmda + 1;
    while(I <= 4){
        Mder->Claves->InsertarClave(Raiz->Claves->ObtenerApuntadorClave(I) ,I - Posmda);
        Mder->Ramas->InsertarRama(Raiz->Ramas->ObtenerRama(I) ,I - Posmda);
        I++;
    }
    Mder->cuenta = 4 - Posmda;
    Raiz->cuenta = Posmda;

    if(Raiz->K <= 2){
        Raiz = MeterHojaB(Raiz,   _id,  _nombre,  _direccion,  _telefono);
    }
    else{
        Mder->X = Raiz->X;
        Mder->Xr = Raiz->Xr;
        Mder->K = Raiz->K - Posmda;
        Mder = MeterHojaB(Mder,  _id,  _nombre,  _direccion,  _telefono);
    }
    Mda = Raiz->Claves->ObtenerClave(Raiz->cuenta);
    Raiz->X = Mda;
    Mder->Ramas->InsertarRama(Raiz->Ramas->ObtenerRama(Raiz->cuenta),0);
    Raiz->cuenta--;
    Raiz->Xr = Mder;
    return Raiz;
}

void ArbolB::IniciarRecorridoB()
{
    ApuntadorPagina Raiz = raizB;
    RecorridoInordenB(Raiz);
}

void ArbolB::RecorridoInordenB(ApuntadorPagina Raiz){
    if(Raiz == NULL){
        return;
    }
    else{
        RecorridoInordenB(Raiz->Ramas->ObtenerRama(0));
        int I = 1;
        while(I <= Raiz->cuenta){
            nodo* Recorrido = Raiz->Claves->ObtenerApuntadorClave(I);

            cout<< "idCliente: "<< Recorrido->valorCl->getCedula() << endl;
            cout << "Nombre: " << Recorrido->valorCl->getNombre()<< endl;
            //cout << "Cantidad de Compras: " << Recorrido->valorCl-><< endl;
            cout << "Ciudad: " << Recorrido->valorCl->getDireccion()<< endl;
            cout << "Telefono: " << Recorrido->valorCl->getTelefono() << endl;
            cout << "\n" << endl;

            RecorridoInordenB(Raiz->Ramas->ObtenerRama(I));

            I++;
        }
    }
}

/*														/////////////////////////////////REVISAR
bool ArbolB::existeCliente(ApuntadorPagina Raiz ,int _Numero) {
    if (Raiz == NULL) {
        return false;

    } else {
        existeCliente(Raiz->Ramas->ObtenerRama(0), _Numero);
        int I = 1;
        while (I <= Raiz->cuenta) {
            if (Raiz->Claves->ObtenerApuntadorClave(I)->valorCl-> == _Numero) return true;

            existeCliente(Raiz->Ramas->ObtenerRama(I),_Numero);
            I++;
        }

    }

}

*/
//-----------Pila-----------//

class PilaB {
public:
    PilaB() : plistaB(NULL) {}

    void Push(nodo*);

    bool Vacia() { return plistaB == NULL; }
    nodo* Pop();
    int Size();

    nodo* plistaB;
};

void PilaB::Push(nodo* v)
{
    if(Vacia()) {
        plistaB = v;
    }else{
        nodo *aux = plistaB;
        while(aux->siguiente){
            aux = aux->siguiente;
        }
        aux->siguiente = v;
        v->anterior = aux;

    }
}

nodo* PilaB::Pop()
{
    nodo *borrar = NULL;
    nodo *salida = NULL;
    if(Vacia()){
        cout<<"Pila Vacia"<<endl;
    }else{
        borrar = plistaB;
        while(borrar->siguiente){
            borrar=borrar->siguiente;
        }
        if(Size()>1){
            salida = borrar;
            borrar->anterior->siguiente=NULL;
            borrar = NULL;
            delete borrar;
        }else{
            salida = plistaB;
            plistaB = NULL;
        }
    }
    return salida;
}

int PilaB::Size(){
    while(plistaB && plistaB->anterior) plistaB = plistaB->anterior;
    int cont=0;
    nodo *aux;
    aux = plistaB;
    while(aux){
        cont++;
        aux = aux->siguiente;
    }
    return cont;
}

/*
void ArbolB::BuscarNodo(int Clave, ApuntadorPagina P, bool & Encontrado, int & K)
{
// Este método examina la pagina referenciada por P. De no //encontrarse el valor nuevo, K será el índice de la rama por //donde bajar

{
int C =  P->Claves->ObtenerApuntadorClave(1)->valorCl->getCedula();
if (Clave < C)   // recuerde que los arreglos aquí inician en 1
  {
  	//P->K = 0;
	//P->Esta = 0;
     Encontrado=false;
     K=0; //rama por donde descender
  }
else
  {
    //Examina claves de la pagina
     K=P->cuenta; // Numero de claves de la Pagina
while(Clave<P->Claves->ObtenerApuntadorClave(K)->valorCl->getCedula() and (K>1))
	{
		K=K-1;
	}
	
	if (Clave==P->Claves->ObtenerApuntadorClave(K)->valorCl->getCedula()){
		Encontrado=true;
	}
    
   }
}
}


//Tiene como funcion devolver la nueva raiz si la raiz inicial se ha quedado sin claves
void ArbolB::Eliminar (int C1, ApuntadorPagina Raiz){

    bool Encontrado;
    ApuntadorPagina P;
{
   EliminarRegistro(C1,Raiz,Encontrado);
   if (!Encontrado){
   		cout<< "El elemento no se encuentra en el árbol"<<endl;
   }
      
   else{
   
      if (Raiz->cuenta == 0) // la raíz ha quedado vacia
      {
        P= Raiz;
        Raiz= Raiz->Ramas->ObtenerRama(0);
        delete(P);
      }
  }
}
}



//Este metodo controla el proceso de borrado de una clave
//Primero busca en el nodo donde se encuentra la clave a eliminar
//Si es una hoja, llama a elimina
// Si no es hoja, se busca el sucesor inmediato, se coloca en el elemento a eliminar
//Luego se suprime el sucesor  en la hoja
void ArbolB::EliminarRegistro(int C1, ApuntadorPagina Raiz, bool & Encontrado)
{
     int K;
     
     if (BVacio())
        Encontrado= false; // se ha llegado debajo de una hoja, la clave no esta en el arbol
     else
     {
       //with Raiz
       {
         BuscarNodo(C1,Raiz,Encontrado,K);
         if (Encontrado)
         {
           if (Raiz->Ramas->ObtenerRama(K-1)==NULL)//Las ramas estan indexadas desde 0 a Max, por lo que este nodo es hoja
              {
			  Quitar(Raiz,K);
			 cout<<"Despues de Quitar: " << Raiz->Claves->ObtenerApuntadorClave(1)->valorCl->getCedula()<<endl;
			  
          	}
           else //No es hoja
           {
              Sucesor(Raiz,K); //reemplaza  Claves[K] por su sucesor
              EliminarRegistro(Raiz->Claves->ObtenerApuntadorClave(K)->valorCl->getCedula(), Raiz->Ramas->ObtenerRama(K),Encontrado);  //Elimina la clave sucesora en su nodo
              if (!Encontrado) //inconsistencia debe esta en el nodo
                {cout << "Error en el proceso"<<endl;}
           }
         }  
         else // No ha sido localizada la clave
         {
            EliminarRegistro (C1,Raiz->Ramas->arregloRamas[K],Encontrado);
            // Las llamadas recursivas retornan el control a este punto,  
            // se comprueba que el nodo hijo mantenga un numero
            // claves igual o mayor que el minimo necesario
            if (Raiz->Ramas->ObtenerRama(K) !=NULL){
			
              if (Raiz->Ramas->ObtenerRama(K)->cuenta<5){
			 
                 Restablecer(Raiz,K);
                  }
                }
         }         
 }
}
}



//recibe la direccion del nodo y la posicion de la clave a eliminar.
//Elimina la clave junto con la rama que le corresponde
void ArbolB::Quitar(ApuntadorPagina & P, int& K)
{
  int J; //entero
   //With P
   
   {
    for (J= K+1;J <= P->cuenta; J++)
    {
    //	P->Claves->ObtenerApuntadorClave(J) = P->Claves->ObtenerApuntadorClave(J-1);
    
    	//P->Claves[J-1] = P->Claves[J];
    	//P->Claves[J-1].ObtenerClave(0);
    //	P->Ramas[J-1] =  P->Ramas[J];
		
//	cout<<	"DAAAAAAAAAAAAAAAAH: "<<P->Claves->ObtenerApuntadorClave(J)->valorCl->getCedula()<<endl;    
		
    	
    //	nodo* temp = P->Claves->ObtenerApuntadorClave(J);
    	P->Claves->arregloClaves[J-1] = P->Claves->ObtenerApuntadorClave(J);
    //	nodo* temp2 = P->Claves->ObtenerApuntadorClave(J-1);
     //   temp2 = temp;   //Desplaza una posicion a la izquierda, con ello elimina la clave}
        
    //    cout<<temp2->valorCl->getCedula()<<endl;
      //delete (temp);
       
       P->Ramas->arregloRamas[J-1] = P->Ramas->ObtenerRama(J);
    //   ApuntadorPagina temp3 = P->Ramas->ObtenerRama(J);
  //     ApuntadorPagina temp4 = P->Ramas->ObtenerRama(J-1);
    //   temp4 = temp3;
       
    }
    P->cuenta=(P->cuenta)-1;
}

}


//Busca la clave inmediatamente sucesor de la clave k y reemplaza la clave K
void ArbolB::Sucesor(ApuntadorPagina P, int& K)
{
  ApuntadorPagina Q;
  
  Q = P->Ramas->ObtenerRama(K);
  
  while (Q->Ramas->ObtenerRama(0) != NULL){
     Q = Q->Ramas->ObtenerRama(0);
	 }
	 
  P->Claves[K] = Q->Claves[1];
}



//Este realiza las acciones mas complejas del proceso. Restaura el nodo P.Ramas[K]
//el cual ha quedado con un numero menor de claves, menos que el minimo
void ArbolB::Restablecer (ApuntadorPagina P, int& K)
{
  if (K>0)   //Tiene hermano izquierdo
  {
       if (P->Ramas->ObtenerRama(K-1)->cuenta > 5) //Tiene mas claves que el minimo y por tanto puede desplazarse una clave
           {
		    MoverDerecha(P,K);
		}
       else
       	{
           Combina(P,K);
       }
  }
  else
   {//solo tiene hermano derecho
      if (P->Ramas->ObtenerRama(1)->cuenta > 5)
      {
        //Tiene mas claves que el minimo
        int int_temp = 1;
        MoverIzquierda(P, int_temp);
    }
      else{
      	int int_temp = 1;
        Combina(P, int_temp);
    }
   }
} 




//Mueve una clave del nodo antecedente(P) al nodo que se esta restaurando
//Asciende la clave mayor del hermano izquierdo al nodo antecedente
 void ArbolB::MoverDerecha(ApuntadorPagina P, int& K)
 //En este metodo se deja hueco en el nodo P.Ramas[K] que es el nodo que tiene menos claves que elminimo 
 //necesario, inserta la clave k del nodo antecedente y a su vez asciende la clave mayor ( la mas a la derecha) 
 //del hermano izquierdo
{
  int J;
   //with P.Ramas[K]
   {
      for (J= P->Ramas->ObtenerRama(K)->cuenta; J>=1; J--) 
      {
        P->Ramas->ObtenerRama(K)->Claves[J+1]= P->Ramas->ObtenerRama(K)->Claves[J];
        P->Ramas->ObtenerRama(K)->Ramas[J+1]=P->Ramas->ObtenerRama(K)->Ramas[J];
      }
     P->Ramas->ObtenerRama(K)->cuenta=J= P->Ramas->ObtenerRama(K)->cuenta+1;
     P->Ramas->ObtenerRama(K)->Ramas[1] = P->Ramas->ObtenerRama(K)->Ramas[0];
     P->Ramas->ObtenerRama(K)->Claves[1] = P->Claves[K]; // baja la clave del nodo padre
   }
   //Ahora sube la clave desde el hermano izquierdo al nodo padre, para reemplazar la que bajo
   //with P.Ramas[K-1] // hermano izquierdo
   {
     P->Claves[K]=P->Ramas->ObtenerRama(K-1)->Claves[P->Ramas->ObtenerRama(K-1)->cuenta];
     P->Ramas->ObtenerRama(K)->Ramas[0] = P->Ramas->ObtenerRama(K-1)->Ramas[P->Ramas->ObtenerRama(K-1)->cuenta];
     P->Ramas->ObtenerRama(K-1)->cuenta = P->Ramas->ObtenerRama(K-1)->cuenta-1;
   }
}




//Ahora la clave que asciende al nodo antecedente es la clave menor(izquierda) del nodo a restaurar
void ArbolB::MoverIzquierda (ApuntadorPagina P, int& K)
{
  int J;
  //with P.Ramas[K-1]// es el nodo con menos claves que el minimo
  {
    P->Ramas->ObtenerRama(K-1)->cuenta=P->Ramas->ObtenerRama(K-1)->cuenta+1;
    P->Ramas->ObtenerRama(K-1)->Claves[P->Ramas->ObtenerRama(K-1)->cuenta]=P->Claves[K];
    P->Ramas->ObtenerRama(K-1)->Ramas[P->Ramas->ObtenerRama(K-1)->cuenta]=P->Ramas->ObtenerRama(K)->Ramas[0];
      // baja la clave del nodo padre
  }
  //with P.Ramas[K] // hermano derecho
  {
    P->Claves[K]=P->Ramas->ObtenerRama(K)->Claves[1];   //sube al nodo padre de la clave 1 del hermano derecho, sustituye a la que bajo
    P->Ramas[0]=P->Ramas->ObtenerRama(K)->Ramas[1];
    P->Ramas->ObtenerRama(K)->cuenta=P->Ramas->ObtenerRama(K)->cuenta-1;
    
    for (J=1; J<=P->Ramas->ObtenerRama(K)->cuenta; J++)
    {
       P->Ramas->ObtenerRama(K)->Claves[J]= P->Ramas->ObtenerRama(K)->Claves[J+1];
       P->Ramas->ObtenerRama(K)->Ramas[J] = P->Ramas->ObtenerRama(K)->Ramas[J+1];
    }
  }
}



//Este metodo forma un solo nodo
//Combina el nodo que esta en la rama K con el que esta en la rama k-1 y la clave mediana de ambos
// que se encuentra en el nodo ascendente.
void ArbolB::Combina(ApuntadorPagina P, int& K)
//forma un nuevo nodo con el hermano izquierdo la mediana ente el nodo problema y el hermano izquierdo
//situado en el nodo padre y las claves del nodo problema.
{
  int J;
  ApuntadorPagina Q;
  Q = P->Ramas->ObtenerRama(K);
  
  //with P.Ramas[K-1]//hermano izquierdo
  {
    P->Ramas->ObtenerRama(K-1)->cuenta = P->Ramas->ObtenerRama(K-1)->cuenta+1;
    P->Ramas->ObtenerRama(K-1)->Claves[P->Ramas->ObtenerRama(K-1)->cuenta]=P->Claves[K];// baja clave mediana desde el nodo padre
    P->Ramas->ObtenerRama(K-1)->Ramas[P->Ramas->ObtenerRama(K-1)->cuenta] = Q->Ramas[0];
    
    for (J=1; J<= Q->cuenta; J++)
    {
      P->Ramas->ObtenerRama(K-1)->cuenta = P->Ramas->ObtenerRama(K-1)->cuenta+1;
      P->Ramas->ObtenerRama(K-1)->Claves[P->Ramas->ObtenerRama(K-1)->cuenta] = Q->Claves[J];
      P->Ramas->ObtenerRama(K-1)->Ramas[P->Ramas->ObtenerRama(K-1)->cuenta] = Q->Ramas[J];
    }
  }
 //Reajustadas las claves y ramas del nodo padre debido a que antes ascendio la clave K
 //with P
 
  for (J=K; J<= P->Ramas->ObtenerRama(K-1)->cuenta-1; J++)
  {
    P->Claves[J]=P->Claves[J+1];
    P->Ramas[J]=P->Ramas[J+1];
  }
  P->cuenta=P->cuenta-1;
 
 delete(Q);
}  

//////////////////FIN ARBOL B//////////////////////
*/



/*
/////////////////ARBOL RN//////////////////////////
enum Color {RED, BLACK};

class ArbolRN{

  public:

  pnodo raiz;
  //ArbolRN():raiz(NULL){}
  
  ArbolRN(){
  raiz=NULL;
  }

  void insertarValorNodoRN(int _code, string _descripcion);
  //void inordenRN(nodo*R);
  void levelOrder();

  void rotarIzquierda(nodo *&, nodo *&);
  void rotarDerecha(nodo *&, nodo *&);
  void aplicarReglas(nodo *&, nodo *&);
  nodo* InsertarNodoRN(nodo* RaizRN, nodo *pt);
  
  void InordenRN(nodo *R);
  bool LeerCategorias();

 // void InordenRN(nodo *T);
  int ConsultarTransporteAux2(nodo*H, int idT, int bandera, int x);

};
*/
nodo* ArbolRN :: InsertarNodoRN(nodo* RaizRN, nodo *pt){
    if (RaizRN == NULL)
       return pt;

    if (pt->valorC->getCodigo() < RaizRN->valorC->getCodigo()){
        RaizRN->Hizq  = InsertarNodoRN(RaizRN->Hizq, pt);
        RaizRN->Hizq->padre = RaizRN;
    }
    else if (pt->valorC->getCodigo() > RaizRN->valorC->getCodigo())
    {
        RaizRN->Hder = InsertarNodoRN(RaizRN->Hder, pt);
        RaizRN->Hder->padre = RaizRN;
    }

    return RaizRN;
}



void ArbolRN :: rotarIzquierda(nodo *&RaizRN, nodo *&pt){
    nodo *pt_der = pt->Hder;

    pt->Hder = pt_der->Hizq;

    if (pt->Hder != NULL)
        pt->Hder->padre = pt;

    pt_der->padre = pt->padre;

    if (pt->padre == NULL)
        RaizRN = pt_der;

    else if (pt == pt->padre->Hizq) //////////////////////////////////////////////REVISAR
        pt->padre->Hizq = pt_der;

    else
        pt->padre->Hder = pt_der;

    pt_der->Hizq = pt;
    pt->padre = pt_der;
}

void ArbolRN ::rotarDerecha(nodo *&RaizRN, nodo *&pt){
    nodo *pt_izq = pt->Hizq;

    pt->Hizq = pt_izq->Hder;

    if (pt->Hizq != NULL)
        pt->Hizq->padre = pt;

    pt_izq->padre = pt->padre;

    if (pt->padre == NULL)
        RaizRN = pt_izq;

    else if (pt == pt->padre->Hizq)
        pt->padre->Hizq = pt_izq;

    else
        pt->padre->Hder = pt_izq;

    pt_izq->Hder = pt;
    pt->padre = pt_izq;
}


void ArbolRN ::aplicarReglas(nodo *&RaizRN, nodo *&pt){
    nodo *padre_pt = NULL;
    nodo *abuelo_pt = NULL;
	if (pt->padre != NULL){
	
    while ((pt != RaizRN) && (pt->color != BLACK) &&
           (pt->padre->color == RED))
    {

        padre_pt = pt->padre;
        abuelo_pt = pt->padre->padre;

        /*  Case : A
            Parent of pt is left child of Grand-parent of pt */
        if (padre_pt == abuelo_pt->Hizq){
            nodo *tio_pt = abuelo_pt->Hder;

            /* Case : 1
               The uncle of pt is also red
               Only Recoloring required */
            if (tio_pt != NULL && tio_pt->color == RED){
                abuelo_pt->color = RED;
                padre_pt->color = BLACK;
                tio_pt->color = BLACK;
                pt = abuelo_pt;
            }

            else{
                /* Case : 2
                   pt is right child of its parent
                   Left-rotation required */
                if (pt == padre_pt->Hder)
                {
                    rotarIzquierda(RaizRN, padre_pt);
                    pt = padre_pt;
                    padre_pt = pt->padre;
                }

                /* Case : 3
                   pt is left child of its parent
                   Right-rotation required */
                rotarDerecha(RaizRN, abuelo_pt);
                swap(padre_pt->color, abuelo_pt->color);
                pt = padre_pt;
            }
        }

        /* Case : B
           Parent of pt is right child of Grand-parent of pt */
        else{
            nodo *tio_pt = abuelo_pt->Hizq;

            /*  Case : 1
                The uncle of pt is also red
                Only Recoloring required */
            if ((tio_pt != NULL) && (tio_pt->color == RED)){
                abuelo_pt->color = RED;
                padre_pt->color = BLACK;
                tio_pt->color = BLACK;
                pt = abuelo_pt;
            }
            else{
                /* Case : 2
                   pt is left child of its parent
                   Right-rotation required */
                if (pt == padre_pt->Hizq){
                    rotarDerecha(RaizRN, padre_pt);
                    pt = padre_pt;
                    padre_pt = pt->padre;
                }

                /* Case : 3
                   pt is right child of its parent
                   Left-rotation required */
                rotarIzquierda(RaizRN, abuelo_pt);
                swap(padre_pt->color, abuelo_pt->color);
                pt = padre_pt;
            }
        }
    }
	}
    RaizRN->color = BLACK;
}



ArbolRN ArbolAVL::BuscarSupermercado(nodo *ra, int _codeSuper){
   // nodo *n1;
	ArbolRN n;
    if(ra==NULL){
    	cout<<"No existe"<<endl;
    	return n;
    }else{
       
        if(_codeSuper==ra->valorS->getCodigo()){
        	//cout<<"Ahi esta"<<endl;
        //	ra->valorS->arbol->insertarValorNodoRN(45, "Verduras");
        	//arbolS = ra->valorS->arbol;

        	return ra->arbol;
        }

		if (_codeSuper<ra->valorS->getCodigo()){
			return BuscarSupermercado(ra->Hizq, _codeSuper);
			
		
        }else{
            if(_codeSuper > ra->valorS->getCodigo()){
                return BuscarSupermercado(ra->Hder, _codeSuper);
               }
         }
   }
}

void ArbolRN ::insertarValorNodoRN(int _code, string _descripcion){
	Categoria * c = new Categoria(_code, _descripcion);
	
    nodo *pt = new nodo(c);

    raiz = InsertarNodoRN(raiz, pt);

    aplicarReglas(raiz, pt);

}

void ArbolRN::InordenRN(nodo *R){
	
	if(R==NULL){
		return;
	
		}else{
			InordenRN(R->Hizq);
			cout<<R->valorC->getCodigo()<< "-";
			InordenRN(R->Hder);
		}
	}
//////////////FIN ARBOL RN////////////////////////



class listaDC {
   public:
    listaDC() { primero = actual = NULL; }
    ~listaDC();
    
    void InsertarInicio(int v);
    void InsertarFinal(int v);
    void InsertarPos (int v, int pos);
    void EliminarInicio();
    void EliminarFinal();
    void EliminarPos(int pos);
    bool ListaVacia() { return primero == NULL; } 
    void Imprimir();
    void Borrar(int v);
    void Mostrar();
    void Siguiente();
    void Primero();
    void Ultimo();
    void BorrarFinal();
    void BorrarInicio();
    void borrarPosicion(int pos);
    int largoLista();
    
    //bool LeerProveedores();
    void InsertarInicio(Proveedor* v);
    bool LeerCategorias();
    void InsertarInicio(Categoria* v);
    void InsertarInicio(Producto* v);
    bool LeerProductos();
    void InsertarInicio(Cliente* v);
    bool LeerClientes();
    void InsertarInicio(ItemFactura* v);
    
    bool VerificarProveedor(int cod);
    bool VerificarCliente(string nom);
    bool MostrarProductos(string cat, listaDC&  Cats);
    string MostrarCategoria(int cod);
    void MostrarProveedores();
    void MostrarClientes();
    void MostrarTodasCategorias();
    bool VerificarCodUnico(int cod);
    bool RevisarCod();
    int MostrarCodigoCategoria(string cat);
    int MostrarPrecio(string producto);
    int MostrarStock(string producto);
    bool VerificarCategoria(string cat);
    void ReducirStock(string producto, int num);
    bool VerificarProducto(string prod);
    bool RevisarCodCategoria();
	bool VerificarCodUnicoCategoria(int cod);
	void ImprimirFactura();
	string ProveedorMayoresVentas();
	string CategoriaMayoresVentas();
	string ProductoMayoresVentas();
	string ClienteMayoresVentas();
    
   private:
    pnodo primero;
    pnodo actual;
};

listaDC::~listaDC()
{
   pnodo aux;
   
   while(primero) {
      aux = primero;
      primero = primero->siguiente;
      primero->anterior=aux->anterior;
      aux->anterior->siguiente=primero;
      delete aux;
   }
   actual = NULL;
}

int listaDC::largoLista(){
    int cont=0;

    pnodo aux = primero;
    if(ListaVacia()){
        return cont;
    }else{
        while(aux!=primero){
        aux=aux->siguiente;
        cont++;
    }
    return cont;
    }
    
}

void listaDC::InsertarInicio(int v)
{
  
   if (ListaVacia())
   {
     primero = new nodo(v);
     primero->anterior=primero;
     primero->siguiente=primero;
   }  
   else
   {
     pnodo nuevo=new nodo (v);
     nuevo->siguiente=primero;
     nuevo->anterior= primero->anterior;
     primero->anterior->siguiente=nuevo;
     nuevo->siguiente->anterior=nuevo;
     primero= nuevo;
   }
}


//Insertar para Proveedor
void listaDC::InsertarInicio(Proveedor* v)
{
  
   if (ListaVacia())
   {
     primero = new nodo(v);
     primero->anterior=primero;
     primero->siguiente=primero;
   }  
   else
   {
     pnodo nuevo=new nodo (v);
     nuevo->siguiente=primero;
     nuevo->anterior= primero->anterior;
     primero->anterior->siguiente=nuevo;
     nuevo->siguiente->anterior=nuevo;
     primero= nuevo;
   }
}
//Fin Insertar para Proveedor



//Insertar para ItemFactura
void listaDC::InsertarInicio(ItemFactura* v)
{
  
   if (ListaVacia())
   {
     primero = new nodo(v);
     primero->anterior=primero;
     primero->siguiente=primero;
   }  
   else
   {
     pnodo nuevo=new nodo (v);
     nuevo->siguiente=primero;
     nuevo->anterior= primero->anterior;
     primero->anterior->siguiente=nuevo;
     nuevo->siguiente->anterior=nuevo;
     primero= nuevo;
   }
}
//Fin Insertar para Proveedor




//Insertar para Categoria
void listaDC::InsertarInicio(Categoria* v)
{
  
   if (ListaVacia())
   {
     primero = new nodo(v);
     primero->anterior=primero;
     primero->siguiente=primero;
   }  
   else
   {
     pnodo nuevo=new nodo (v);
     nuevo->siguiente=primero;
     nuevo->anterior= primero->anterior;
     primero->anterior->siguiente=nuevo;
     nuevo->siguiente->anterior=nuevo;
     primero= nuevo;
   }
}
//Fin Insertar para Categoria



//Insertar para Producto
void listaDC::InsertarInicio(Producto* v)
{
  
   if (ListaVacia())
   {
     primero = new nodo(v);
     primero->anterior=primero;
     primero->siguiente=primero;
   }  
   else
   {
     pnodo nuevo=new nodo (v);
     nuevo->siguiente=primero;
     nuevo->anterior= primero->anterior;
     primero->anterior->siguiente=nuevo;
     nuevo->siguiente->anterior=nuevo;
     primero= nuevo;
   }
}
//Fin Insertar para Producto



//Insertar para Cliente
void listaDC::InsertarInicio(Cliente* v)
{
   if (ListaVacia())
   {
     primero = new nodo(v);
     primero->anterior=primero;
     primero->siguiente=primero;
   }  
   else
   {
     pnodo nuevo=new nodo (v);
     nuevo->siguiente=primero;
     nuevo->anterior= primero->anterior;
     primero->anterior->siguiente=nuevo;
     nuevo->siguiente->anterior=nuevo;
     primero= nuevo;
   }
}
//Fin Insertar para Cliente



void listaDC::InsertarFinal(int v)
{
   if (ListaVacia())
     {
     primero = new nodo(v);
     primero->anterior=primero;
     primero->siguiente=primero;
   }  
   else
   { 
     pnodo nuevo = new nodo(v);
     nuevo->anterior = primero->anterior;
     nuevo->siguiente=primero->anterior->siguiente;
     primero->anterior->siguiente=nuevo;
     primero->anterior=nuevo;
    }    
}


void listaDC::InsertarPos(int v,int pos)
{
   if (ListaVacia())
   {
     primero = new nodo(v);
     primero->anterior=primero;
     primero->siguiente=primero;
   } 
   else
   {
      if(pos <=1)
        InsertarInicio(v);    
       else
       {
        if (pos==largoLista())
          InsertarFinal(v);
        else
        {     
             pnodo aux= primero;
             int i =2;
             while((i != pos )&&(aux->siguiente!= primero))
             {
                   i++;
                   aux=aux->siguiente;
             }
             pnodo nuevo= new nodo(v);
             nuevo->siguiente=aux->siguiente;
             aux->siguiente=nuevo;
             aux->siguiente->anterior=aux;
             nuevo->siguiente->anterior=nuevo;                           
        }
       }
   }
}   

void listaDC::BorrarFinal()
{
    if (ListaVacia())
      cout << "No hay elementos en la lista:" << endl;
    else
    {
      if (primero->siguiente == primero)
      {
        pnodo temp= primero;
        primero= NULL;
        delete temp;
      }
      else 
      {
         pnodo aux = primero;
         while (aux->siguiente->siguiente != primero)
              aux = aux->siguiente;
         pnodo temp = aux->siguiente;
         aux->siguiente= primero;
         delete temp;
      }
    }
}

void listaDC::BorrarInicio()
{
    if (ListaVacia())
      cout << "No hay elementos en la lista:" << endl;
    else
    {
     if (primero->siguiente == primero)
     {
        pnodo temp= primero;
        primero= NULL;
        delete temp;
     }
     else
     {
        pnodo aux = primero;
        pnodo temp= primero;
        while (aux->siguiente!=primero)
            aux= aux->siguiente;
        aux->siguiente=primero->siguiente;
        primero=primero->siguiente; 
        primero->anterior=aux;
        delete temp;
      }
    }
}

void listaDC:: borrarPosicion(int pos)
{
  if(ListaVacia())
    cout << "Lista vacia" <<endl;
  else
  {
   if((pos>largoLista())||(pos<0))
     cout << "Error en posicion" << endl;
   else
    {
      if(pos==1)
        BorrarInicio();
      else
      {
       int cont=2;
       pnodo aux=  primero;
       while(cont<pos)
       {
         aux=aux->siguiente;
         cont++;
       }
       pnodo temp = aux->siguiente;
       aux->siguiente=aux->siguiente->siguiente;
       delete temp;
     }
    }
  }
}

void listaDC::Mostrar()
{
   pnodo aux=primero;
   while(aux->siguiente!=primero)
     {
     (aux->valorPp)->getCodProducto();         
      cout << aux->valorPp << "-> ";
      aux = aux->siguiente;
     }
     cout<<aux->valorPp<<"->";
     cout<<endl;
}   
//////////////END LISTA CIRCULAR DOBLE//////////////




///////## Verificar entero ##///////
bool VerificarEntero(string num)
	{
	int int_num;
	try{
		int_num = std::stoi(num);
		}
	catch (std::exception& e) {
    	std::cerr << "******************ERROR******************\n";
    	return false;
    	//std::terminate();
 		}
	return true;			
	}
	
int RetornarEntero(string num)
	{
	int int_num;
	int_num = std::stoi(num);
	
	return int_num;
	}
///////## END Verificar entero ##///////



bool Binario:: LeerProveedores() { //Leer Proveedores
  	string cod_p;
  	string nom_p;
  	string dir_p;
  	string tel_p;
  	int cont = 1;
  	int int_num;
	int int_cod;
	
	std::ifstream is("Proveedores.txt");     // open file
	
	char c;
	string l;
	while (is.get(c))          // loop getting single characters
		{
		if (cont <= 4 )
			{
				
			if (c != ';')
		    	{
		    	if (c == '\n')
		    		{
		    		tel_p = l;
		    		cont++;	
					l = "";
					
					}
				else
					{
					l = l + c;
					}
		    	
				//std::cout << l << endl;
				}
			else
				{
				switch (cont)
					{
					case 1: cod_p = l;
					break;
					
					case 2: nom_p = l;
					break;
					
					case 3: dir_p = l;
					break;
					
					case 4: tel_p = l;
					//cout << tel_p << endl;
					break;
					}
				cont++;	
				l = "";
				}
			}
		else
			{
			
			//LLAMAR A LA FUNCION PARA CREAR EL PROVEEDOR//
			if (VerificarEntero(tel_p) && VerificarEntero(cod_p))
				{
				
				int_num = RetornarEntero(tel_p);
				int_cod = RetornarEntero(cod_p);
				
		
				Proveedor * o = new Proveedor(int_cod, nom_p, dir_p, int_num);
				InsertaNodo(o);
				
				//InsertarInicio(o);
					
					
				l = c;
				
				cod_p = "";
		  		nom_p = "";
		  		dir_p = "";
		  		tel_p = "";
		  			
		  		cont = 1;
		  			
		  	
				
				}
			else
				{
				cout<<"Error en los códigos de los proveedores.";
				return false;
				}
			
  			
			}
		
		}

  	is.close();                // close file
  	tel_p = l;
  	
  	if (VerificarEntero(tel_p) && VerificarEntero(cod_p))
  		{
		  
	  	int_num = RetornarEntero(tel_p);
		int_cod = RetornarEntero(cod_p);
		
	  	Proveedor * o = new Proveedor(int_cod, nom_p, dir_p, int_num);	
		InsertaNodo(o);
		return true;
		}
	cout<<"*********Error en los codigos de los proveedores*********"<<endl;
	return false;
}

bool ArbolAVL:: LeerSupermercados() { //Leer Supermercados

	string cod_s;
	string nombre_s;
	string codLugar;
  	int cont = 1;
  	int int_cod_s;
	int int_codLugar;


	std::ifstream is("Supermercados.txt");     // open file
	
	char c;
	string l;
	while (is.get(c))          // loop getting single characters
		{
		if (cont <= 3 )
			{
				
			if (c != ';')
		    	{
		    	if (c == '\n')
		    		{
		    		nombre_s = l;
		    		cont++;	
					l = "";
					
					}
				else
					{
					l = l + c;
					}
				}
			else
				{
				switch (cont)
					{
					case 1: cod_s = l;
					break; 
					
					case 2: codLugar = l;
					break;
					
					case 3: nombre_s = l;
					break;
					}
				cont++;	
				l = "";
				}
			}
		else
			{
			if (VerificarEntero(cod_s))
				{
				int_cod_s = RetornarEntero(cod_s);
				int_codLugar = RetornarEntero(codLugar);
				
				InsertaNodoAVL(int_cod_s, int_codLugar, nombre_s);
				
				
				
				l = c;
				
				cod_s = "";
	  			codLugar = "";
				nombre_s = "";
	  			
	  			cont = 1;
	  			}
	  		else{
	  			cout<<"*********Error en las categorias*********"<<endl;
	  			return false;
			  	}
			}
		
		}

  	is.close();                // close file
  	nombre_s = l;
  	
  	if (VerificarEntero(cod_s))
	  	{
		int_cod_s = RetornarEntero(cod_s);
		int_codLugar = RetornarEntero(codLugar);
				
		InsertaNodoAVL(int_cod_s, int_codLugar, nombre_s);
		return true;
		}
	cout<<"*********Error en las categorias*********"<<endl;
	return false;
}

bool ArbolRN:: LeerCategorias(ArbolAVL AVL) { //Leer Categorías

	string cod_c;
	string des_c;
	string cod_sup;
  	int cont = 1;
  	int int_cod;
  	int int_cod_sup;

	std::ifstream is("Categorias.txt");     // open file
	
	char c;
	string l;
	while (is.get(c))          // loop getting single characters
		{
		if (cont <= 3 )
			{
				
			if (c != ';')
		    	{
		    	if (c == '\n')
		    		{
		    		des_c = l;
		    		cont++;	
					l = "";
					
					}
				else
					{
					l = l + c;
					}
				}
			else
				{
				switch (cont)
					{
					case 1:	cod_sup = l;
					break; 
					
					case 2: cod_c = l;
					break;
					
					case 3: des_c = l;
					break;
					}
				cont++;	
				l = "";
				}
			}
		else
			{
			if (VerificarEntero(cod_c))
				{
				int_cod = RetornarEntero(cod_c);
				int_cod_sup = RetornarEntero(cod_sup);
				
				ArbolRN arbolTemp = AVL.BuscarSupermercado(AVL.raiz, int_cod_sup);

				arbolTemp.insertarValorNodoRN(int_cod, des_c);
	
				
				insertarValorNodoRN(int_cod, des_c);	
			//	Categoria * o = new Categoria(int_cod, des_c);
				
			//	InsertarInicio(o);
				
				
				l = c;
				
				cod_c = "";
	  			des_c = "";
	
	  			
	  			cont = 1;
	  			}
	  		else{
	  			cout<<"*********Error en las categorias*********"<<endl;
	  			return false;
			  	}
			}
		
		}

  	is.close();                // close file
  	des_c = l;
  	
  	if (VerificarEntero(cod_c))
	  	{
		int_cod = RetornarEntero(cod_c);
		insertarValorNodoRN(int_cod, des_c);
		//Categoria * o = new Categoria(int_cod, des_c);	
		//InsertarInicio(o);
		return true;
		}
	cout<<"*********Error en las categorias*********"<<endl;
	return false;
}


bool listaDC:: LeerProductos() { //Leer Productos
	
	string CodProducto;
	string CodCategoria;
	string Nombre;
	string PrecioUnit;
	string CantidadStock;
	
	int int_cod;
	int int_cat;
	float int_precio;
	int int_stock;

  	int cont = 1;

	std::ifstream is("Productos.txt");     // open file
	
	char c;
	string l;
	while (is.get(c))          // loop getting single characters
		{
		if (cont <= 5 )
			{
			if (c != ';')
		    	{
		    	if (c == '\n')
		    		{
		    		CantidadStock = l;
		    		cont++;	
					l = "";
					}
				else
					{
					l = l + c;
					}
				}
			else
				{
				switch (cont)
					{
					case 1: CodProducto = l;
					break;
					case 2: CodCategoria = l;
					break;
					case 3: Nombre = l;
					break;
					case 4: PrecioUnit = l;
					break;
					case 5: CantidadStock = l;
					break;
					}
				cont++;	
				l = "";
				}
			}
		else
			{
			if (VerificarEntero(CodProducto) && VerificarEntero(CodCategoria) && VerificarEntero(PrecioUnit) && VerificarEntero(CantidadStock))
				{
				int_cod = RetornarEntero(CodProducto);
				int_cat = RetornarEntero(CodCategoria);
				int_precio = RetornarEntero(PrecioUnit);
				int_stock = RetornarEntero(CantidadStock);
						
				Producto * o = new Producto(int_cod, int_cat, Nombre, int_precio, int_stock); 
				
				InsertarInicio(o);
		
				
				l = c;
	
				CodProducto = "";
	  			CodCategoria = "";
	  			Nombre = "";
	  			PrecioUnit = "";
	  			CantidadStock = "";
	
	  			
	  			cont = 1;
	  			}
	  		else{
	  			cout<<"*********Error en los productos*********"<<endl;
				return false;
			  }
			}
		
		}

  	is.close();                // close file
  	CantidadStock = l;
  	
  	if (VerificarEntero(CodProducto) && VerificarEntero(CodCategoria) && VerificarEntero(PrecioUnit) && VerificarEntero(CantidadStock)){
  		int_cod = RetornarEntero(CodProducto);
		int_cat = RetornarEntero(CodCategoria);
		int_precio = RetornarEntero(PrecioUnit);
		int_stock = RetornarEntero(CantidadStock);
		Producto * o = new Producto(int_cod, int_cat, Nombre, int_precio, int_stock); 
		InsertarInicio(o);
		return true;
	  	}
	cout<<"*********Error en los productos*********"<<endl;
	return false;
}


bool ArbolB:: LeerClientes() { //Leer Clientes

	string CedulaCliente;
	string NombreCliente;
	string DireccionCliente;
	string TelefonoCliente;
	
	int int_ced;
	int int_tel;


  	int cont = 1;

	std::ifstream is("Clientes.txt");     // open file
	
	char c;
	string l;
	while (is.get(c))          // loop getting single characters
		{
		if (cont <= 4 )
			{
			if (c != ';')
		    	{
		    	if (c == '\n')
		    		{
		    		TelefonoCliente = l;
		    		cont++;	
					l = "";
					}
				else
					{
					l = l + c;
					}
				}
			else
				{
				switch (cont)
					{
					case 1: CedulaCliente = l;
					break;
					case 2: NombreCliente = l;
					break;
					case 3: DireccionCliente = l;
					break;
					case 4: TelefonoCliente = l;
					break;
					}
				cont++;	
				l = "";
				}
			}
		else
			{
			if (VerificarEntero(CedulaCliente) && VerificarEntero(TelefonoCliente))
				{
				int_ced = RetornarEntero(CedulaCliente);
			//	int_tel = RetornarEntero(TelefonoCliente);
			
				//Cliente * o = new Cliente(int_ced, NombreCliente, DireccionCliente, int_tel); 
				///ArbolB B;
				IniciarInsercionB(int_ced,int_ced,NombreCliente,DireccionCliente, TelefonoCliente);
				//InsertarInicio(o);
				
				
				l = c;
	
				CedulaCliente = "";
	  			NombreCliente = "";
	  			DireccionCliente = "";
	  			TelefonoCliente = "";
		
	  			cont = 1;
  				}
  			else{
  				cout<<"*********Error en el archivo de clientes*********"<<endl;
				return false;
			  }
			}
		}

  	is.close();                // close file
  	TelefonoCliente = l;
  	if (VerificarEntero(CedulaCliente) && VerificarEntero(TelefonoCliente))
		{
		int_ced = RetornarEntero(CedulaCliente);
		int_tel = RetornarEntero(TelefonoCliente);
		//Cliente * o = new Cliente(int_ced, NombreCliente, DireccionCliente, int_tel); 
		IniciarInsercionB(int_ced,int_ced,NombreCliente,DireccionCliente, TelefonoCliente);
		//InsertarInicio(o);
		return true;
		}
	cout<<"*********Error en el archivo de clientes*********"<<endl;
	return false;
}


bool listaDC:: VerificarCodUnico(int cod)
	{
	int cont = 1;
	pnodo aux = primero;
	int temp;
	
	if ((aux->valorP)->getCodigo() == cod && cont == 2)
		{
		cout<<"**********************************************ATENCION***************************************"<<endl<<"                              HABIA CODIGOS REPETIDOS"<<endl;
		return false;
		}
	else{
		if ((aux->valorP)->getCodigo() == cod)
			{
			cont++;
			}
	}
	aux = aux->siguiente;
	
	while (aux != primero)
		{
		temp = (aux->valorP)->getCodigo();
		
		if (temp == cod && cont==2)
			{
			cout<<"**********************************************ATENCION***************************************"<<endl<<"                              HABIA CODIGOS REPETIDOS"<<endl;
			return false;
			}
		else
			{
			if (temp == cod){
				cont++;
			}
			
			}
		aux=aux->siguiente;
		}
	return true;
	}


bool listaDC::VerificarProveedor(int cod) //Verifica que el proveedor exista
	{
	pnodo aux = primero;
	int temp;
	
	if ((aux->valorP)->getCodigo() == cod)
		{
			(aux->valorP)->sumarCont();
		return true;
		}
	aux = aux->siguiente;
	
	while (aux != primero)
		{
		temp = (aux->valorP)->getCodigo();
		
		if (temp == cod)
			{
			cout<<"************************ Codigo aceptado ************************"<<endl;
			(aux->valorP)->sumarCont();
			return true;
			}
		else
			{
			aux=aux->siguiente;
			}
		}
	cout<<"************************ ¡Proveedor invalido! ************************\n"<<endl;
	return false;
	}
	
bool listaDC::VerificarProducto(string prod) //Verifica que el producto exista
	{
	pnodo aux = primero;
	string temp;
	
	if ((aux->valorPp)->getNombre() == prod)
		{
		return true;
		}
	aux = aux->siguiente;
	
	while (aux != primero)
		{
		temp = (aux->valorPp)->getNombre();
		
		if (temp == prod)
			{
			printf ("%.90s\n", "\n||||||||||||||||| Producto aceptado ||||||||||||||||||||||||||||||||");
			return true;
			}
		else
			{
			aux=aux->siguiente;
			}
		}
	cout<<"************************ ¡Producto invalido! ************************\n"<<endl;
	return false;
	}
	
bool listaDC::VerificarCliente(string nom)
	{
	pnodo aux = primero;
	string temp;
	
	if ((aux->valorCl)->getNombre() == nom)
		{
		(aux->valorCl)->sumarCont();
		return true;
		}
	aux = aux->siguiente;
	
	while (aux != primero)
		{
		temp = (aux->valorCl)->getNombre();
		
		if (temp == nom)
			{
			cout<<"|||||Se aplica un descuento del 5% por ser cliente frecuente|||||"<<endl;
			(aux->valorCl)->sumarCont();
			return true;
			}
		else
			{
			aux=aux->siguiente;
			}
		}
	cout<<"Cliente nuevo\n"<<endl;
	return false;
	}

bool listaDC::VerificarCategoria(string cat)
	{
	pnodo aux = primero;
	string temp;
	
	if ((aux->valorC)->getDescripcion() == cat)
		{
		(aux->valorC)->sumarCont();
		return true;
		}
	aux = aux->siguiente;
	
	while (aux != primero)
		{
		temp = (aux->valorC)->getDescripcion();
		
		if (temp == cat)
			{                   
			printf ("%.90s\n", "\n||||||||||||||||||||||||||||||||||||||| Categoria valida |||||||||||||||||||||||||||||||||||||||||||||");
			(aux->valorC)->sumarCont();
			return true;
			}
		else
			{
			aux=aux->siguiente;
			}
		}
	printf ("%.90s\n", "\n************************************** Categoria incorrecta ***********************************************");
	//cout<<"Categoria invalida\n"<<endl;
	return false;
	}


string listaDC::MostrarCategoria(int cod) //Muestra la categoria segun el codigo de la misma
	{
	pnodo aux = primero;
	string _categoria;
	
	if ((aux->valorC)->getCodigo() == cod)
		{
		_categoria = (aux->valorC)->getDescripcion();
		return _categoria;
		//return (aux->valorC)->getDescripcion();
		}
	aux = aux->siguiente;
	
	while (aux != primero)
		{
		if ((aux->valorC)->getCodigo() == cod)
			{
			return (aux->valorC)->getDescripcion();
			}
		aux = aux->siguiente;
		}

	return "No está";
	}


int listaDC::MostrarPrecio(string producto) //Muestra el precio de un producto
	{
	pnodo aux = primero;
	
	if ((aux->valorPp)->getNombre() == producto)
		{
			
		//cout<<(aux->valorPp)->getPrecioUnit();
		return (aux->valorPp)->getPrecioUnit();

		}
	aux = aux->siguiente;
	
	while (aux != primero)
		{
		if ((aux->valorPp)->getNombre() == producto)
			{
			return (aux->valorPp)->getPrecioUnit();
			}
		aux = aux->siguiente;
		}

	return 0;
	}
	
void listaDC::ReducirStock(string producto, int num) //Disminuye el stock de un producto
	{
	pnodo aux = primero;
	
	if ((aux->valorPp)->getNombre() == producto)
		{
		(aux->valorPp)->sumarCont(num);
		(aux->valorPp)->reducirStock(num);
		}
		
	else{
		aux = aux->siguiente;
		
		while (aux != primero)
			{
			if ((aux->valorPp)->getNombre() == producto)
				{
				(aux->valorPp)->sumarCont(num);
				(aux->valorPp)->reducirStock(num);
				}
			aux = aux->siguiente;
			}
		}
	}
	
	

int listaDC::MostrarStock(string producto) //Muestra el stock de un producto
	{
	pnodo aux = primero;
	
	if ((aux->valorPp)->getNombre() == producto)
		{
			
		cout<<(aux->valorPp)->getCantidadStock();
		return (aux->valorPp)->getCantidadStock();

		}
	aux = aux->siguiente;
	
	while (aux != primero)
		{
		if ((aux->valorPp)->getNombre() == producto)
			{
				cout<<(aux->valorPp)->getCantidadStock();
			return (aux->valorPp)->getCantidadStock();
			}
		aux = aux->siguiente;
		}

	return 0;
	}



int listaDC::MostrarCodigoCategoria(string cat) //Retorna la el codigo de una categoria
	{
	pnodo aux = primero;

	
	if ((aux->valorC)->getDescripcion() == cat)
		{
		//cout<<(aux->valorC)->getCodigo();
		return (aux->valorC)->getCodigo();


		}
	aux = aux->siguiente;
	
	while (aux != primero)
		{
		if ((aux->valorC)->getDescripcion() == cat)
			{
			return (aux->valorC)->getCodigo();
			}
		aux = aux->siguiente;
		}

	return 0;
	}

bool listaDC::MostrarProductos(string cat, listaDC&  Cats) //Muestra todos los productos de una categoria en especifico
	{
	pnodo aux = primero;
	int cont = 1;
	int cont2 = 0;
	string temp = Cats.MostrarCategoria((aux->valorPp)->getCodCategoria());


	if (temp == cat)
		{
		cout<<cont<<". ";
		cout<<(aux->valorPp)->getNombre()<<endl;
		cont++;
		}
	aux = aux->siguiente;
	while (aux != primero)
		{
			
		temp = Cats.MostrarCategoria((aux->valorPp)->getCodCategoria());
		if (temp == cat)
			{
			cout<<cont<<". "<<(aux->valorPp)->getNombre()<<endl;
			cont++;
			cont2++;
			}
		aux = aux->siguiente;		
		}
	if (cont2 == 0)
		{
		printf ("%.90s\n", "\n******************* No hay productos disponibles en esta categeoria *************************************************");
		return false;
		}
	return true;	
	}

void listaDC::MostrarProveedores() //Muestra en pantalla los proveedores
	{
	pnodo aux = primero;
	int cont = 1;
	cout<<"------------------------Proveedores disponibles------------------------"<<endl;
	cout<<"   Codigo    "<<"Nombre"<<endl;
	cout<<cont<<". "<<(aux->valorP)->getCodigo()<<"  "<<(aux->valorP)->getNombre()<<endl;
	aux = aux->siguiente;
	cont++;
	 
	while (aux != primero)
		{
		cout<<cont<<". "<<(aux->valorP)->getCodigo()<<"  "<<(aux->valorP)->getNombre()<<endl;
		aux = aux->siguiente;
		cont++;
		}
	}

void listaDC::MostrarClientes() //Muestra en pantalla los clientes regulares
	{
	pnodo aux = primero;
	int cont = 1;
	
	cout<<cont<<". "<<(aux->valorCl)->getNombre()<<endl;
	aux = aux->siguiente;
	cont++;
	 
	while (aux != primero)
		{
		cout<<cont<<". "<<(aux->valorCl)->getNombre()<<endl;
		aux = aux->siguiente;
		cont++;
		}
	}

void listaDC::MostrarTodasCategorias() //Muestra en pantalla la categoria de los productos
	{
	pnodo aux = primero;
	int cont = 1;
	//cout<<"------------------------Categorias disponibles------------------------"<<endl;
	
	cout<<cont<<". "<<(aux->valorC)->getDescripcion()<<endl;
	aux = aux->siguiente;
	cont++;
	 
	while (aux != primero)
		{
		cout<<cont<<". "<<(aux->valorC)->getDescripcion()<<endl;
		aux = aux->siguiente;
		cont++;
		}
	}

bool listaDC::RevisarCod() //RETORNA TRUE SI HAY ALGUN CODIGO REPETIDO
	{
	pnodo aux = primero;
	int temp;
	
	temp = (aux->valorP)->getCodigo();

	if (!VerificarCodUnico(4)){
		return true;
	}
	aux = aux->siguiente;
	
	while (aux != primero)
		{
		temp = (aux->valorP)->getCodigo();
		
		if (!VerificarCodUnico(temp))
			{
			cout<<"******************************************************************************************"<<endl;
			return true;
			}
		else
			{
			aux=aux->siguiente;
			}
		}
	return false;
	}

bool listaDC:: VerificarCodUnicoCategoria(int cod) //REVISA QUE LOS CODIGOS DE LAS CATEGORIAS SEAN UNICOS
	{
	int cont = 1;
	pnodo aux = primero;
	int temp;
	
	if ((aux->valorC)->getCodigo() == cod && cont == 2)
		{
		cout<<"******************************************ERROR*********************************************"<<endl<<"                        NO SE ACEPTAN CODIGOS REPETIDOS EN LAS CATEGORIAS"<<endl;
		return false;
		}
	else{
		if ((aux->valorC)->getCodigo() == cod)
			{
			cont++;
			}
	}
	aux = aux->siguiente;
	
	while (aux != primero)
		{
		temp = (aux->valorC)->getCodigo();
		
		if (temp == cod && cont==2)
			{
			cout<<"****************************************ERROR*********************************************"<<endl<<"                    NO SE ACEPTAN CODIGOS REPETIDOS EN LAS CATEGORIAS"<<endl;
			return false;
			}
		else
			{
			if (temp == cod){
				cont++;
			}
			
			}
		aux=aux->siguiente;
		}
	return true;
	}
	
bool listaDC::RevisarCodCategoria() //RETORNA TRUE SI HAY ALGUN CODIGO REPETIDO EN LAS CATEGORIAS
	{
	pnodo aux = primero;
	int temp;
	
	temp = (aux->valorC)->getCodigo();

	if (!VerificarCodUnicoCategoria(4)){
		return true;
	}
	aux = aux->siguiente;
	
	while (aux != primero)
		{
		temp = (aux->valorC)->getCodigo();
		
		if (!VerificarCodUnicoCategoria(temp))
			{
			cout<<"******************************************************************************************"<<endl;
			return true;
			}
		else
			{
			aux=aux->siguiente;
			}
		}
	return false;
	}


string listaDC::ProveedorMayoresVentas(){ //BUSCA EL PROVEEDOR CON MAS VENTAS
	pnodo aux = primero;
	pnodo temp = aux;
	do {
  		if ((temp->valorP)->getCont() <(aux->valorP)->getCont()) 
			{
			temp = aux;
			aux = aux->siguiente;
			}
		else{
			aux= aux->siguiente;
			
		}
		} while (aux != primero);
	cout<<(temp->valorP)->getNombre()<<endl;;
	return (temp->valorP)->getNombre();
	}
	
string listaDC::CategoriaMayoresVentas(){ //BUSCA LA CATEGORIA CON MAS VENTAS
	pnodo aux = primero;
	pnodo temp = aux;
	do {
  		if ((temp->valorC)->getCont() <(aux->valorC)->getCont()) 
			{
			temp = aux;
			aux = aux->siguiente;
			}
		else{
			aux= aux->siguiente;
			
		}
		} while (aux != primero);
	cout<<(temp->valorC)->getDescripcion()<<endl;;
	return (temp->valorC)->getDescripcion();
	}

string listaDC::ProductoMayoresVentas(){ //BUSCA EL PRODUCTO CON MAS VENTAS
	pnodo aux = primero;
	pnodo temp = aux;
	do {
  		if ((temp->valorPp)->getCont() <(aux->valorPp)->getCont()) 
			{
			temp = aux;
			aux = aux->siguiente;
			}
		else{
			aux= aux->siguiente;
			
		}
		} while (aux != primero);
	cout<<(temp->valorPp)->getNombre()<<endl;;
	return (temp->valorPp)->getNombre();
	}
	
string listaDC::ClienteMayoresVentas(){ //BUSCA EL PROVEEDOR CON MAS VENTAS
	pnodo aux = primero;
	pnodo temp = aux;
	do {
  		if ((temp->valorCl)->getCont() <(aux->valorCl)->getCont()) 
			{
			temp = aux;
			aux = aux->siguiente;
			}
		else{
			aux= aux->siguiente;
			
		}
		} while (aux != primero);
	cout<<(temp->valorCl)->getNombre()<<endl;;
	return (temp->valorCl)->getNombre();
	}

		

void listaDC::ImprimirFactura(){
	pnodo aux = primero;
	
	cout<<"Imprimiendo factura..."<<endl;
		
	ofstream myfile;
	myfile.open ("Factura.txt");
	myfile << "---------------------------------------------------------------\n";
	myfile << "---------------------------------------------------------------\n";
	myfile << "Codigo del proveedor: " <<(aux->valorF)->getCodigoP() <<endl;
	myfile << "Nombre del proveedor: " <<endl;
	myfile << "---------------------------------------------------------------\n";
	myfile << "---------------------------------------------------------------\n";
	myfile << "Cliente: " << (aux->valorF)->getNombreCliente() << endl;
	myfile << "---------------------------------------------------------------\n";
	myfile << "Codigo                      Producto                   Cantidad"<<endl;
	myfile << (aux->valorF)->getCodCategoria() << "                             "<< (aux->valorF)->getNombreProducto() 
															<< "                          " << (aux->valorF)->getCantidadProducto()<< endl;
	myfile << "---------------------------------------------------------------\n";
	myfile << "Precio por unidad: " << (aux->valorF)->getPrecioUnitario() << endl;
		/*
		if (Desc){
			myfile << "Precio total: " << precio*int_cant_input - (precio*int_cant_input*0.05)<<endl;
			
		}
		else{*/
	myfile << "Precio total: " << (aux->valorF)->getPrecioTotal() <<endl;
		//}
		
		
		
	//	myfile.close();
		
		cout<<"Factura lista"<<endl;
	
	aux = aux->siguiente;
	
	while (aux != primero){
	//	ofstream myfile;
	//	myfile.open ("Factura.txt");
		myfile << "\n\n---------------------------------------------------------------\n";
		myfile << "---------------------------------------------------------------\n";
		myfile << "Codigo del proveedor: " <<(aux->valorF)->getCodigoP() <<endl;
		myfile << "Nombre del proveedor: " <<endl;
		myfile << "---------------------------------------------------------------\n";
		myfile << "---------------------------------------------------------------\n";
		myfile << "Cliente: " << (aux->valorF)->getNombreCliente() << endl;
		myfile << "---------------------------------------------------------------\n";
		myfile << "Codigo                      Producto                   Cantidad"<<endl;
		myfile << (aux->valorF)->getCodCategoria() << "                             "<< (aux->valorF)->getNombreProducto() 
															<< "                                 " << (aux->valorF)->getCantidadProducto()<< endl;
		myfile << "---------------------------------------------------------------\n";
		myfile << "Precio por unidad: " << (aux->valorF)->getPrecioUnitario() << endl;
		/*
		if (Desc){
			myfile << "Precio total: " << precio*int_cant_input - (precio*int_cant_input*0.05)<<endl;
			
		}
		else{*/
			myfile << "Precio total: " << (aux->valorF)->getPrecioTotal() <<endl;
		//	myfile.close();
		aux = aux->siguiente;
		}
		
		
		//ofstream myfile;
	myfile << "---------------------------------------------------------------\n";
	myfile << "---------------------------------------------------------------\n";
	myfile << "------------------- Gracias por preferirnos :) ----------------\n";
	myfile.close();	
		}


int main()
	{

	printf ("%.90s\n", "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
			printf ("%.90s\n","|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
			printf ("%.90s\n","||||||||||||||||||||||||||||||||Bienvenido al sistema|||||||||||||||||||||||||||||||||||||||");
			printf ("%.90s\n","|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
	
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
	
	listaDC Items;
	Binario ListaProveedores;

	listaDC ListaProductos;
	listaDC ListaClientes;

	listaDC ListaCategorias;
	
		
	ListaProveedores.LeerProveedores();
	NodoBinario *r = ListaProveedores.RetornarRaiz();
	ListaProveedores.InordenR(r);
	ListaProveedores.PostordenR(r);
	ListaProveedores.PreordenR(r);
	
	
	
	
	ArbolB B;
	
	
//	B.LeerClientes();


	B.IniciarInsercionB(89,89,"Roberto","Heredia", "86582179");
	
	B.IniciarInsercionB(100,100,"Juan","Heredia", "86582179");
	B.IniciarInsercionB(101,101,"Daniel","Paraiso", "86582179");
	B.IniciarInsercionB(105,105,"Sergio","Alajuela", "86582232");
	B.IniciarInsercionB(11,11,"Amy","Tres Rios", "86582232");
	
	
	//cout<<"AAAAASFFFFFFFFFFFFFFFFFFFFFF: " <<B.raizB->Claves->ObtenerValor()<<endl;
	
	
//	B.Eliminar(89, B.raizB);
	
	B.RecorridoInordenB(B.raizB);
	
//	cout<<"BARRA SEPARADORA"<<endl;
	
	
	ArbolAVL AVL;
	AVL.LeerSupermercados();
	
	ArbolRN RN;
	RN.LeerCategorias(AVL);
	/*
	RN.insertarValorNodoRN(45, "Verduras");
	RN.insertarValorNodoRN(44, "Joyas");
	RN.insertarValorNodoRN(38, "Arroz");
	nodo * cat = RN.raiz;
	*/
	
	
	RN.InordenRN(RN.raiz);
	
	
	
	
	
	
	AVL.InsertaNodoAVL(87, 87, "MaxiPali");
/*	AVL.InsertaNodoAVL(85, 89, "Palí");
	AVL.InsertaNodoAVL(89, 89, "HiperMáx");
	AVL.InsertaNodoAVL(98, 89, "Fresnos");
	AVL.InsertaNodoAVL(77, 89, "MasXMenos");
	AVL.InsertaNodoAVL(72, 89, "AA");
	AVL.InsertaNodoAVL(12, 89, "Menos");
	AVL.InsertaNodoAVL(37, 89, "AutoMercado");
	*/
	
//	
	
	AVL.PreordenI(AVL.raiz);
//	ArbolRN * hola = new ArbolRN();
	
	


	
	
//	aa.insertarValorNodoRN(45, "Verduras");
/*	
ArbolRN * hola2 = new ArbolRN();	
ArbolRN * jeje = AVL.BuscarSupermercado(AVL.raiz, hola2, 87);

jeje->InordenRN(hola2->raiz);

*/	
	
	/*
	if (ListaProveedores.LeerProveedores() && ListaClientes.LeerClientes() && ListaCategorias.LeerCategorias() && ListaProductos.LeerProductos())
		{
			
		if (ListaProveedores.RevisarCod())
			{
			cout<<endl<<"************************ERROR************************"<<endl<<"No se aceptan codigos repetidos en los proveedores"<<endl;
			cout<<"Revise el archivo de texto con los proveedores"<<endl<<"**Ningun codigo puede estar repetido**"<<endl;
			
			return 0;
			}
		
		if (ListaCategorias.RevisarCodCategoria()){
			cout<<"Error"<<endl;
			return 0;
		}
		while (true)
			{
			ListaProveedores.MostrarProveedores();
			
			cout<<"Ingrese el codigo del proveedor: "; 
			std::getline(std::cin,cod_input);
			try{
				cod_input_int = std::stoi(cod_input);
			}
			catch (std::exception& e) {
    			std::cerr << "******************ERROR******************\n";
    			//return 0;
 				}
			
	
	
			if (ListaProveedores.VerificarProveedor(cod_input_int))
				{
				cout<<"------------------------ Clientes regulares: ------------------------"<<endl;
				
				ListaClientes.MostrarClientes();
				
				cout<<"\nIngrese el nombre completo del cliente: ";
				std::getline(std::cin,nom_input);
				if (ListaClientes.VerificarCliente(nom_input)){
					Desc = true;
				}
				
				cout<<"------------------------ Categorias de productos disponibles: ------------------------"<<endl;
				ListaCategorias.MostrarTodasCategorias();
				
				while (true){
				
				cout<<"\nIngrese el nombre de la categoria: ";
				std::getline(std::cin,cat_input);
				
				if (ListaCategorias.VerificarCategoria(cat_input)){
					cout<<"------------------------  Productos disponibles en esta categoria: ------------------------"<<endl;//CORRER ESTO PARA ARRIBA
					if (ListaProductos.MostrarProductos(cat_input, ListaCategorias))
						{
						
						while (true){
									cout<<"\nIngrese el nombre del producto: ";
									std::getline(std::cin,pro_input);
									
									if (ListaProductos.VerificarProducto(pro_input))
										{
										break;
										}
									}
						
						
						while (true){
									cout<<"\nIngrese el cantidad que desea comprar: ";
									std::getline(std::cin,cant_input);
									
									try{
										int_cant_input = std::stoi(cant_input);
										}
									catch (std::exception& e) {
					    				std::cerr << "******************ERROR******************\n";
					    				//return 0;
					 					}
					 				
									 
					 				if (ListaProductos.MostrarStock(pro_input)<int_cant_input){
										cout<<endl<<"******************No hay tantas unidades en stock******************"<<endl;
										
										}
									else{
										break;
										}
									}
								break;
						}
					}
				//break;
				}
				
				
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
						
				}
			
				
				
			cin.sync();
			cod_input="";
			}
		
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
		
		
		Items.ImprimirFactura();
		}
	else{
		return 0;
	}
*/
	}
