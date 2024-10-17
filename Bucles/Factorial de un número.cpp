#include <iostream>
using namespace std;
int main(){
	int i, factorial=1, n;
	do{
		cout<<"Ingrese un numero para obtener su factorial: "; cin>>n;		
	}while(n<0);
	
	for(i=1; i<=n; i++){
		factorial*=i;	 
	}
	cout<<"El factorial de "<<n<<" es igual a: "<<factorial;
	
	
	
	return 0;
}