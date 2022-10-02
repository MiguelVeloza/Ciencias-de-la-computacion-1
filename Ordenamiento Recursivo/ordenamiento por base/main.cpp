#include <iostream>
#include <cstdlib>
#include <ctime>
#include<windows.h>
#include<math.h>
#include <vector>


using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

const int TAM = 10;
const int DIG = 5;

int arreglo[10];
int **cubeta;

 
void radix();
void llenarArreglo();
void imprimirArreglo();
int main(int argc, char** argv) {
	llenarArreglo();
	radix();
	imprimirArreglo();
	
	return 0;
}

void imprimirArreglo(){
	for ( int i = 0; i < TAM; ++i ){
     cout <<"arreglo[" << i << "] = "<<arreglo[i];
       cout << "\n";
	}
}
void llenarArreglo(int arreglo[]){
	for (int i = 0; i < TAM; ++i )
      arreglo[ i ] = rand() % 50000;
}

void radix(int div){
	
	int temp, aux;
	cubeta = new *int(10);
	for(int j=0; j < TAM; j++){
		temp = ((int)(arreglo[j]/div))%10;
		aux = cubeta[temp];
		cubeta[j]=new int(10);
		int k =0;
		while (cubeta[temp][k]==0)
			k++;
		cubeta[temp][k]=arreglo[j];
				
	}
	
	for(int i=0; i<TAM; i++) {
		for(int j = 0; j<10;j++)
	}
	
	if(((int)arreglo[0]/(div*10))>0){
			radix(div*10);
		}
				
	/*int temp, m=0;
	for(int i=0;i<DIG;i++) {
		for(int j=0; j < TAM; j++){
			temp = ((int)(arreglo[j]/pow(10,i)))%10;
			if(cubeta[temp]=!0){
				cubeta[temp] = new int[]
			}
			
		}
		for(int k = 0; k<5; k++){
			for (int l=0; l<10; l++) {
				if(cubeta[k][l]!=0)
					arreglo[m] = cubeta[k][l];
				m++;
			}
			cubeta[k];
		}
		m=0;
	}*/
}

