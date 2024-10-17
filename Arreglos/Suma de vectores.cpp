/*
Escribir un programa que lea 2 vectores de N elementos enteros y genere un tercer vector que corresponda a la suma de los dos vectore leídos.
*/
#include <iostream>
using namespace std;
int main()
{
int n;

    cout<<"# de elementos del vector: "; cin>>n;
    int a[n], b[n], c[n];

	cout<<"\nIngrese los valores del vector A:\n";
	for(int i=0; i<n; i++)
	{
		cout<<"A["<<i<<"]: ";
		cin>>a[i];
	}
	cout<<"\nIngrese los valores del vector B:\n";
	for(int i=0; i<n; i++)
	{
		cout<<"B["<<i<<"]: ";
		cin>>b[i];
	}
	cout<<"\nIngrese los valores del vector C:\n";
	for(int i=0; i<n; i++)
	{
		cout<<"C["<<i<<"]: ";
		cin>>c[i];
	}
	for(int i=0; i<n; i++)
	{
		c[i] = a[i] + b[i]; //sumando los valores que tienen los vectores en sus respectivas posiciones (sub índices)
		
	}
	cout<<"\nVector A: "; 
	for(int i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	} 
	
	cout<<"\nVector B: "; 
	for(int i=0; i<n; i++) 
	{
		cout<<b[i]<<" ";
	}
	
	cout<<"\nVector C: "; //La suma de los valores de los vectores (en respectivas posiciones)
	for(int i=0; i<n; i++)
	{
	    cout<<c[i]<<" ";
	} 
	
	return 0;
}
