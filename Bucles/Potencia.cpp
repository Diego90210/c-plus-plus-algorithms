/*Escriba un programa que calcule x^y, donde tanto x como y sean enteros positivos, sin utilizar pow*/

#include <iostream>
using namespace std;

int main(){
	int x,y, potencia=1;
	
	cout<<"Introduzca un valor para X: "; cin>>x;
	cout<<"Introduzca un valor para Y: "; cin>>y;
	
	for (int i = 1; i<=y; i++){
		potencia = potencia*x;
		
	}
	cout<<x<<" Elevado a "<<y<<" = "<<potencia;
	
	return 0;
}