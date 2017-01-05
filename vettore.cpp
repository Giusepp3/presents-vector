#include "vettore.h"

using namespace std;

namespace Regali{
	
	//inizializzo un vettore vuoto
	vettore::vettore(){
		V=0;
		nelem=0;
	}
	
	//inizializzo un vettore di n elementi
	vettore::vettore(int n){
		V=new T[n];
		nelem=n;
	}
	
	vettore::~vettore(){
		delete [] V;
	}
	
	bool vettore::push(const T & e){
		bool ck=false;
		int N=0;
		//conto gli elementi del vettore
		for(int i=0;i<nelem;i++){
			if(V[i]!=0){
				N++;
			}
		}
		if (V[nelem-1]>=N){
			for(int i=nelem-1;i=1;i--){
				V[i]=V[i-1];
			}
			V[0]=e;
			ck=true;
		}
		else{
	
		T* R;
		R = new T[this->getn()+40]; //non conviene fare la resize per un solo elemento
		for(int i=1;i<nelem+1;i++){
			R[i]=V[i];
		} 
		R[0] = e;
		nelem=nelem+40;  //aggiorno il valore di nelem dopo la resize
		
		delete [] V;
		V=R;
		ck=true;
		}
	
	return ck;
	}
	
	T vettore::operator[](const int index){
		return V[index];
	}


	

}
