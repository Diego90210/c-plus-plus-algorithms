/*
Escribe un programa que defina un vector de números (en este caso le pedí el numero de elementos y los elementos al usuario) 
y calcule si existe algún número en el vector cuyo valor equivale a la suma del resto de números del vector.
*/


#include <iostream>
using namespace std;
int main(){
	int numeros[100];
	int suma=0, mayor=0, n;
	
	cout<<"Digite el numero de elementos: "; cin>>n;
	
	for(int i=0; i<n; i++)
	{
		cout<<i+1<<" .Digite un numero: "; 
		cin>>numeros[i];
		
		suma+=numeros[i];
		if (numeros[i] > mayor)
		{
			mayor=numeros[i];
		}
	}
	if(mayor == suma-mayor)
	{
		cout<<"\nEl numero "<<mayor<<" equivale a la suma de los demas"<<endl;
	}
	else
	{
		cout<<"\nNo existe ningun numero que sea equivalente a la suma de los demas."<<endl;
	}
	
	
	
	
	
	return 0;
}