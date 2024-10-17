/*
Elaborar un programa en C++ que lea el nombre, la edad, el sexo (1. masculino y 2.
femenino) y el estado civil (1. Soltero, 2. Casado, 3. Divorciado, 4. Viudo, 5. Otros) de N
personas y calcule e imprima:
- Número de hombres solteros.
- Número de mujeres casadas.
- Promedio de edad de las mujeres solteras.
- Porcentaje de hombres viudos.
- Número de hombres divorciados menores de 30 años.
- Numero de mujeres solteras con edades entre 20 y 28 años.
*/
#include <iostream>
using namespace std;
int main(){
	
	char nombre[30];
	int edad, sexo, estado_civil, nhs=0, nmc=0;
	int promedio_edad_mujeres_solteras=0, numero_mujeres_solteras=0;
	int numero_hombres=0, numero_hombres_viudos=0, numero_hombres_divorciados_m30=0;
	int numero_mujeres_solteras_20_28, n;
	int porcentaje_hombres_viudos;
	
	do{
		cout<<"Ingrese N (mayor a cero): "; cin>>n;
	}while(n<=0);
	for(int i=1; i<=n; i++) 
	{
		cout<<"\nPERSONA NO. "<<i<<":\n"<<endl;
		cout<<"Nombre: "; cin>>nombre;
		cout<<"Edad: "; cin>>edad;
		do
		{
			cout<<"Sexo (1=M - 2=F): "; cin>>sexo;
		}while(sexo!=1 && sexo!=2);
		do
		{
			cout<<"Estado civil (1=Soltero - 2=Casado - 3=Divorciado - 4=Viudo - 5=Otro): "; 
			cin>>estado_civil;
		}while(estado_civil<1 or estado_civil>5);
		
		if(sexo==1 && estado_civil==1)
		{
			nhs++; //calculando el número de hombres solteros
		}
		if(sexo==2 && estado_civil==2)
		{
			nmc++; //Número de mujeres casadas.
		}
		if(sexo==2 && estado_civil==1)
		{
			numero_mujeres_solteras++;
			promedio_edad_mujeres_solteras+=edad; //Sumatoria de edades de las mujeres solteras.
			
		}
		if(sexo==1)
		{
			numero_hombres++;
			if(estado_civil==4)
			{
				numero_hombres_viudos++;
			}
			
			
		}
		if(sexo==1 && estado_civil==3 && edad<30)
		{
			numero_hombres_divorciados_m30++;
		}
		if(sexo==2 && estado_civil==1 && edad>=20 && edad<=28)
		
		{
			numero_mujeres_solteras_20_28++;
		} 
	}
	
	promedio_edad_mujeres_solteras/=numero_mujeres_solteras;
	porcentaje_hombres_viudos = numero_hombres_viudos*100 / numero_hombres;
	
	cout<<"\nNumero de hombres solteros: "<<nhs<<endl;
    cout<<"Numero de mujeres casadas: "<<nmc<<endl;
    cout<<"Promedio de edad de las mujeres solteras: "<<promedio_edad_mujeres_solteras<<endl;
    cout<<"Porcentaje de hombres viudos: "<<porcentaje_hombres_viudos<<endl;
    cout<<"Numero de hombres divorciados menores de 30 años: "<<numero_hombres_divorciados_m30<<endl;
    cout<<"Numero de mujeres solteras con edades entre 20 y 28 años:  "<<numero_mujeres_solteras_20_28<<endl;
	
	
	
	
	return 0;
}