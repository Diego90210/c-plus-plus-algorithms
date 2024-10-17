#include <iostream>
using namespace std;
int main ()
{
	int insumos;

	cout<<"DATOS A LLENAR POR EL GERENTE\n\n";
	cout<<"1.Numero de insumos del cual disponen: "; cin>>insumos;
	
	float Vec_Ins[insumos], Vec_VIns[insumos], Vec_MatSurIns[insumos], Vec_SurInsTotal[insumos];
	float Vec_Totalxmes[insumos];
	
	for (int i=0; i<insumos; i++)
	{
		cout<<"Valor del insumo No. "<<i+1<<" :";	
		cin>>Vec_VIns[i];
	}
	system("cls");
	for (int i=0; i<insumos; i++)
	{
		cout<<"Insumo No. "<<i+1<<"\t";
	}
	cout<<endl<<endl;
	for (int i=0; i<insumos; i++)
	{
		cout<<"Valor: $"<<Vec_VIns[i]<<"\t";
	}
	
	cout<<"\n-----------------------------------------";
	cout<<"\nDATOS A LLENAR POR EL GERENTE\n\n";
	cout<<"2.Numero de insumos en stock: ";
	
	for(int i=0; i<insumos; i++)
	{
		cout<<"\n\nIngrese la cantidad del Insumo No. "<<i+1<<" en stock: "; cin>>Vec_Ins[i];
	}
	
	system("cls");

	cout<<"\n-----------------------------------------";

	system("cls");
	cout<<"\n\nDATOS INSUMOS\n\n";
	for (int i=0; i<insumos; i++)
	{
		cout<<"Insumo No. "<<i+1<<"\t";
	}
	cout<<endl;
	for (int i=0; i<insumos; i++)
	{
		cout<<"Valor: $"<<Vec_VIns[i]<<"\t";
	}
	cout<<endl;
	for (int i=0; i<insumos; i++)
	{
		cout<<"Stock: "<<Vec_Ins[i]<<"\t";
	}
	cout<<endl;
	
	cout<<"\n-----------------------------------------";
	
	int motores;
	
	cout<<"\n\nINGRESE LA CANTIDAD DE MOTORES A REALIZAR: "; cin>>motores;
	
	system("cls");
	
	float Mat_MotIns[motores][insumos], Vec_SurMot[motores];
	
	
	for(int t=0;t<motores; t++)
	{
		cout<<"\nINFO MOTOR No. "<<t+1;
		cout<<"\n\nCANTIDADES DE INSUMOS\n\n";
		for (int i=0;i<insumos;i++)
		{
			cout<<"Cantidad del insumo No. "<<i+1<<" (Cantidad en Stock("<<Vec_Ins[i]<<")):"; cin>>Mat_MotIns[t][i];
			Vec_Ins[i] =  Vec_Ins[i]-Mat_MotIns[t][i];
		}
	}
	for(int i=0; i<motores; i++)
	{
		cout<<"\n\nIngrese la cantidad del motor No. "<<i+1<<" a surtir al mes: "; cin>>Vec_SurMot[i];
	}
	
	for (int i=0; i<insumos; i++)
	{
		cout<<"Surtir: "<<Vec_SurMot[i]<<"\t";
	}
	cout<<"\n-----------------------------------------";
	system("cls");
	
	cout<<"\n\nMATRIZ MOTORES E INSUMOS\n\n";
	cout<<"No.\t";
	for(int i=0;i<insumos;i++)
		{
			cout<<"Ins. "<<i+1<<"\t";
		}
	for(int t=0; t<motores; t++)
	{
		cout<<endl;
		cout<<t+1<<"\t";
		for(int i=0;i<insumos;i++)
		{
			cout<<Mat_MotIns[t][i]<<"\t";
		}
	}
	cout<<endl<<endl;
	float Vec_CostMot[insumos], Vec_CostIns[insumos]; 
	long Vec_ExisInsF[insumos];
	cout<<"\n-----------------------------------------\n";
	cout<<"\n\tCOSTOS DE INSUMOS POR MOTOR";
	cout<<"\n\nMOTOR\t";
	for(int i=0; i<insumos; i++)
	{
		cout<<"INSUMOS\t";
	}
	cout<<endl;
	for (int t=0; t<motores; t++)
	{
		float suma=0;
		cout<<"No. "<<t+1;
		for(int i=0; i<insumos; i++)
		{
			Vec_CostMot[i]= Vec_VIns[i]* Mat_MotIns[t][i];
			cout<<"\t$"<<Vec_CostMot[i];
			suma += Vec_CostMot[i];
		}
		cout<<"\tTotal: $"<<suma;
		cout<<endl;
	}
	cout<<endl<<endl;
	cout<<"\n-----------------------------------------\n";
	cout<<"\n\tINSUMOS POR MOTORES PEDIDOS AL MES";
	cout<<endl;
	for(int t=0; t<motores;t++)
	{
		cout<<"MOTOR No. "<<t+1<<": \t";
		
		for(int i=0; i<insumos; i++)
		{
			Vec_MatSurIns[i]= Vec_SurMot[t] * Mat_MotIns[t][i];
			cout<<Vec_MatSurIns[i]<<"\t";
			Vec_SurInsTotal[i] += Vec_MatSurIns[i];
		}
		cout<<endl;
	}
	cout<<"Total insumos: ";
	for(int i=0; i<insumos; i++)
	{
		cout<<"\t$"<<Vec_SurInsTotal[i];
	}
	cout<<"\n-----------------------------------------\n";
	cout<<"\n\nCOSTOS POR CASA INSUMO:";
	for(int i=0; i<insumos; i++)
	{
		Vec_CostIns[i]= Vec_VIns[i]*Vec_SurInsTotal[i];
		cout<<"\t$"<<Vec_CostIns[i];
	}
	
	cout<<"\n-----------------------------------------\n";
	cout<<"\n\nINSUMOS SOBRANTES Y FALTANTES";
	for(int t=0; t<insumos; t++)
	{
		//Vec_Ins[t]
		if(Vec_Ins[t]<0)
		{
			cout<<"\nINSUMOS FALTANTES DEL INSUMO No. "<<t+1<<": "<<Vec_Ins[t]*-1;
		}
		else 
		{
			cout<<"\nINSUMOS SOBRANTES DEL INSUMO No. "<<t+1<<": "<<Vec_Ins[t];
		}
	}
	return 0;
}