/* Escribe un programa que lea de la entrada estándar tres números.
Después debe leer un cuarto número e indicar si el número coincide con alguno de los introducidos con anterioridad */

#include <iostream>
using namespace std;

int main(){
	float n1, n2, n3, n4;
	
	cout<<"Introduce 3 numeros (con un espacio entre ellos): "<<endl;
	cin>>n1;cin>>n2;cin>>n3;
	
	cout<<"Introduce un cuarto numero: "<<endl;
	cin>>n4;
	
	if ((n4 == n1) or (n4 == n2) or (n4== n3)) {
		cout<<"El cuarto numero coindide con alguno de los 3 numeros anteriormente digitados."<<endl;
	}
	else {
		cout<<"El cuarto numero no coincide con alguno de los 3 numeros anteriormente digitados "<<endl;
		
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}

