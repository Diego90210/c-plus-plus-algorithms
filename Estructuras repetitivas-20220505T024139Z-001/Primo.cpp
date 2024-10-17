/*
Escribir un programa que lea un numero entero positivo y muestre un mensaje en pantalla que indique si es primo o no.
*/
#include <iostream>
using namespace std;

int main(){
	int n, i, primo=1;
	
	do{
		cout<<"INGRESE UN NUMERO ENTERO (POSITIVO): "; cin>>n;
	}
	while(n<=0);
	for (i=2; i<=n/2; i++){
		if(n%i == 0) //si se cumple este if es porque el número no es primo.
		{
			primo=0;
			break;
		}
	}
	if (primo == 1 && n!=1) //Si se cumple este if entonces el número es primo.
	cout<<n<<" ES PRIMO\n";
	
	else
	cout<<n<<" NO ES PRIMO\n";
	 
	return 0;
}