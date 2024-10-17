/*
Leer 10 números e imprimir cuantos son positivos y negativos
y cuantos son neutros. 
*/
#include <iostream>
using namespace std;

int main(){
	int num, i, c_posi=0 ,c_neu=0 , c_nega=0;
	
	for (i=1; i<=10; i++){
		cout<<i<<". Digite un numero: "; cin>>num;
		
		if(num>0){
		c_posi+=1;	
		}
		else if(num<0){
			c_nega+=1;
		}
		else if(num=0){
			c_neu+=1;
		} 
		
	}
    cout<<"La cantidad de positivos es: "<<c_posi<<endl;
    cout<<"La cantidad de negativos es: "<<c_nega<<endl;
    cout<<"La cantidad de neutros es: "<<c_neu<<endl;
    
 return 0;
}