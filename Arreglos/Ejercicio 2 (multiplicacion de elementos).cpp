/*
Escribe un programa que defina un vector de números y calcule la multiplicación acumulada de sus elementos.
*/
#include <iostream>
using namespace std;
int main(){
	int numeros[]={1,2,3,4,5};
	int multi=1;
	
	for(int i=0; i<5; i++){
		multi*= numeros[i]; 
	}
	cout<<"El producto de todos los elementos es: "<<multi<<endl;
	
	
	
	
	
	return 0;
}