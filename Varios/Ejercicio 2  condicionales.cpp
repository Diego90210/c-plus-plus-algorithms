/*Elaborar un programa que lea un numero y calcule e imprima
su cuadrado si el numero es par y su cubo si el número es impar.*/

#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int numero, cuadrado, cubo;
	cout<<"Digite un numero: ";
	cin>>numero;
	
	if ( numero%2 == 0 ){
		cuadrado = pow(numero, 2);
		cout<<"El cuadrado del numero es: "<<cuadrado;
	}
	else{
	cubo = pow(numero, 3);
	cout<<"El cubo del numero es: "<<cubo;
		
	}
	
	
	
	

	
	
	
	
	
	
	return 0;
}
