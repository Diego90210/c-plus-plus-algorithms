#include <iostream>
using namespace std;
int main(){
long k ,comision, precioa, comision_venta=0, total_comision=0, Nventas, venta=0, total_ventas=0, opcion; 
    
	cout<<"Cantidad de ventas a ingresar: "; cin>>Nventas;
    
    for(long i=1; i<=Nventas; i++){
    	k=1;
    	venta=0;
    	comision_venta=0;
    	cout<<"\nVenta NO. "<<i<<":\n ";
    do{
    cout<<"\nPrecio del articulo No. "<<k<<": "; cin>>precioa;
		
    	
    	if(precioa<10000){
    		comision=precioa*5/100;
		}
		else{
			comision=precioa*7.5/100;
		}
		cout<<"Valor de la comision: "<<comision<<endl;
		comision_venta+=comision;
		venta+=precioa;
		
		do{
		   cout<<"\nDESEA AGREGAR OTRO ARTICULO A LA VENTA ? (1:SI - 2:NO): ";
		   cin>>opcion;
		   
		   if (opcion!=1 && opcion!=2)
		   {
		   	cout<<"ERROR: OPCION INCORRECTA. DEBE INGRESAR 1 o 2.";
		   }  	
		
		}while(opcion!=1 && opcion!=2);
	     k++;
	
	} while(opcion==1);
	cout<<"\nValor de la venta No.  "<<i<<": "<<venta<<endl;
	cout<<"\nComision de la venta: "<<comision_venta<<endl;	
    
	}
	cout<<"\nTOTAL VENDIDO: "<<total_ventas;
	cout<<"\nTOTAL COMISION: "<<total_comision;
   	
	
	
	
	
	return 0;
}