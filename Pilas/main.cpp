#include <iostream>
#include "pila.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	char c; Pila guardar(50);
	while(cin.get(c))
		{ 	while(c>='0' && c<='9')
				{cout.put(c); cin.get(c);}
			if (c==')') cout. put(guardar.sacar());
			if (c=='+') guardar.meter(c);
			if (c=='*') guardar.meter(c);
			if (c!='(') cout << ' ';
		}

	cout<< '\n';

	return 0;
}
