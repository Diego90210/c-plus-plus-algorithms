#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int m, n;
	do
	{
		cout<<"Ingrese la cantidad de motores: "; cin>>m;
	}while(m<=0);
	
	do
	{
		cout<<"Ingrese la cantidad de insumos: "; cin>>n;
	}while(n<=0);
	cout<<"\n";

	int matriz[m][n], pedidos[m], existencias[n];
	float costos[n], costop[m], suma[99], insumosm[99], sum[99], costoti[99];
	
	//Pidiendo los datos de la matriz
	for(int f=0; f<m; f++)
	{
		cout<<"\tMotor tipo "<<f+1<<endl;
		for(int c=0; c<n; c++)
		{
			do
			{
				cout<<"\nIngrese la cantidad del insumo "<<c+1<<": ";
			    cin>>matriz[f][c];
			}while(matriz[f][c] < 0);
			
			if(f==0) //Para pedir el costo y existencia del insumo solo al inicio (ya que no es requerido más de una vez).
			{
				do
				{
					cout<<"Costo del insumo "<<c+1<<": "; cin>>costos[c];
				}while(costos[c] <= 0);
				
				do
				{
					cout<<"Existencia del insumo "<<c+1<<": "; cin>>existencias[c];
				}while(existencias[c] < 0);
			}
		}
		cout<<"\n";
		do
		{
			cout<<"Pedido del mes del motor "<<f+1<<": "; cin>>pedidos[f];
		}while(pedidos[f] <= 0);
		cout<<endl; 
	}
	
	cout<<"---------------MATRIZ GENERAL---------------\n";
	for(int f=0; f<m; f++)
	{
		cout<<" Motor "<<f+1<<"||";
		for(int c=0; c<n; c++)
		{
			cout<<setw(3)<<matriz[f][c]<<setw(3)<<" | ";
		}
		cout<<"\n";
	}
	
	//Punto b
	cout<<"\n--------------------COSTO DE PRODUCCION DE CADA MOTOR--------------------\n";
	for (int f=0; f<m; f++)
	{
		for (int c=0; c<n; c++)
		{
			costop[f] = matriz[f][c] * costos[c];
			suma[f]+=costop[f];
		}
		cout<<suma[f]<<"$ | ";
		//cout<<"\nEl costo de produccion del motor "<<f+1<<" es de: "<<suma[f]<<"$"; 
	}
	
	//Punto c
	cout<<"\n\n--------------------UNIDADES DE INSUMOS NECESARIAS POR MES--------------------\n\n";
	for (int f=0; f<m; f++)
	{
		for(int c=0; c<n; c++)
		{
			insumosm[c] = matriz[f][c] * pedidos[f];
			sum[c]+=insumosm[c];
		}
		//cout<<"Insumo "<<f+1<<": "<<sum[f]; //mostrar como vector
		cout<<sum[f]<<" | ";
	}
	
	//Punto d
	cout<<"\n--------------------COSTO TOTAL DE LOS INSUMOS--------------------\n\n";
	for (int f=0; f<m; f++)
	{
		for(int c=0; c<n; c++)
		{
			costoti[c] = sum[c]*costos[c];
		}
		//cout<<"Insumo "<<f+1<<": "<<costoti[f]<<endl;
		cout<<costoti[f]<<" | ";
	}
	
	//Punto e: UTILIZAR UN IF POR SI SE INTRODUCEN LAS CANTIDADES NECESARIAS PARA CADA INSUMO.
	cout<<"\n";
	for(int f=0; f<m; f++)
	{
		if ((existencias[f] - sum[f])<0)
		{
			cout<<"INSUMO "<<f+1<<": EXISTENCIAS REQUERIDAS PARA EL PEDIDO MENSUAL: "<<(existencias[f] - sum[f])*(-1);
		}
	}
	
	return 0;
}