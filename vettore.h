#ifndef VETTORE_H
#define VETTORE_H
#include <iostream>
#include <fstream>
#include <cstring>
#include "exeption.h"
#include "present.h"
#include <string>

using namespace std;

namespace Regali{
	
	typedef present T;
	
	
	class vettore{
		private:
			T* V;
			int nelem; 
			void print(ostream & os)const;
			void read(istream & in);
			
		public:
			vettore();
			vettore(int);
			~vettore();
			int getn(){return nelem;}
			T & operator[] (const int);
			const T& operator[] (const int)const;
			T & Access(const int)throw(error);
			const T& Access(const int)const throw(error);
			friend ostream & operator<<(ostream & os, const vettore & v);
			void printf(const char* nomefile)const throw(error);
			void readf(const char* nomefile);
			friend istream & operator>>(istream & in, vettore & v);
			void elimina();
		
	};
	
}


 
#endif //VETTORE_H
