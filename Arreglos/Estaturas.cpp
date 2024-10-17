#include <iostream>
using namespace std;
int main()
{
	int n, altos=0, bajos=0, maxh=0, minh=0; 
	float media, suma=0, mayor=0, menor=9999;
	
	cout<<"Ingrese el numero de alumnos: "; cin>>n;
	
	float estatura[n]; 
	
	for (int i=0; i<n; i++)
	{
		cout<<i+1<<". Ingrese la estatura del alumno: "; cin>>estatura[i];
		suma+=estatura[i];
	}
	media = suma/n;
	
	for (int i=0; i<n; i++)
	{
		if (estatura[i] < media)
		{
			bajos++;
		}
		else if (estatura[i] > media)
		{
			altos++;
		}
	}
	
	for(int i=0; i<n; i++)
	{
		if(estatura[i]>mayor)
		{
			mayor = estatura[i];
			maxh = i+1;
		}
		else if(estatura[i]<menor)
		{
			menor = estatura[i];
			minh = i+1;
		}
	}
	
	cout<<"\n\nLA MEDIA DE ESTATURA ES: "<<media<<endl;
	cout<<"Existen "<<altos<<" alumnos mas altos que la media."<<endl;
	cout<<"Existen "<<bajos<<" alumnos mas bajos que la media."<<endl;
	cout<<"El alumno "<<maxh<<" es el mas alto con: "<<mayor<<endl;
	cout<<"El alumno "<<minh<<" es el mas bajo con: "<<menor<<endl;
	
	return 0;
}