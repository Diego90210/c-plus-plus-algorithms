/*
Elabore un programa que lea tres vectores A, B, C de M elementos y genere un cuarto vector NUEV de
M elementos, donde cada elemento contenga la suma de los elementos correspondientes en los
arreglos A, B, y C. Así: 
NUEV(I) = A(I) + B(I) + C(I).
*/
#include <iostream>
using namespace std; 
int main()
{
	int m, suma=0;
	cout<<"Digite el numero de elementos que llevaran todos los vectores: "; 
	cin>>m;
	int a[m], b[m], c[m], nuev[m];
	
	cout<<"\nVECTOR A"<<endl;
	for (int i=0; i<m; i++)
	{
		cout<<"Ingrese un numero: "; 
		cin>>a[i];
	}
	
	cout<<"\nVECTOR B"<<endl;
	for (int i=0; i<m; i++)
	{
		cout<<"Ingrese un numero: "; 
		cin>>b[i];
	}
	
	cout<<"\nVECTOR C"<<endl;
	for (int i=0; i<m; i++)
	{
		cout<<"Ingrese un numero: "; 
		cin>>c[i];
	}
	cout<<"\n";

	for (int i=0; i<m; i++)
	{
		nuev[i]=a[i]+b[i]+c[i];
		suma+=nuev[i]; 
	}
	cout<<suma; 
	
	
	
	
	
	
	
	
	return 0;
}