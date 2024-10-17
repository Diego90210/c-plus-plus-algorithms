#include <iostream>
using namespace std;
//Suma de los N primeros
int main(){
	int numero, suma=0;
	
	cout<<"Digite cuantos numeros van a sumarse: "; cin>>numero;
	
	for (int i=1; i<=numero; i++){
		suma = suma+i;
	}
	cout<<"La suma es: "<<suma<<endl;
	
	

	return 0;
}