/*

Escribir un programa que lea tres numeros y determine, cual de ellos es el mayor.

*/


#include <iostream>

using namespace std;

int main(){
	
	int a, b, c;
	
	cout<<"\nDigite el primer numero: "; cin>>a; 
	cout<<"Digite el segundo numero: "; cin>>b; 
	cout<<"Digite el tercer numero: "; cin>>c;
	
	if(a==b && b==c){ //Si los tres numeros son iguales
		
		cout<<"\nLos tres numeros son iguales";	
	}
	
		else if(a>b && a>c){ //si el primer numero es el mayor
		
		cout<<"\nEl numero mayor es: " <<a;
	}
	
		else if(b>a && b>c){ //Si el segundo numero es el mayor
		
		cout<<"\nEl numero mayor es: " <<b;
	}
	
		else if(c>a && c>b){ //Si el tercer numero es el mayor
		
		cout<<"\nEl numero mayor es: " <<c;
	}
	
			else if(a>b && b==c){ //Si el valor del numero a es mayor al de b y c que son iguales
			
			cout<<"\nEl numero mayor es: " <<a;
			
			}
			
			else if(a<b && b==c){ //Si el valor del numero a es menor al de b y c que son iguales
			
			cout<<"\nEl numero mayor es: " <<b;
			}
			
			
			else if(b>a && a==c){ //Si el valor del numero b es mayor al de a y c que son iguales
			
			cout<<"\nEl numero mayor es: " <<b;
			
			}
			
			else if(b<a && a==c){ //Si el valor del numero b es menor al de a y c que son iguales
			
			cout<<"\nEl numero mayor es: " <<a;
			}
	
			else if(c>a && a==b){ //Si el valor del numero c es mayor al de a y b que son iguales
			
			cout<<"\nEl numero mayor es: " <<c;
			
			}
			
			else if(c<a && a==b){ //Si el valor del numero c es mayor al de a y b que son iguales
			
			cout<<"\nEl numero mayor es: " <<a;
			}
			
			else{
			}
	
	return 0;
}
