#include <iostream>
using namespace std;
//Escriba un programa que lea 3 numeros y determine cual de ellos es mayor.

int main(){
	int n1, n2, n3;
	cout<<"Digite 3 numeros(con un espacio entre ellos): ";
	cin>>n1>>n2>>n3;
	
	if (n1 == n2 == n3){
	   
	   cout<<"Los 3 numeros son iguales. ";
	   } 
       else if (n1 > n2 && n3){
       	cout<<"El mayor es: "<<n1; 
	   }
	   else{
	   	cout<<"El mayor es: "<<n2;
	   	
	   }	   
	   if (n3 >> n1 && n2 ){
	   	cout<<"El mayor es: "<<n3;
	   }
	
	
	
	return 0;
}
