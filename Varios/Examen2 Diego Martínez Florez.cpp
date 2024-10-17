#include <iostream>
using namespace std;
//DIEGO ANDRÉS MARTÍNEZ FLOREZ
int main(){
	int cdp, mp, mt, mdo, gdf, codigo, pdv;
	
	cout<<"Ingrese el codigo del articulo (de 1 a 6): ";
	cin>>codigo;
	
	
	if (codigo == 1) { //ESTE ES EL PRIMERO
    
    cout<<"Ingrese el costo de la materia prima: "; cin>>mp;
	mdo = mp*0.8;
	cdp = mp + mdo + gdf;
	pdv = cdp + (cdp*0.3);  
	gdf = mp*0.25;
	cout<<"Precio de venta: "<<pdv; 
	
		
	}
	else if(codigo == 2){
	
	cout<<"Ingrese el costo de la materia prima: "; cin>>mp;	 
	mdo = mp*0.9;
	cdp = mp + mdo + gdf;
	pdv = cdp + (cdp*0.3);  
	gdf = mp*0.3;
	cout<<"Precio de venta: "<<pdv;
   }
    
	else if(codigo == 3){
	
	cout<<"Ingrese el costo de la materia prima: "; cin>>mp;	 
	mdo = mp*0.7;
	cdp = mp + mdo + gdf;
	pdv = cdp + (cdp*0.3);  
	gdf = mp*0.35;
	cout<<"Precio de venta: "<<pdv;
 		
    }
	else if(codigo == 4){
	
	cout<<"Ingrese el costo de la materia prima: "; cin>>mp;	 
	mdo = mp*0.7;
	cdp = mp + mdo + gdf;
	pdv = cdp + (cdp*0.3);  
	gdf = mp*0.25;
	cout<<"Precio de venta: "<<pdv;
 		
    }
	else if(codigo == 5){
	
	cout<<"Ingrese el costo de la materia prima: "; cin>>mp;	 
	mdo = mp*0.8;
	cdp = mp + mdo + gdf;
	pdv = cdp + (cdp*0.3);  
	gdf = mp*0.3;
	cout<<"Precio de venta: "<<pdv;
 		
    }
	else if(codigo == 6){
	
	cout<<"Ingrese el costo de la materia prima: "; cin>>mp;	 
	mdo = mp*0.9;
	cdp = mp + mdo + gdf;
	pdv = cdp + (cdp*0.3);  
	gdf = mp*0.35;
	cout<<"Precio de venta: "<<pdv;
 		
    }
	
	
	
	
	return 0;
}
