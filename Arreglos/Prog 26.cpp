/*
Elabore un programa que lea una matriz de N*N. Calcule la suma de los elementos de la diagonal
principal de la matriz. Calcule la suma de los elementos de la última fila y la suma de los elementos de
la última columna.
*/
#include <iostream>
using namespace std;
int main()
{
	int n, sum=0, sumf=0, sumc=0;
	cout<<"Ingrese las filas y columnas de la matriz (llevaran las mismas): ";
	cin>>n;
	cout<<"\n";
	int numeros[n][n];
	
	for (int f=0; f<n; f++)
	{
		for(int c=0; c<n; c++)
		{
			cout<<"Digite un numero ["<<f<<"]["<<c<<"]: ";
			cin>>numeros[f][c];
		}
	}
	cout<<"\n";
	for (int f=0; f<n; f++)
	{
		for(int c=0; c<n; c++)
		{
			cout<<numeros[f][c]<<"  ";
		}
		cout<<"\n";
	}

	
	//Calculando la suma de la diagonal principal.
	for (int f=0; f<n; f++)
	{
		for (int c=0; c<n; c++)
		{
			if(f==c)
			{
				sum+=numeros[f][c];
			}
		}
	}
	cout<<"\nLa suma de la diagonal principal es: "<<sum; 
	
	//Calculando la suma de los elementos de la última fila.
	for (int f=n-1; f<n; f++)
	{
		for (int c=0; c<n; c++)
		{
			sumf+=numeros[f][c];
		}
	}
	cout<<"\nLa suma de la ultima fila es: "<<sumf;
	
	for(int f=0; f<n; f++)
	{
		for(int c=n-1; c<n; c++)
		{
			sumc+=numeros[f][c];
		}
	}
	cout<<"\nLa suma de la ultima columna es: "<<sumc; 
	
	return 0;
}