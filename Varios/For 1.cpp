/*Escribir un programa que calcule el salario de n empleados teniendo en cuenta el numero de hora trabajadas en el mes 
y el valor de la hora. se desea conocer cuantos empleados ganan hasta 1 millon de pesos , cuantos ganan mas de 1 millon
hasta 2 millones, cuantos ganan mas de 2 hasta 3 millones y cuantos ganan mas de 3 millones.
Mostrar al final el salario promedio por rango y el salario promedio general.
*/
#include <iostream>
using namespace std;
int main()
{
  long n, horas, valorh, salario, c1=0, c2=0, c3=0, c4=0;
  long a1=0, a2=0, a3=0, a4=0, p1, p2, p3, p4, p, total=0;
  cout<<"numero de empleados: "; cin>>n;
  for(int i=1; i<=n; i++)
{
	cout<<"\n Empleado No. "<<i<<endl;
	cout<<"Numero de horas trabajadas: ";
	cin>>horas;
	cout<<"Valor de la hora: ";
	cin>>valorh;
	salario = horas * valorh; 
	cout<<"Salario: "<<salario<<endl;
	total += salario;
	if(salario<= 1000000)
	{
	   c1++;
	   a1 += salario;
	}
	else
	{
		if(salario<= 2000000)
		{
			c2++;
			a2 += salario;
		}
		else
		{
			if (salario<= 3000000)
			{c3++; a3 += salario;}
			else 
		 {c4++; a4 += salario;}
		}
	
		} 
		
	}
	
	p = total/n;
    if (c1>0) p1 = a1/c1;
    if (c2>0) p1 = a2/c2;
    if (c3>0) p1 = a3/c3;
    if (c4>0) p1 = a4/c4;
	
	cout<<"\nSalario Promedio General: "<<p<<endl;
	cout<<"\nHasta un millon:\n ";
	cout<<"Empleados: "<<c1<<endl;
	cout<<"Salario Promedio 1: "<<p1<<endl;
	
	cout<<"\nEntre 1 y 2 millones:\n ";
	cout<<"Empleados: "<<c2<<endl;
	cout<<"Salario Promedio 2: "<<p2<<endl;
	
	cout<<"\nEntre 2 y 3 millones:\n ";
	cout<<"Empleados: "<<c3<<endl;
	cout<<"Salario Promedio 3: "<<p3<<endl;
	
	cout<<"\nMas de 3 millones:\n ";
	cout<<"Empleados: "<<c4<<endl;
	cout<<"Salario Promedio 4: "<<p4<<endl;
    return 0;
}
