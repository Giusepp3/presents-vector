#ifndef PRESENT_H
#define PRESENT_H
#include <iostream>
#include <cstring>

using namespace std;

namespace Regali{
	
	class present{
		private:
			char* destinatario;
			float peso;
			char* forma;
			void set_des(const char *);
			void set_pes(const float);
			void set_for(const char*);
			void print(ostream & os)const;
			void read(istream & in); 
		public:
			present();
			present(const char * d, const float p, const char * f);
			present(const present &);
			present operator=(const present &);
			~present();
			char* get_des()const;
			float get_pes()const;
			char* get_for()const;
			friend ostream & operator<<(ostream & os, const present & p);
			friend istream & operator>>(istream & in, present & p);
			bool operator==(const present &)const;
			bool operator!=(const present &)const;
			
			
	};
	
	
}

#endif //PRESENT_H
