#include <iostream>
#include <cstdlib>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct nodo {
	int x, y;
	nodo *sig;
};

int main(int argc, char** argv) {
	nodo **arr, *aux;
	int m, tam, j, i;
	cout<<"Escriba el valor de M";
	cin>>m;
	cout<<"Escriba el valor de tam";
	cin>>tam;
	arr= new nodo *[m];
	for(i=0; i<m; i++)
		arr[i] = NULL;
	for(i=0; i<m; i++){
		for(j=1; j<=tam; j++){
			aux= new nodo;
			aux->x = j;
			aux->y = m+j*i;
			aux->sig = arr[i];
			arr[i] = aux;
		}
	}	
	for(i=0; i<m; i++){
		aux=arr[i];
		cout<< "lista "<<i<<endl;
		while(aux!=NULL){
			cout<<aux->x<<" "<< aux->y <<endl;
			aux = aux->sig;	
		}
		for(aux=arr[i]->sig;aux!=NULL; aux=aux->sig){
			delete arr[i];
			arr[i] = aux;
		}
		delete arr[i];
		system("PAUSE");
		
	}
	
	return 0;
}
