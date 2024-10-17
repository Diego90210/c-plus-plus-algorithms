/*
Hacer una matriz preguntando al usuario el numero de filas y columnas,llenarla de números aleatorios, 
copiar el contenido a otra matriz y por último mostrarla en pantalla.
*/

#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int f, c;
	int m[100][100];
	int m2[100][100];
	cout<<"Ingrese el numero de filas: "; cin>>f;
	cout<<"Ingrese el numero de columnas: "; cin>>c;
	
	for (int i=0; i<f; i++)
	{
		for (int j=0; j<c; j++)
		{
			cout<<"Ingrese un numero ["<<i<<"]["<<j<<"]: ";
			cin>>m[i][j];
			m2[i][j] = m[i][j];
		}
	}
	
	for (int i=0; i<f; i++)
	{
		for (int j=0; j<c; j++)
		{
			cout<<"["<<i<<"]["<<j<<"]: "<<m2[i][j]<<"\t";
		}
		cout<<"\n";
	}
	
	
	
	getch();
	return 0;
}