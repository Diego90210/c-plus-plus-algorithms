/*Hacer un menú que considere las siguientes opciones:
Caso 1: Cubo de un número.
caso 2: Número par o impar.
caso 3: Salir. */

#include <iostream>
#include <math.h>
using namespace std;

int main (){
	int numero, cubo, opc;  
	cout<<"\tMENU"<<endl;
	cout<<"1) Obtener el cubo de un numero. "<<endl;
	cout<<"2) Saber si un numero es par o impar. "<<endl;
	cout<<"3) Salir."<<endl;
	cout<<"Opcion: ";
	cin>>opc;
	
	
	
	switch (opc){
		case 1: cout<<"\nDigite un numero para elevarlo al cubo: "<<endl; cin>>numero;
	        cubo = pow(numero,3);
	        cout<<"El cubo del numero es: "<<cubo;break;
	
	    case 2: cout<<"\nDigite un numero: "<<endl; cin>>numero;
	            if (numero%2 == 0){
	            	cout<<"El numero es par."<<endl; break;
				}
				else {
					cout<<"El numero es impar."<<endl; 
				}
				break; 
				
		case 3: break;
	}
	
	
	         
	        
	
	
	
	
	
	
	
	
	
	return 0;
} 
