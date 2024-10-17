/*Elabore un programa en C++ que calcule e imprima las tablas de multiplicar dentro
de un rango de valores dado por dos enteros M y N. Se debe imprimir el multiplicando, el
multiplicador y el producto*/
#include <iostream>
using namespace std;
int main(){
int m, n, multiplicando, multiplicador, producto;	
do{
	cout<<"Ingrese el valor de M: "; cin>>m;
	cout<<"Ingrese el valor de N: "; cin>>n;    
	if(m>n) cout<<"El valor de M no puede ser superior a N\n\n";
}while(m>n); //Saldrá del ciclo cuando se ingresen valores correctos para m y n

for(multiplicando=m; multiplicando<=n; multiplicando++)
{ 
 
 cout<<"\nTABLA DEL: "<<multiplicando<<endl; 
 for(multiplicador=1; multiplicador<=10; multiplicador++)
 {
 	cout<<multiplicando<<" * "<<multiplicador<<" = "<<multiplicando*multiplicador<<endl;
 }		

}
	
	
	
	return 0;
}