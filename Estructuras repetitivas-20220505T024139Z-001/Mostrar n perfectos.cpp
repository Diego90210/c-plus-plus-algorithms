//Escriba un programa que genere los primeros n perfectos.
#include <iostream>
using namespace std;
int main(){
	//N es para contar los numeros perfectos.
	//num mostrará los numeros perfectos que son pedidos.
	long long N, num=1, cont=0, suma;
	do{
		cout<<"INGRESE LA CANTIDAD DE NUMEROS A OBTENER: "; cin>>N;
	}
	while(N<1);
	
	while(cont<N){
		suma=0;
		for(int i=1; i<=num/2; i++){
			if(num%i==0){
				suma+=i;
			}
		}
		if(num==suma){
			cout<<num<<" ";
			cont++;
		}
		num++;
	}
	
	
	
	
	return 0;
}
