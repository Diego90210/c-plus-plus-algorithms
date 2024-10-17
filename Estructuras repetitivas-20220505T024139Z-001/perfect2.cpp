//Escribir un programa que genere los primeros N perfectos
#include <iostream>
using namespace std;
int main()
{
	long long N, num=1, cont=0, suma;
	do
	{
		cout<<"Ingrese N (Valor positivo): ";
		cin>>N;
	}while(N<1);
	
	while(1)
	{
		suma = 0;
		for(int i=1; i<=num/2; i++)
		{
			if(num%i == 0)
			{
				suma += i;
			}
		}
		if(num == suma)
		{
			cout<<num<<" ";
			cont++;
		}
		if(cont==N)
		{
			break;
		}
		num++;
	}
	return 0;
}
