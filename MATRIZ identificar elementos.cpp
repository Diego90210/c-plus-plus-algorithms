//programa que permite cargar datos en una matriz e imprimirlos 
#include <iostream>
using namespace std;
int main(){       
       int mat[2][3]; //declaraci�n de la matriz 2 filas por 3 columnas

//procedimiento para recorrer una matriz y guardar los datos que ingrese el usuario       
for(int f = 0; f < 2; f++) //referenciar el �ndice de la fila 
{
	for(int c = 0; c< 3; c++) //referenciar el �ndice de la columna 
	{
		     cout<<"Ingrese un valor para la posicion " <<f <<","<<c <<": ";
             cin>>mat[f][c];  
	}    	           
}
cout<<endl;

//procedimiento para recorrer una matriz e imprimir los datos que est�n almacenados en ella    
for(int f = 0; f < 2; f++){
	for(int c = 0; c< 3; c++) {
		     cout<<"Valor almacenando en la posicion:  "<<f <<","<<c <<" es: "<<mat[f][c] <<endl;  
	}     	           
}
 
 
}
