#include <iostream>
using namespace std;
int main()
{
	int numeros[2][3]={1,2,3,
	                   4,5,6};
	                   
	for (int f=0; f<2; f++)
	{
		for(int c=0; c<3; c++)
		{
			cout<<" "<<numeros[f][c]*3;
		}
		cout<<"\n";
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}