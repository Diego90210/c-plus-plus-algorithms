/*
Escribe un programa que defina un vector de números y 
muestre en la salida estándar el vector en orden inverso del último al primer elemento.
*/
#include <iostream>
using namespace std;
int main(){
	int numeros[]={1,2,3,4,5};
	
	for(int i=4; i>=0; i--)
	{
		cout<<i<<" -> "<<numeros[i]<<endl;
	}
	
	
	
	
	
	return 0;
}