/*Dadas N ternas de valores, donde cada terna representa las longitudes de tres líneas
rectas, elabore un programa en C++ que calcule e imprima.
1) Número de triángulos que se pueden construir.
2) Número de triángulos equiláteros que se pueden construir.
3) Número de triángulos isósceles que se pueden construir.
4) Número de triángulos escalenos que se pueden construir.
5) Número de ternas con las cuales no se puedan construir triángulos.
Nota: Tres líneas rectas pueden formar un triángulo si la suma de las longitudes de dos
líneas cualesquiera es mayor que la longitud de la tercera. */
#include <iostream>
using namespace std;

int main(){
	int n, a, b, c, c1=0, c2=0, c3=0,c4=0,c5=0;
	
	do{
		cout<<"Ingrese N (mayor a cero): "; cin>>n;
	}while(n<=0);
	
	for(int i=1; i<=n; i++)
	{
		cout<<"\nTernas del triangulo No. "<<i<<":\n ";
		do{
		    
			cout<<"LADO 1 (mayor a cero): "; cin>>a;
	    }while(a<=0);
		
		do{
		    
			cout<<"LADO 2 (mayor a cero): "; cin>>b;
	    }while(b<=0);
	    
	    do{
		    
			cout<<"LADO 3 (mayor a cero): "; cin>>c;
	    }while(c<=0);
	    if(a+b>c && a+c>b && b+c>a)
	    {
	    	c1++;
			cout<<"SE PUEDE FORMAR UN TRIANGULO\n";
	    	if(a==b && b==c)
	    	{
	    		c2++;
	    		cout<<"\nEL TRIANGULO ES EQUILATERO.\n ";
	    		
			}
			else
			{
				if(a!=b && b!=c && a!=c)
				{
					c4++;
					cout<<"\nEL TRIANGULO ES ESCALENO.\n ";
				}
				else
				{
					c3++;
					cout<<"\nEL TRIANGULO ES ISOSCELES.\n ";
				}
			} 
		}
		else
		{
			c5++;
			cout<<"\nNO SE PUEDE FORMAR UN TRIANGULO\n";
		}
	}
	cout<<"\nCANTIDAD DE TRIANGULOS QUE SE PUEDEN CONSTRUIR: "<<c1<<endl;
	cout<<"\nCANTIDAD DE TRIANGULOS EQUILATEROS FORMADOS: "<<c2<<endl;
	cout<<"\nCANTIDAD DE TRIANGULOS ISOSCELES FORMADOS: "<<c3<<endl;
	cout<<"\nCANTIDAD DE TRIANGULOS ESCALENOS FORMADOS: "<<c4<<endl;
	cout<<"\nCANTIDAD DE TRIANGULOS QUE NO SE PUEDEN CONSTRUIR: "<<c5<<endl;

return 0;
}