//Diego Andrés Martínez Florez
//Mario Caraballo
//Santiago Benavides Franco
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
		cout<<"\nIngrese la cantidad de insumos: "; cin>>n;
	}while(n<=0);
	cout<<"\n";
	system("cls");

	int matriz[m][n], pedidos[m], existencias[n];
	float costos[n], costop[m], suma[99], insumosm[99], sum[99], costoti[99];
	
	//Pidiendo los datos de la matriz
	for(int f=0; f<m; f++)
	{
		cout<<"\t|-----Motor tipo "<<f+1<<"------|"<<endl;
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
	
	system("pause");
	system("cls");
	
	cout<<"---------------MATRIZ GENERAL---------------\n"<<endl;
	for(int f=0; f<m; f++)
	{
		cout<<" Motor #"<<f+1<<" ||";
		for(int c=0; c<n; c++)
		{
			cout<<setw(2)<<matriz[f][c]<<setw(2)<<" | ";
		}
		cout<<"\n";
	}
	
	//Punto b
	cout<<"\n--------------------COSTO DE PRODUCCION DE CADA MOTOR--------------------\n"<<endl;
	for (int f=0; f<m; f++)
	{
		for (int c=0; c<n; c++)
		{
			costop[f] = matriz[f][c] * costos[c];
			suma[f]+=costop[f];
		}
		cout<<suma[f]<<"$ | ";
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
	}
	for(int i=0; i<n; i++)
	{
		cout<<sum[i]<<" | ";
	}
	
	//Punto d
	cout<<"\n\n--------------------COSTO TOTAL DE LOS INSUMOS--------------------\n\n";
	for (int f=0; f<m; f++)
	{
		for(int c=0; c<n; c++)
		{
			costoti[c] = sum[c]*costos[c];
		}
	}
	for (int i=0; i<n; i++)
	{
		cout<<costoti[i]<<"$ | ";
	}
	
	//Punto e
	cout<<"\n";
	cout<<"--------------------------------------------------\n";
	for(int f=0; f<n; f++)
	{
		if ((existencias[f] - sum[f])<0)
		{
			cout<<"\nINSUMO #"<<f+1<<": FALTAN LAS SIGUIENTES UNIDADES: "<<(existencias[f] - sum[f])*(-1);
		}
	}
	
	return 0;
}
