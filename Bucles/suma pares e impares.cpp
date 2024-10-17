/*
Se desea calcular independientemente la suma de los números reales pares e impares
comprendidos entre 1 y 50.
*/
#include <iostream>
using namespace std;
int main(){
	int sumap=0,sumai=0,i;
    for (i=2; i<=49; i++){
    	if (i % 2 == 0){
    	sumap+=i;
        }
        else{
        sumai+=i;
		}
	}
	cout<<"La suma de pares es: "<<sumap<<endl;
    cout<<"La suma de impares es: "<<sumai<<endl;
	
	return 0;
}
