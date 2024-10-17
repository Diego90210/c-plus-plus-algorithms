/*
Escribir un programa que lea las ventas realizadas por N empleados de la empresa xyz.
Estas ventas deben quedar almacenadas en un vector. 
Al final se debe mostrar la venta promedio. La venta m�s alta y la venta m�s baja.
*/
#include <iostream>
using namespace std;
int main()
{
int N;
cout<<"# de ventas: "; cin>>N;
long V[N], prom=0, mayor, menor; //la variable de promedio servir� para calcular el total tambi�n. 
for(int i=0; i<N; i++)
{
	cout<<"V["<<i<<"]: "; //para almacenar un valor en la posici�n N del vector.
	cin>>V[i]; 
	prom+=V[i]; //Lleva la sumatoria de todas las ventas le�das.
}
prom/=N; //Para calcular el promedio de ventas.

mayor=V[0];
menor=V[0];

for(int i=1; i<N; i++)
{
	if(V[i]>mayor)
	mayor=V[i]; //Mayor tomar� el valor de V[i].
	
	if(V[i]<menor) //Para evaluar el dato menor
	menor=V[i]; //Si la condici�n resulta cierta entonces menor tomar� un nuevo valor.
}
cout<<"\nElementos del vector: ";
for(int i=0; i<N; i++)
{
	cout<<V[i]<<" ";
}
cout<<endl;
cout<<"\nVenta promedio: "<<prom<<endl;
cout<<"Mayor venta: "<<mayor<<endl;
cout<<"Menor venta: "<<menor<<endl;

return 0;
}
