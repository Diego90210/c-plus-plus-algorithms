/*
Ejercicio 8: 
Hacer un programa que lea 5 números en un arreglo, los copie a otro arreglo multiplicados por 2 y muestre el segundo arreglo.
*/
#include <iostream>
using namespace std;
int main()
{
	int numeros[100];
	int numerosx2[5];
	int n;
	int multi;
	do
	{
		cout<<"Digite el numero de elementos: ";
	    cin>>n;
	}while(n<=0);
	
	
	for (int i=0; i<n; i++)
	{
		cout<<"Digite un numero: "; cin>>numeros[i];
	}
	cout<<"\nPor cuanto desea multiplicar los numeros introducidos?: "; cin>>multi;
	
	for (int i=0; i<n; i++)
	{
		numerosx2[i] = (numeros [i]) * multi;
	}
	
	cout<<"\nNumeros multiplicados por "<<multi<<":\n";
	for (int i=0; i<n; i++)
	cout<<numerosx2[i]<<endl;
	
	return 0;
}