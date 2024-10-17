#include <iostream>
using namespace std; 
int main()
{
	int filas, columnas;
	cout<<"Ingrese el numero de filas: "; cin>>filas;
	cout<<"Ingrese el numero de columnas: "; cin>>columnas;
	int n[99][99];
	for(int f=0; f<filas; f++)
	{
		for(int c=0; c<columnas; c++)
		{
			cout<<"Ingrese un numero ["<<f<<"]"<<"["<<c<<"]: "; cin>>n[f][c];
		}
	}
	
    if (filas == columnas){
    	
	}
	
	
	
	
	
	
	
	
	return 0;
}