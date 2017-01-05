#ifndef VETTORE_H
#define VETTORE_H
#include <iostream>
#include <fstream>
#include <cstring>
#include "exeption.h"
#include "present.h"

using namespace std;

namespace Regali{
	
	typedef present T;
	
	
	class vettore{
		private:
			T* V;
			int nelem; 
			bool push(const T &);
			bool insert(const T &);
			bool pop(T &);
			bool del(T &);
			bool top(T &)const;
			void print(ostream & os);
			void printf(ofstream & f);
			void read(istream & in);
			void readf(ifstream & inf);
			
		public:
			vettore();
			vettore(int);
			~vettore();
			int getn(){return nelem;}
			T operator[] (const int) const;
			T Access(const int)const throw(error);
		
	};
	
}




#endif //VETTORE_H
