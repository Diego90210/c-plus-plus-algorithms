/*Elaborar un programa en C++ que lea un número entero positivo y obtenga los múltiplos
de X comprendidos entre X y el número leído. */

#include <iostream>
using namespace std;
int main(){
	int n;
	do
	{
		cout<<"Ingrese un numero (MAYOR QUE CERO): "; cin>>n;
	}while(n<=0);
	
	for(int i=1; i<=n; i++)
	{
		
		if (n%i==0){
			cout<<n<<" / "<<i<<" = "<<n/i<<endl;
		}
		
	}
	
	
	
	
	
	return 0;
}