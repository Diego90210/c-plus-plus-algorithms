#include <iostream>
using namespace std;
int main()
{
	int avion[10], seccion, op, estado, cont=0;
	for(int i=0; i<10; i++)
	{
		avion[i] = 0;
	}
	do
	{
		do
		{
			cout<<"SECCION (1=FUMADORES  2=NO FUMADORES): ";
			cin>>seccion;
		}while(seccion!=1 && seccion!=2);
		switch(seccion)
		{
			case 1: estado = 0;
					for(int i=0; i<5; i++)
					{
						if(avion[i] == 0)
						{
							avion[i] = 1;
							cout<<"PASAJE ASIGNADO\n";
							cout<<"SEECION DE FUMADORES\n";
							cout<<"ASIENTO No. "<<i+1<<endl;
							estado = 1;
							cont++;
							break;
						}
					}
					if(estado==0)
					{
						do
						{
							cout<<"SECCION DE FUMADORES ESTA LLENA\n";
							cout<<"\nDESEA UN ASIENTO EN LA SECCION DE NO FUMADORES? (1=SI  2=NO): ";
							cin>>op;
						}while(op!=1 && op!=2);
						switch(op)
						{
							case 1: estado = 0;
									for(int i=5; i<10; i++)
									{
										if(avion[i] == 0)
										{
											avion[i] = 1;
											cout<<"PASAJE ASIGNADO\n";
											cout<<"SECCION DE NO FUMADORES\n";
											cout<<"ASIENTO No. "<<i+1<<endl;
											estado = 1;
											cont++;
											break;
										}
									}
									if(estado == 0)	
									{
										cout<<"\nEL AVION ESTA LLENO\n";
										return 0;
									}
									break;
							case 2: continue;		
						}	
					}
					break;
			//SECCION DE NO FUMADORES:
			case 2: estado = 0;
					for(int i=5; i<10; i++)
					{
						if(avion[i] == 0)
						{
							avion[i] = 1;
							cout<<"PASAJE ASIGNADO\n";
							cout<<"SEECION DE NO FUMADORES\n";
							cout<<"ASIENTO No. "<<i+1<<endl;
							estado = 1;
							cont++;
							break;
						}
					}
					if(estado==0)
					{
						do
						{
							cout<<"SECCION DE NO FUMADORES ESTA LLENA\n";
							cout<<"\nDESEA UN ASIENTO EN LA SECCION DE FUMADORES? (1=SI  2=NO): ";
							cin>>op;
						}while(op!=1 && op!=2);
						switch(op)
						{
							case 1: estado = 0;
									for(int i=0; i<5; i++)
									{
										if(avion[i] == 0)
										{
											avion[i] = 1;
											cout<<"PASAJE ASIGNADO\n";
											cout<<"SECCION DE FUMADORES\n";
											cout<<"ASIENTO No. "<<i+1<<endl;
											estado = 1;
											cont++;
											break;
										}
									}
									if(estado == 0)	
									{
										cout<<"\nEL AVION ESTA LLENO\n";
										return 0;
									}
									break;
							case 2: continue;		
						}	
					}
		}
		cout<<"\nASIENTOS DEL AVION: ";
		for(int i=0; i<10; i++)
		{
			cout<<avion[i]<<" ";
		}
		cout<<endl<<endl;
		if(cont == 10)
		{
			cout<<"\nEL AVION ESTA LLENO!\n";
			return 0;
		}
	}while(1);
}
