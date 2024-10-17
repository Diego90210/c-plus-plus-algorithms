/*
En una clase de 5 alumnos se han realizado tres exámenes y se requiere determinar el número de: 
 a) Alumnos que aprobaron todos los exámenes.
 b) Alumnos que aprobaron al menos un examen.
 c) Alumnos que aprobaron únicamente el último examen.
*/

#include <iostream>
using namespace std;
int main()
{
	int i, j, ate=0, aue=0, aule=0; 
	float primer, segundo, tercer; 
	
	for (i=1; i<=5; i++)
	{
		for(j=1; j<=3; j++)
		{
			cout<<"Ingrese la calificacion del primer examen: "; cin>>primer;
			cout<<"Ingrese la calificacion del segundo examen: "; cin>>segundo;
			cout<<"Ingrese la calificacion del tercer examen: "; cin>>tercer;
		}
		if(primer>=3.0 && segundo>=3.0 && tercer>=3.0)
		{
			ate++; 
		}
		if (primer>=3.0 || segundo>=3.0 || tercer>=3.0)
		{
			aue++; 
		}
		if (primer<=3.0 && segundo<=3.0 && tercer>=3.0)
		{
			aule++;
		}
			
	}
	cout<<"\nALUMNOS QUE APROBARON TODOS LOS EXAMENES: "<<ate<<endl;
	cout<<"ALUMNOS QUE APROBARON AL MENOS UN EXAMEN: "<<aue<<endl;
	cout<<"ALUMNOS QUE APROBARON UNICAMENTE EL ULTIMO EXAMEN: "<<aule<<endl;
	
	
	
	
	
	
	
	
	
	return 0;
}