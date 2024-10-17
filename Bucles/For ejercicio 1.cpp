/*Realice un programa que lea de la entrada estándar números hasta que se introduzca un cero.
En ese momento el programa debe terminar y mostrar en la salida estándar 
el número de valores mayores que cero leídos*/
#include <iostream>
using namespace std;
int main(){
	int numero, i=0;
	cout<<"---------Digita un numero---------: "; cin>>numero;
	
	while (numero!=0){
		cout<<"----------Digita un numero---------: "; cin>>numero;
		i++; 
	}
	cout<<"El numero de valores mayores que cero son: "<<i;
	
	
	
	return 0; 
}