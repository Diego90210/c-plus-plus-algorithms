#include <iostream>
using namespace std;

int main() {
	int mes;
	cout<<"Digita el numero correspondiente al mes que desees: "<<endl;
	cin>>mes;
	
	switch (mes){
		case 1: cout<<"Corresponde a: Enero."<<endl; break;
		case 2: cout<<"Corresponde a: Febrero."<<endl; break;
		case 3: cout<<"Corresponde a: Marzo."<<endl; break;
		case 4: cout<<"Corresponde a: Abril."<<endl; break;
		case 5: cout<<"Corresponde a: Mayo."<<endl; break;
		case 6: cout<<"Corresponde a: Junio."<<endl; break;
		case 7: cout<<"Corresponde a: Julio."<<endl; break;
		case 8: cout<<"Corresponde a: Agosto."<<endl; break;
		case 9: cout<<"Corresponde a: Septiembre."<<endl; break;
		case 10: cout<<"Corresponde a: Octubre."<<endl; break;
		case 11: cout<<"Corresponde a: Noviembre."<<endl; break;
		case 12: cout<<"Corresponde a: Diciembre."<<endl; break;
		default: cout<<"El numero o caracter ingresado no corresponde a ningun mes."<<endl;
		

	}
	
	
	
	
	return 0;
}
