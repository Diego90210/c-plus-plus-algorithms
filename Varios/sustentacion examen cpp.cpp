#include<iostream>
using namespace std;
int main(){
	
	long modelo, peso, tarifa, reten, neto;
	char clase;
	
	cout<<"Ingrese el año del modelo del auto: "; cin>>modelo;
	cout<<"ingrese el peso en kilogramos del auto: "; cin>> peso;
	
	if(modelo < 1970)
	{
		if(peso < 2000){
			
			clase = 'A';
			tarifa = 100000;
		}
		
		else if(peso <= 3000){
			
			clase = 'B';
			tarifa = 200000;
		}
		
		else {
			
			clase = 'C';
			tarifa = 300000;
		}
	}
	else if(modelo <= 2000)
	{
		if(peso < 1500){
			
			clase = 'D';
			tarifa = 200000;
		}
		
		else if(peso <= 2500){
			
			clase = 'E';
			tarifa = 400000;
		}
		
		else {
			
			clase = 'F';
			tarifa = 600000;
		}
	}
	else{
		
		if(peso < 1000){
			
			clase = 'G';
			tarifa = 1000000;
		}
		
		else if(peso <= 2000){
			
			clase = 'H';
			tarifa = 2000000;
		}
		
		else{
			
			clase = 'I';
			tarifa = 3000000;
		}
	}		
	
	if(tarifa < 500000) 
	{
		reten = tarifa * 2 / 100;
	}
	else
	{
		if(tarifa<=1000000)
		{
			reten = tarifa * 4 / 100;
		}
		else
		{
			reten = tarifa * 6 / 100;
		}
	}
	
	neto = tarifa - reten;
	
	cout<<"\nClase: "<<clase<<endl;
	cout<<"Tarifa: "<<tarifa<<endl;
	cout<<"RETENCION: "<<reten<<endl;
	cout<<"Neto a Pagar: "<<neto<<endl;
	
	return 0;
}
