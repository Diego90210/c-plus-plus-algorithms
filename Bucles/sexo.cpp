/*
Elaborar un programa en C++ que imprima los números pares comprendidos entre 1 y N
*/
#include <iostream>
using namespace std;
int main(){
	int N;
	cout<<"Ingrese el numero de elementos que desea imprimir: ";
	cin>>N;
	
	for(int i=1; i<=N; i++)
	{
		if (i%2 == 0) 
		{
			cout<<i<<endl;
		}
	}
	
	return 0;
}