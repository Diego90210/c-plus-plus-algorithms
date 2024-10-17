//Diego Andr�s Mart�nez Florez: 0222120002
//Carlos Juli�n Mouthon G�mez: 

#include <iostream>
#include <locale.h>
#include <stdio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Spanish");
	int op, opeli, ozon, opdia, opcar, car, boletos, id, sala, hijos;
	bool completo = false;
	long precio, valor_t, descuento=0, neto;
	string p1, p2, p3, p4, peliselec, zona, dia, nombre;
	
	
	cout<<"        CINEMAX        "<<endl;
	cout<<"1) ASIGNACI�N DE PEL�CULAS A SALAS"<<endl;
	cout<<"2) VENTA DE TIQUETES"<<endl;
	cout<<"3) SALIR"<<endl;
	cout<<"Opci�n: "; cin>>op;
	
	switch (op)
	{
		case 1:	system("cls");
		 		fflush(stdin); //Limpiar el buffer para poder introducir los nombres de las pel�culas. 
				cout<<"\nSala 1) Introduzca el nombre de la pel�cula: ";
				getline(cin, p1);
				
				fflush(stdin);
				cout<<"Sala 2) Introduzca el nombre de la pel�cula: "; 
				getline(cin, p2);
				
				fflush(stdin);  
				cout<<"Sala 3) Introduzca el nombre de la pel�cula: ";
				getline(cin, p3);
				
				fflush(stdin);
				cout<<"Sala 4) Introduzca el nombre de la pel�cula: ";  
				getline(cin, p4);
				completo = true; 
				//No se coloca el break para que se ejecute el siguiente case.
	    
		case 2: if (completo == true) //Para impedir que se ejecute la opci�n sin antes haber asignado las pel�culas a la sala. 
		{
			system("cls"); 	
        		cout<<"\n----------Seleccione la pel�cula que desea ver----------";
				cout<<"\n1) "<<p1<<endl;
				cout<<"2) "<<p2<<endl;
				cout<<"3) "<<p3<<endl;
				cout<<"4) "<<p4<<endl;
				cout<<"\nOpci�n: "; cin>>opeli;
				
				switch(opeli) //Eval�a la pel�cula escogida y asigna una sala. 
				{
					case 1: peliselec = p1;
							sala=1; 
					break;
					case 2: peliselec = p2;
							sala=2; 
					break;
					case 3: peliselec = p3;
							sala=3; 
					break;
					case 4: peliselec = p4;
							sala=4; 
					break;
					default: cout<<"\nDIGITE DENTRO DEL RANGO! [1-4]";
				}
				
				system("cls");
				cout<<"\n----------Zona deseada----------";
				cout<<"\n1)Principal";
				cout<<"\n2)Palco";
				cout<<"\n3)Central";
				cout<<"\n4)Lateral"<<endl;
				cout<<"Opci�n: "; cin>>ozon;
				
				switch (ozon) //Evaluando la zona escogida
				{
					case 1: zona="Principal";
					break;
					case 2: zona="Palco";
					break;
					case 3: zona="Central";
					break;
					case 4: zona="Lateral";
					break;
					default: cout<<"\nDIGITE DENTRO DEL RANGO! [1-4]";
				}
				system("cls");
				
				cout<<"----------Ingrese el d�a de la semana----------";
				cout<<"\n1)Lunes"<<endl;
				cout<<"2)Martes"<<endl;
				cout<<"3)Mi�rcoles"<<endl;
				cout<<"4)Jueves"<<endl;
				cout<<"5)Viernes"<<endl;
				cout<<"6)S�bado"<<endl;
				cout<<"7)Domingo"<<endl;
				cout<<"\nOpci�n: "; cin>>opdia;
				
				switch(opdia) //Evaluael d�a escogido, y luego asigna dicho d�a a una variable para mostrarlo al final.
				{
					case 1: dia="Lunes";
					break;
					case 2: dia="Martes";
					break;
					case 3: dia="Mi�rcoles";
					break;
					case 4: dia="Jueves";
					break;
					case 5: dia="Viernes";
					break;
					case 6: dia="S�bado";
					break;
					case 7: dia="Domingo";
					break;
					default: cout<<"\nDIGITE DENTRO DEL RANGO! [1-7]";
				}
				system("cls");
				cout<<"----------Tipo de entrada----------";
				cout<<"\n�Tiene carnet preferencial? [1=Si, 2=No]: ";
				cin>>opcar;
				
				if (ozon==1) //Zona principal
				{
					if(opdia>=1 && opdia<=4)//Lunes a jueves.
					{
						precio=12500;
					}
					else
					{
						if(opdia>=1 && opdia<=4 && opcar==1) //Lunes a jueves preferencial.
						{
							precio=9600;
						}
						else
						{
							if(opdia>=5 && opdia<=7) //viernes a domingo.
							{
								precio=14000;
							}
							else if(opdia>=5 && opdia<=7 && opcar==1) //Viernes a domingo preferencial.
							{
								precio=11000;
							}
						}
					} 
				}
				else
				{
					if (ozon==2) //Zona Palco
					{
						if(opdia==1 or opdia==2 or opdia==4)//Lunes, martes y jueves.
						{
							precio=16500;
						}
						else
						{
							if((opdia==1 or opdia==2 or opdia==4) && opcar==1) //Lunes, martes y jueves preferencial.
							{
								precio=12500;
							}
							else
							{
								if(opdia==3 or (opdia>=5 && opdia<=7)) //Mi�rcoles, y viernes a domingo.
								{
									precio=18500;
								}
								else if((opdia==3 or (opdia>=5 && opdia<=7)) && opcar==1 ) //Mi�rcoles, y viernes a domingo preferencial.
								{
									precio=14000;
								}
							}
						}
					}
					else
					{
						if (ozon==3) //Zona principal
				    	{
							if(opdia>=1 && opdia<=5)//Lunes a viernes.
							{
								precio=10000;
							}
							else
							{
								if(opdia>=1 && opdia<=5 && opcar==1) //Lunes a viernes preferencial.
								{
									precio=8500;
								}
								else
								{
									if(opdia>=6 && opdia<=7) //S�bado a domingo.
									{
										precio=12500;
									}
									else if(opdia>=6 && opdia<=7 && opcar==1) //S�bado a domingo preferencial.
									{
										precio=10500;
									}
								}
							} 
						}
						else
						{
							if (ozon==4) //Zona Lateral
							{
								if(opdia>=1 && opdia<=5)//Lunes a viernes.
								{
									precio=12500;
								}
								else
								{
									if((opdia==1 or opdia==2 or opdia==4) && opcar==1) //Lunes a viernes preferencial.
									{
										precio=8500;
									}
									else
									{
										if(opdia==6 or opdia==7) //Mi�rcoles y viernes a domingo.
										{
											precio=14000;
										}
										else if((opdia==3 or (opdia>=5 && opdia<=7)) && opcar==1) //Mi�rcoles y viernes a domingo preferencial.
										{
											precio=10000;
										}
									}
								} 
							}
						}
					}
				}
				
				if(opcar==2)
				{
					cout<<"\n�Posee alguno de los siguientes documentos?";
					cout<<"\n1) Carnet de estudiante"<<endl;
					cout<<"2) Certificado de pensi�n"<<endl;
					cout<<"3) Tarjeta de identidad de los hijos"<<endl;
					cout<<"4) Carnet de la caja de compensaci�n o cooperativa"<<endl;
					cout<<"5) No aplica"<<endl;
					cout<<"Opci�n: "; cin>>car;
				}
				
				
				system("cls");
				cout<<"Digite el n�mero de boletos a obtener: "; cin>>boletos;
				if(boletos<=0)
				{
					cout<<"\nEL NUMERO DE BOLETOS DEBE SER MAYOR A CERO!!!";
				}
				else
				{
					valor_t=precio*boletos;
				}
				if (car==1 or car==2)
				{
					descuento=precio*0.15;
				}
				else
				{
					if(car==3 && boletos>=3)
					{
						cout<<"\nIngrese el n�mero de hijos que tiene: "; cin>>hijos;
						
						if (hijos>=2)
						{
							descuento=(precio*hijos)*0.05;
						}
						else
						{
							cout<<"\nM�NIMO 2 HIJOS PARA OBTENER EL DESCUENTO !!";
						}	
					}
					else if(car==4)
					{
						descuento=valor_t*0.10;
					}
				}
				neto=valor_t-descuento;
				cout<<"\nIngrese su identificaci�n: "; cin>>id;
				if (id<=0)
				{
					cout<<"EL DATO DEBE SER MAYOR A CERO!!";
				}
				else
				{
					fflush(stdin);
					cout<<"Ingrese el nombre del espectador: "; getline(cin, nombre);
				}
				
				system("cls");
				cout<<"----------------CINEMAX--------------------";
				cout<<"\nD�a: "<<dia<<endl;
				cout<<"Identificaci�n: "<<id<<endl;
				cout<<"Nombre del espectador: "<<nombre<<endl;
				cout<<"Pel�cula: "<<peliselec<<endl;
				cout<<"Sala de proyecci�n: "<<sala<<endl;
				cout<<"Cantidad de boletos: "<<boletos<<endl;
				cout<<"Zona: "<<zona<<endl;
				cout<<"Precio de la boleta: "<<precio<<endl;
				cout<<"Valor total: $"<<valor_t<<endl;
				cout<<"Descuento: $"<<descuento<<endl;
				cout<<"Neto a pagar: $"<<neto;
		}
		else
		{
			system("pause");
			cout<<"\nDEBE ASIGNAR LAS PEL�CULAS A LA SALA ANTES DE VENDER LAS BOLETAS!!!";
		}
		break;
		case 3: break; 
		default: cout<<"\nLA OPCI�N DEBE ESTAR EN EL RANGO [1-3]";
	}



	
	return 0;
}
