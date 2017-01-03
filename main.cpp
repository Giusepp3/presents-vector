//Giuseppe Ferrara
#include <iostream>
#include <cstring>
#include <fstream>
#include "present.h"

using namespace std;
using namespace Regali;

int main() {
	
	present p,p1;
	present p2("Mamma",30.5, "Quadrato");
//	p1.set_for("rettangolo");
//	p1.set_des("Papi");
//	p1.set_pes(33.0);
	cin >>p1;
	p=p1;
	present p3=p2;
	
	present p4;
	cin >> p4;
	
	cout << p << p1 << p2 << p3 << p4 << endl;
	
	

	return 0;
}
