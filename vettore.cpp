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
		
		
	T & vettore::operator[](const int index){
		return V[index];
	}
	
	const T & vettore::operator[](const int index)const{
		return V[index];
	}
	
	T& vettore::Access(const int index)throw(error){
		if(index>=nelem){
			throw error("Indice di accesso fuori dall'intervallo consentito!","Funzione Access()");
			
		}
		return V[index];
	}
	
	const T& vettore::Access(const int index)const throw(error){
		if(index>=nelem){
			throw error("Indice di accesso fuori dall'intervallo consentito!","Funzione Access()");
		}
		return V[index];
	}
	
	void vettore::print(ostream & os)const{
		for(int i=0;i<nelem;i++){
			os << V[i] << endl;
		}
	}
	
	void vettore::printf(const char* file) const throw(error){
		ofstream os;
		os.open(file);
		if(os.fail()) throw error("errore nell'apertura del file", "Funzione printf()");
		for(int i=0;i<nelem;i++){
			os << V[i] << endl;
		}
	}
	
	ostream & operator<<(ostream & os, const vettore & v){
		v.print(os);
		return os;
	}
	
	void vettore::read(istream & in){
		for(int i=0;i<nelem;i++){
			in >> V[i];
		}
	}
	
	
	istream & operator>>(istream & in, vettore & v){
		v.read(in);
		return in;
	}
	
	void vettore::readf(const char* file){
		ifstream in;
		int i=0;
		in.open(file);
		if(in.fail()) throw error("Errore in lettura da file!","Funzione readf()");
		while(!in.eof()){
			in>>V[i];
			i++;
		}
	}
	
	void vettore::elimina(){
		for(int i=0;i<nelem;i++){
			if(V[i].get_pes()>=500){
				for(int j=i;j<nelem-1;j++){
					V[j]=V[j+1];
				} 
				nelem--;	
			}
		}
	
	}
	
}



