//Escribir un programa que genere los primeros N primos
#include <iostream>
using namespace std;
int main()
{
	long long N, num=1, cont=0, primo;
	do
	{
		cout<<"Ingrese N (Valor positivo): ";
		cin>>N;
	}while(N<1);
	
	while(cont<N)
	{
		primo = 1;
		for(int i=2; i<=num/2; i++)
		{
			if(num%i == 0)
			{
				primo = 0;
				break;
			}
		}
		if(primo == 1)
		{
			cout<<num<<" ";
			cont++;
		}
		num++;
	}
	return 0;
}
