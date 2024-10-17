/* Escriba un programa que lea de la entrada estándar un carácter, e indique en la salida estándar
si el carácter es una vocal minúscula, es una vocal mayúscula o no es una vocal. */

#include <iostream>
using namespace std;

int main(){
	char letra;
	cout<<"Digite un caracter: "; 
	cin>>letra;
	
	switch(letra){
		case 'a': 
		case 'e': 
		case 'i': 
		case 'o': 
	    case 'u': cout<<"El caracter digitado es una vocal minuscula."<<endl; break;
	    case 'A': 
	    case 'E':
	    case 'I':
	    case 'O':
	    case 'U': cout<<"El caracter digitado es una vocal mayuscula."<<endl; break;
	    default : cout<<"El caracter digitado no es una vocal."<<endl; break;
		}
	
		
	return 0;
	//Al digitar caracteres de la forma "a24" lo marca como una vocal mayuscula o minuscula dependiendo de cual se digite.

}
