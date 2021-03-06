#include <iostream>

using namespace std;

class NodoBinario{
	public:
		NodoBinario(int v){
		valor = v;
		Hizq = NULL;
		Hder = NULL;
		}
		
		void InsertaBinario(int num);
		
		
		
	private:
		int valor;
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
		void PreordenR(NodoBinario *R);
		void InordenR(NodoBinario *R);
		void PostordenR(NodoBinario *R);
		NodoBinario* RetornarRaiz();
		
	private:
		NodoBinario* raiz;
		
};

//#include "Pila.h"

//#include "NodoBinario.h"

//#include "Binario.h"

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
		cout<<R->valor<<"-";
		PreordenR(R->Hizq);
		PreordenR(R->Hder);
	
		}
	}

void Binario::InordenR(NodoBinario *R){
	
	if(R==NULL){
		return;
	
		}else{
			InordenR(R->Hizq);
			cout<<R->valor<< "-";
			InordenR(R->Hder);
		}
	}

void Binario::PostordenR(NodoBinario *R){
	if(R==NULL){
		return;
	
	}else{
		PostordenR(R->Hizq);
		PostordenR(R->Hder);
		cout<<R->valor<< "-";
		}
	}
NodoBinario* Binario::RetornarRaiz(){
	cout<<raiz->valor<<endl;
	return raiz;
}
int main(){
	Binario ABB;
	 
	ABB.InsertaNodo(10);
	ABB.InsertaNodo(50);
	ABB.InsertaNodo(12);
	ABB.RetornarRaiz();
	ABB.PreordenR(ABB.RetornarRaiz());
	return 0;
}
