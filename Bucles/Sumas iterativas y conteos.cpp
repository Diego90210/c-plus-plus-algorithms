#include <iostream>
using namespace std;
int main(){
	int N, num, sumap=0, conteo_p=0, sumai=0, conteo_i=0;
	float promedio_i;
	do
	{
		cout<<"Ingrese el numero de elementos (mayor que cero): ";
		cin>>N;
	}while(N<=0);
	
	for(int i=1; i<=N; i++)
	{
		cout<<i<<". Digite un numero: "; cin>>num;
		if(num%2==0) //Si el numero es par.
		{
			sumap+=num; //suma iterativa de los números pares.
			conteo_p+=1; //Conteo de números pares.
		}
		else
		{
			sumai+=num;
			conteo_i+=1;
		}
	}
	if (conteo_p==0)
	{
		cout<<"No se han digitado numeros pares: "<<endl;
	}
	else 
	{
		cout<<"La suma de los numeros pares es: "<<sumap<<endl;
		cout<<"El conteo de pares es: "<<conteo_p<<endl;
	}
	
	if (conteo_i==0)
	{
		cout<<"No se han digitado numeros impares."<<endl;
	}
	else
	{
		promedio_i=sumai/conteo_i;
		cout<<"El promedio de impares es: "<<promedio_i<<endl;
	}
	
	
	
	
	
	
	
	
	
	
}