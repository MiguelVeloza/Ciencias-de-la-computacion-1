#include <iostream>

struct nodo {
	int x, y;
	nodo *sig;
};
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	int N, i, j, sum = 0;
	nodo *cab = NULL, *Aux;
	cin>> N;
	
	sum+= sizeof(N) + sizeof(i) + sizeof(j) + sizeof(cab) + sizeof(Aux);
	for (i=0;i<N;i++)
	{
		Aux = new nodo;
		Aux-> x = i;
		Aux -> y = N-i;
		Aux->sig=cab;
		cab = Aux;
		sum+= sizeof(Aux->x) + sizeof(Aux->y) + sizeof(Aux ->sig);
	}
	
	Aux = cab;
	while(Aux != NULL){
		cout<< Aux->x << Aux ->y<<endl;
		Aux = Aux->sig;
	}
	
	for (Aux = cab -> sig; Aux != NULL; Aux=Aux->sig){
		delete cab;
		cab = Aux;
	}
	delete cab;
	cout << endl;
	cout << "El total de bytes es: " << sum;
	
	return 0;
}
