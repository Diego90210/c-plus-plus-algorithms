#include <iostream>
using namespace std;
int main(){
	int i;
	float cali, calip=0, calib=99999, suma=0; 
	for (i=1; i<=10; i++){
		cout<<i<<".Ingrese la calificacion: "; cin>>cali;
		suma+=cali; 
		if(cali<calib){
			calib=cali;
		}
	}
	calip = (suma/10);
	cout<<"La calificacion promedio es: "<<calip<<endl;
	cout<<"La calificacion mas baja es: "<<calib<<endl;
	
	
	return 0;
}