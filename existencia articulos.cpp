/* Elaborar un algoritmo que forme dos arreglos relacionados que almacenen los c�digos de los N  art�culos que se venden en un almac�n y la existencia (n�mero de unidades existentes) de cada  uno de los art�culos, ejemplo: 
Del art�culo con c�digo 101 hay 30 unidades en existencia; del art�culo con c�digo 200 hay 40  unidades y as� sucesivamente. 
Por cada proveedor o cliente que llega al almac�n se genera un registro con los siguientes datos: a. Tipo de transacci�n [1 para proveedor (recibo); 2 para cliente (venta)] 
b. C�digo del art�culo transado 
c. N�mero de unidades transadas (recibidas o vendidas) 
Al final se deben mostrar los c�digos de los art�culos y las existencias de cada uno de ellos, es decir,  los arreglos de c�digos y de existencias actualizados. En caso de que la cantidad vendida supere la  existencia, la operaci�n se debe anular, y se debe emitir un mensaje de error al usuari
*/
#include <iostream>
using namespace std;

int main()
{
	int N,x, continuar, sw, tipo_tran;
	long cod, unid;
	do
	{
		cout<<"Cantidad de articulos: ";
		cin>>N;	
	}while(N<=0);
	
	long codigo[N];
	long existencias[N];
	
	cout<<"Cargando valores actuales de existencia"<<endl;
	for(x=0; x<N; x++)
	{
		cout<<"Registro datos articulo # "<<x+1 <<endl;
		cout<<"Codigo: "; cin>>codigo[x];
		cout<<"Cantidad en existencia: "; cin>>existencias[x];
	}
	do
	{
		system("cls");
		sw=0;
		cout<<"Codigo de articulo a transar: ";
		cin>>cod;
		for(x=0; x<N; x++)
		{
			if(cod == codigo[x])
			{
				sw=1;
				do
				{
					cout<<"Tipo de transacci�n [1 para proveedor (recibo); 2 para cliente (venta)] :";	
					cin>>tipo_tran;
				}while(tipo_tran<1 || tipo_tran>2);
				do
				{
					cout<<"N�mero de unidades transadas (recibidas o vendidas) ";
					cin>>unid;
				}while(unid<=0);
				
				if(tipo_tran == 1)
				{
					existencias[x] += unid;
				}
				else
				{
					if(unid > existencias[x])
					{
						cout<<"Cantidad en existencia insufiente" <<endl;
					}
					else
					{
						existencias[x] -= unid;
					}
				}
				break;
			}//if 	
		}//for
		if(sw==0)
		{
			cout<<"Articulo no est� registrado"<<endl;
		}
		cout<<"Desea registrar la transacci�n de otro articulo: 1.SI - 0.Salir: ";
		cin>>continuar;
	}while(continuar == 1);
	
	system("cls");
	for(x=0; x<N; x++)
	{
		cout<<"Producto #"<<x+1 <<"\tCodigo:"<<codigo[x]<<"\tCantidad en existencia: "<<existencias[x]<<endl;
	}	
}
