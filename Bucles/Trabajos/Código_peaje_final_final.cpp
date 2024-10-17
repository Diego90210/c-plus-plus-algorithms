#include <iostream>
using namespace std;
int main()
{
	double dinero_total;
    double n, a, b, c;
    double contador_a, contador_b, contador_c, descuadre, a_total, b_total, c_total, neto_tiquetes=0, descuadre_t=0;
    double total_a, total_b, total_c, total_total, acumular_a=0, acumular_b=0, acumular_c=0;
    double descuadre_max=0, dia_max=1, por_a=0, por_b=0, por_c=0,exceso=0,perdida_dia=0,perdida_total;
	char tiq;
    
    do{
        cout<<"Ingrese la cantidad de dias a revisar: "; cin>>n;
    }while (n<=0);
    
	for (int i=1;i<=n;i++)
	{
		contador_a=0; contador_b=0; contador_c=0, dinero_total=0, neto_tiquetes=0, descuadre=0;
		cout<<"\n\tDia No."<<i<<endl;
		cout<<"\nIngrese el dinero obtenido en el dia No. "<<i<<": "; cin>>dinero_total;
		
		if (dinero_total>0)
		{
			do
            {   cout<<"Ingrese el tiquete (A-B-C nota: D para detener): "; cin>>tiq;
            	if (tiq=='A' or tiq=='a')
                {    
                    a=5000;
					contador_a++;
                }
                else if (tiq=='B' or tiq=='b')
                {
                    b=7500;
                    contador_b++;
                }
                else if (tiq=='C' or tiq=='c')
                {
                    c=18000;
                    contador_c++;
                }
                else if (tiq=='D' or tiq=='d')
                {
                    break;
				}
				
			}while(tiq!='D' or tiq!='d');
		}
		acumular_a+=contador_a; //A
		acumular_b+=contador_b; //A
		acumular_c+=contador_c; //A
		a_total=a*contador_a; 
        b_total=b*contador_b;
        c_total=c*contador_c;
		neto_tiquetes = a_total+b_total+c_total;
	    descuadre = dinero_total - neto_tiquetes;
	
	    if (neto_tiquetes == dinero_total)
	    {
		cout<<"\nCIERRE DE CAJA EXITOSO."<<endl;
	    }
	    
	    else if (dinero_total < neto_tiquetes)
	    {
		descuadre*=(-1);
		cout<<"\nEXISTE UN DESCUADRE NEGATIVO DE $"<<descuadre<<endl;
		perdida_dia+=descuadre; // E
	    }
	    
	    else if (dinero_total > neto_tiquetes)
	    {
		cout<<"\nEXISTE UN DESCUADRE POSITIVO DE $"<<descuadre<<endl;
		exceso+=descuadre;
	    }
	    if(descuadre_max < descuadre) //PUNTO B
	    {
	    descuadre_max=descuadre; // b
		dia_max=i;	//b
		}
		
		descuadre_t+=descuadre; //PUNTO C
	}
	total_a=acumular_a*5000; // A
	total_b=acumular_b*7500; // A
	total_c=acumular_c*18000; // A
	total_total=(total_c+total_b+total_a); // A
	cout<<"\nNETO TIQUETES: $"<<total_total<<endl; // A
	cout<<"TOTAL VALOR TIQUETES DE A: $"<<total_a<<endl; // A
	cout<<"TOTAL VALOR TIQUETES DE B: $"<<total_b<<endl; // A
	cout<<"TOTAL VALOR TIQUETES DE C: $"<<total_c<<endl; //TODA LA LINEA ES EL PUNTO A.
	
	cout<<"\nEL DESCUADRE MAXIMO FUE DE: $"<<descuadre_max<<" Y FUE EN EL DIA: "<<dia_max<<endl;
	
	cout<<"\nEL DESCUADRE TOTAL FUE DE: $"<<descuadre_t<<endl; //PUNTO C
	
	por_a=(total_a*100)/total_total; //D
	por_b=(total_b*100)/total_total; //D
	por_c=(total_c*100)/total_total; //D
	
	cout<<"\nEL PORCENTAJE DE VENTAS DE TIQUETES A FUE DE: "<<por_a<<"%"<<endl; //D
	cout<<"EL PORCENTAJE DE VENTAS DE TIQUETES B FUE DE: "<<por_b<<"%"<<endl; //D 
	cout<<"EL PORCENTAJE DE VENTAS DE TIQUETES C FUE DE: "<<por_c<<"%"<<endl; //D
	
	
	perdida_total=perdida_dia-exceso;
	if (perdida_total>0)
	{	
	cout<<"\nLA PERDIDA FUE DE: $"<<perdida_total<<endl;
	}
	else
	{
	cout<<"\nNO SE PRESENTARON PERDIDAS."<<endl;
	}
	
	return 0;
}
