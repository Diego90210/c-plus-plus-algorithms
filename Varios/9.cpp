/* Nombre
Total unidades vendidas y
Precio del art�culo vendido */ 

/* Si el precio del art�culo es de $20.000, o menos, la comisi�n es del 3%,
Si el precio del art�culo es mayor que $20.000 pero menor que $50.000 la comisi�n ser�
del 5%,
Si el precio del art�culo es mayor o igual que $50.000 la comisi�n ser� del 10%. */

#include <iostream>
using namespace std;

int main(){
	char nombre [40];
	float precio_articulo, total_unidades, comision;
	
	cout<<"Introduzca su nombre: ";
	gets(nombre);
	
	cout<<"Total unidades vendidas: ";
	cin>>total_unidades;
	
	cout<<"Precio del articulo vendido: ";
	cin>>precio_articulo;
	
	if(precio_articulo <= 20000){
		
		comision = (precio_articulo * total_unidades * 0.03);
		
	}
	else 
	if(precio_articulo < 50000){
		
		comision = (precio_articulo * total_unidades * 0.05);		
	}
	else{
		comision = (precio_articulo*total_unidades*0.1);
	}
	cout<<"El vendedor: "<<endl<<nombre;
	cout<<"Obtuvo una comision de $ "<<endl<<comision;
	
	
	
	system("PAUSE");
	return 0;
}
