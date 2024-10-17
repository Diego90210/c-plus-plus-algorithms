/*
Escribir un programa que lea un numero entero positivo y muestre un mensaje en pantalla que indique si el numero es o no perfecto.
Un número perfecto es aquel que al sumar sus divisores menores a él mismo da como resultado el mismo número.
El 6 es un número perfecto: 6 = 3+2+1.
*/
#include <iostream>
using namespace std;

int main(){
	long n, i, contador=0, suma=0;
	do{
	   cout<<"Ingrese un numero entero (positivo): "; cin>>n;	
	}
	while(n<=0);
	
	for(i=1; i<=n/2; i++){
		
		if(n%i == 0){
			suma+=i;
			} 
	}
	if (suma == n)
		cout<<n<<" ES PERFECTO\n";
	
	else cout<<n<<" NO ES PERFECTO\n";
	
	return 0;
}