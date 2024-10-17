/*
Realice un programa que calcule la suma de dos matrices cuadradas de 3x3.
*/

#include <iostream>
using namespace std;
int main()
{
	int n, f1, c1,f2,c2 ,i, j, suma1=0, suma2=0;
	int numeros[50][50], numeros2[50][50];
	
	cout<<"\tMATRIZ 1"<<endl;
	cout<<"Ingrese el numero de filas: "; cin>>f1;
	cout<<"Ingrese el numero de columnas: "; cin>>c1;
	cout<<"\n";
	
	for (i=0; i<f1; i++)
	{
		for(j=0; j<c1; j++)
		{
			cout<<"Ingrese un numero ["<<i<<"]["<<j<<"]: "; cin>>numeros[i][j];
			suma1+=numeros[i][j];
		}
	}
	
	cout<<"\n\tMATRIZ 2"<<endl;
	cout<<"Ingrese el numero de filas: "; cin>>f2;
	cout<<"Ingrese el numero de columnas: "; cin>>c2;
	cout<<"\n";
	
	for (i=0; i<f2; i++)
	{
		for(j=0; j<c2; j++)
		{
			cout<<"Ingrese un numero ["<<i<<"]["<<j<<"]: "; cin>>numeros2[i][j];
			suma2+=numeros2[i][j];
		}
	}
	
	cout<<"\n\tMostrando la matriz 1\n";
	for (i=0; i<f1; i++)
	{
		for(j=0; j<c1; j++)
		{
			cout<<"["<<i<<"]["<<j<<"]:"<<numeros[i][j]<<endl;
		}
	}
	
	cout<<"\n\tMostrando la matriz 2\n";
	for (i=0; i<f2; i++)
	{
		for(j=0; j<c2; j++)
		{
			cout<<"["<<i<<"]["<<j<<"]:"<<numeros2[i][j]<<endl;
		}
	}
	
	cout<<"\nSuma total de las dos matrices: "<<suma1+suma2;
	
	
	return 0;
}