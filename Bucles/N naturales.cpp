/* 
Elaborar un programa en C++ que imprima los N primeros números naturales.
*/
#include <iostream>
using namespace std;
int main()
{
	int N;
	
	do 
	{
	 cout<<"Ingrese el numero de elementos que desea imprimir: ";
	 cin>>N;
	}
	while (N<=0);
	
	for(int i=0; i<N; i++)
	{
		cout<<i+1<<". "<<i<<endl;
	}
	
	
	
	
	
	
	return 0;
}