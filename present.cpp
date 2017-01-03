#include "present.h"

using namespace std;

namespace Regali{
	
	present::present(){
		destinatario = new char[1];
		strcpy(destinatario,"");
		peso = 0.0;
		forma = new char[1];
		strcpy(forma,"");
	}
	
	present::present(const char* d, const float p, const char* f){
		destinatario = new char [strlen(d)+1];
		strcpy(destinatario,d);
		peso = p;
		forma = new char[strlen(f)+1];
		strcpy(forma,f);
		
	}
	
	present::present(const present & p){
		destinatario = new char[strlen(p.get_des())+1];
		strcpy(destinatario,p.get_des());
		peso = p.get_pes();
		forma = new char[strlen(p.get_for())+1];
		strcpy(forma,p.get_for());
		
	}
	
	present present::operator=(const present & p){
		if(this==&p) return *this;
		set_des(p.get_des());
		set_pes(p.get_pes());
		set_for(p.get_for());
		return *this;
	} 
	
	present::~present(){
		delete [] destinatario;
		delete [] forma;
	}
	
	char* present::get_des()const{
		return destinatario;
	}
	
	float present::get_pes()const{
		return peso;
	}
	
	char* present::get_for()const{
		return forma;
	}
	
	void present::print(ostream & os)const{
		os << destinatario << ' ' << peso << ' ' << forma << endl;
	}
	
	ostream & operator<<(ostream & os, const present & p){
		p.print(os);
		return os;
	}
	
	void present::read(istream & in){
		char buffer [400];
		in.getline(buffer,400);
		set_des(buffer);
		in >> peso;
		in.ignore();
		in.getline(buffer,400);
		set_for(buffer);
	}
	
	istream & operator>>(istream & in, present & p){
		p.read(in);
		return in;
	}
	
	void present::set_des(const char* d){
		if(destinatario) delete [] destinatario;
		destinatario = new char [strlen(d)+1];
		strcpy(destinatario,d);
		
	}
	
	void present::set_pes(const float p){
		peso = p;
	}
	
	void present::set_for(const char* f){
		if(forma) delete [] forma;
		forma = new char [strlen(f)+1];
		strcpy(forma,f);
	}
	
	
}
