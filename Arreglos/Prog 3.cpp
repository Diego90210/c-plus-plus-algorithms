/* 
Elabore un programa que lea dos vectores A, B de N elementos y genere otros tres vectores, uno que
contenga la suma de los elementos respectivos, otro con el producto y otro con la diferencia (si la
diferencia es negativa se debe colocar un cero como valor).
*/

#include <iostream>
using namespace std;
int main()
{
	int n, suma=0, producto=1, diferencia=0;
	
	do
	{
		cout<<"Ingrese el numero de elementos: "; cin>>n;
	}while(n<0);
	
	int a[n], b[n], sum[n], pro[n], dif[n];
	
	cout<<"\nVector A"<<endl;
	for (int i=0; i<n; i++)
	{
		cout<<"Ingrese un numero: "; 
		cin>>a[i];
	}
	
	cout<<"\nVector B"<<endl;
	for (int i=0; i<n; i++)
	{
		cout<<"Ingrese un numero: "; 
		cin>>b[i];
	}
	
	for (int i=0; i<n; i++)
	{
		sum[i]=a[i]+b[i];
		pro[i]=a[i]*b[i];
		dif[i]=a[i]-b[i];
		
		suma+=sum[i];
		producto*=pro[i];
		diferencia-=dif[i];
	}
	if (dif[n-1]<0)
	{
		dif[n-1]=0;
	}
	
	cout<<"\nLa suma de los dos vectores es: "<<suma;
	cout<<"\nEl producto de los dos vectores es: "<<producto;
	cout<<"\nLa diferencia los dos vectores es: "<<diferencia;
	
	
	
	
	
	
	
	
	
	return 0;
}