/*
Elaborar un programa que lea una matriz de N filas y M columnas. Luego lea un valor y cheque si
ese valor existe en alguno de los elementos de la matriz. Si existe se debe imprimir la posición que
ocupa el valor dentro de la matriz. Si no existe se debe un mensaje que diga: “No se encuentra dentrode la matriz”.
*/
#include <iostream>
using namespace std;
int main(){
	int n, m, num, compro;
	
	cout<<"Ingrese el numero de filas: "; cin>>n;
	cout<<"Ingrese el numero de columnas: "; cin>>m; 
	cout<<"\n";
	int numeros[n][m];
	
	for(int f=0; f<n; f++)
	{
		for(int c=0; c<m; c++)
		{
			cout<<"Digite un numero ["<<f<<"]["<<c<<"]: ";
			cin>>numeros[f][c];
		}
	}
	
	cout<<"\nDigite un numero: "; cin>>num;
	
	for(int f=0; f<n; f++)
	{
		for(int c=0; c<m; c++)
		{
			if (numeros[f][c] == num)
			{
				cout<<"\nEl numero se encuentra en la posicion: ["<<f<<"]["<<c<<"]";
				compro=1;
			}
		}
	}
	if (compro!=1)
	{
		cout<<"\nEl numero no se encuentra dentro de la matriz.";
	}
	
	
	return 0;
}