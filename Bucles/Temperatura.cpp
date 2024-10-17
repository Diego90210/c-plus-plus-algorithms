#include <iostream>
using namespace std;

int main(){
	float temp=0, alta=0, media=0, suma=0, baja=1000;
	
for(int i=6; i>0; i--){
	cout<<"Temperatura: "; cin>>temp;
	suma=suma+temp;
	
	if(temp>alta){
		alta=temp;
	}
	
	if(temp<baja){
		baja=temp;
	}
 }   
    media=suma/6;
    cout<<"----------Temperatura maxima----------: "<<alta<<endl;
    cout<<"----------Temperatura minima----------: "<<baja<<endl;
    cout<<"----------temperatura media del dia----------: "<<media<<endl;

return 0;
}