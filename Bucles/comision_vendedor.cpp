/*
Un vendedor desea calcular su comisión total sobre la venta de varios artículos. Al
vendedor le corresponde el 5% de comisión sobre artículos cuyo precio sea menor de
$10.000, y 7,5% sobre los artículos cuyo precio es de $10.000 o más. Elabore un
programa en C++ que permita calcular la comisión total de un vendedor. Asuma que el
vendedor hizo N ventas (aparte calculamos el total de ventas).
*/
#include <iostream>
using namespace std;
int main(){
long comision, precioa, total_comision=0, Nventas, total_ventas=0;
    cout<<"Cantidad de ventas a ingresar: "; cin>>Nventas;
    
    for(long i=1; i<=Nventas; i++){
    	cout<<"Precio del articulo No. "<<i<<" : "; cin>>precioa;
    	if(precioa<10000){
    		comision=precioa*5/100;
		}
		else{
			comision=precioa*7.5/100;
		}
		cout<<"Valor de la comision: "<<comision<<endl;
		total_comision+=comision;
		total_ventas+=precioa;
	}
	cout<<"\nTOTAL VENDIDO: "<<total_ventas;
	cout<<"\nTOTAL COMISION: "<<total_comision;
   	
	
	
	
	
	return 0;
}