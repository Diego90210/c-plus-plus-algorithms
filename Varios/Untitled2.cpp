/*Escriba un programa que lea 3 números y determine cual de ellos es mayor.*/
#include <iostream>
using namespace std;

int main(){
	int n1, n2, n3;
	cout<<"Digita el primer numero: "; cin>>n1;
	cout<<"Digita el segundo numero: ";cin>>n2;
	cout<<"Digita el tercer numero: "; cin>>n3;
	
	if (n1 == n2 && n2 == n3){ //Si los 3 son iguales.
		cout<<"Los 3 numeros son iguales.";
	}
	else if (n1 > n2 && n1 > n3){ //El primero es mayor que los otros 2.
		cout<<"El numero mayor es: "<<endl<<n1;
	}
	else if (n2 > n1 && n2 > n3){ //El segundo es mayor que los otros 2.
		cout<<"El numero mayor es: "<<endl<<n2;
	}
	else if (n3 > n1 && n3 > n2){ //El tercero es mayor que los otros 2.
		cout<<"El numero mayor es: "<<endl<<n3;
	}
	    
	    else if (n1 > n2 && n2 == n3){
	    	cout<<"El numero mayor es: "<<endl<<n1;
		}
		else if (n1 < n2 && n2 == n3){
			cout<<"El numero mayor es: "<<endl<<n2;
		}
		else if (n2 > n1 && n3 == n1){
			cout<<"El numero mayor es: "<<endl<<n2;
		}
	    else if (n2 < n1 && n3 == n1){
	    	cout<<"El numero mayor es: "<<endl<<n1;
		}
		else if (n3 > n1 && n1 == n2){
			cout<<"El numero mayor es: "<<endl<<n3;
		}
		else if (n3 < n1 && n1 == n2){
			cout<<"El numero mayor es: "<<endl<<n1;
		}
	    
		else{
		}
	
	return 0;
}
