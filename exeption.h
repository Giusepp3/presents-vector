#ifndef EXEPTION_H
#define EXEPTION_H
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

class error{
	private:
		string errmsg;
		string errfunc;
	public:
		error(){errmsg="Errore Generico"; errfunc="Nessuna informazione disponibile :(";}
		error(const char* m, const char* f){errmsg=m; errfunc=f;}
};



#endif //EXEPTION_H
