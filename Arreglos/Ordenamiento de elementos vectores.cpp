/*
escribir un programa que lea un vector de N elementos de tipo entero y muestre al final el mismo vector ordenado ascendentemente.
*/

#include <iostream>
using namespace std;
int main()
{
	int N, aux;
	cout<<"# de elementos del vector: ";
	cin>>N;
	int V[N];
	
	cout<<"\nIngrese los valores del vector:\n";
	for(int i=0; i<N; i++)
	{
		cout<<"V["<<i<<"]: ";
		cin>>V[i];
	}
	for(int i=0; i<=N-1; i++) //Este ciclo externo es el que mueve la posición de i (una por una).
	{
		for(int k=i+1; k<N; k++) //Este bucle evalua las posiciones de k con respecto a i (i permanece estático en cada ciclo hasta que k ordene en este ciclo interno los elementos).
		{
			if(V[i]>V[k]) //Hace el respectivo intercambio de los elementos almacenados en los vectores con el fin de ordenarlos de menor a mayor.
			{
				aux=V[i];
				V[i]=V[k];
				V[k]=aux;
				
			}
		}
		
	}
	cout<<"\nElementos del vector:\n";
	for(int i=0; i<N; i++)
	{
		cout<<V[i]<<" ";
	}
	cout<<endl;
	return 0;
	
	
	
	return 0;
}
