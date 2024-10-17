#include <iostream>
using namespace std;
int main()
{
	int f, c;
	int numeros[100][100];
	
	cout<<"Ingrese el numero de filas: "; cin>>f;
	cout<<"Ingrese el numero de columnas: "; cin>>c;
	
	for (int i=0; i<f; i++)
	{
		for(int j=0; j<c; j++)
		{
			cout<<"Ingrese un numero["<<i<<"]["<<j<<"]: "; cin>>numeros[i][j];
		}
	}
	
	for (int i=0; i<f; i++)
	{
		for(int j=0; j<c; j++)
		{
			if (i==j)
			{
				cout<<numeros[i][j];
			}
		}
		cout<<"\n";
	}

	
	
	
	
	
	
	
	return 0;
}