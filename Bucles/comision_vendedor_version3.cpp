//Asuma que cada vendedor puede realizar varias ventas y que cada venta puede contener varios artículos.
#include <iostream>
using namespace std;
int main(){
long x, k, comision, precioa, comision_venta=0, total_comision=0, Nventas, venta=0, total_ventas=0, opcion; 
long gran_total_ventas=0, gran_total_comisiones=0;     
	
	cout<<"\nIngrese la cantidad de vendedores: "; cin>>x;
	for(long v=1; v<=x; v++)
	{ 
	   cout<<"\nVentas vendedor No. "<<v<<":\n";
	   
	   cout<<"\nCantidad de ventas a ingresar: "; cin>>Nventas;
	
    for(long i=1; i<=Nventas; i++){ //CICLO PARA CONTROLAR EL NUMERO DE VENTAS.
    	k=1;
    	venta=0;
    	comision_venta=0;
    	cout<<"\nVenta NO. "<<i<<":\n ";
        
		do{ //CICLO PARA CONTROLAR LA CANTIDAD DE ARTICULOS.
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
		
		do{ //CICLO PARA CONTROLAR LA CANTIDAD DE ARTICULOS POR VENTA.
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
	cout<<"\nTOTAL VENDIDO VENDEDOR NO. "<<v<<":\n"<<total_ventas;
	cout<<"\nTOTAL COMISION VENDEDOR NO. "<<v<<":\n"<<total_comision;
	gran_total_ventas+=total_ventas;
	gran_total_comisiones+=total_comision;
   	
}
    cout<<"\nGRAN TOTAL VENDIDO: "<<gran_total_ventas;
	cout<<"\nGRAN TOTAL COMISION: "<<gran_total_comisiones;	
	
	
	
	return 0;
}