/*Coldeportes Bolívar está interesada en promover el Basketbol y para ello desea conocer
personas que tengan las siguientes características:
Edad: Menor de 18 años.
Estatura: Mínima, 1,80 cm.
Peso: Máximo, 80 Kg.
*/

#include <iostream>
using namespace std;

int main(){
	float edad, estatura, peso;
	
	cout<<"Digite su edad: ";
	cin>>edad;
	
	cout<<"Digite su estatura: ";
	cin>>estatura;
	
	cout<<"Digite su peso: ";
	cin>>peso; 
	
	if (edad < 18 && estatura >= 1.80 && peso <= 80){
		cout<<"¡Felicitaciones! , usted ha sido elegido para formar parte del equipo de basketball.";
		
		
		
	}
	else {
		cout<<"Jodase, no cumple con las caracteristicas requeridas, HIJO DE LA GRAN PUTA :)";
	}
	
	
	
	return 0; 
}

