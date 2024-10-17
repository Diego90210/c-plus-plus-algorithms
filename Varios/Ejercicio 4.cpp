#include <iostream>
using namespace std;
int main (){
	char NomEmp[30];
float SaBaHo,SaHoOr,SaHoEx,SaNeto,ReteFuente;
int HoOr,HoEx;
cout<<"\n\tEntre nombre del empleado: ";
gets(NomEmp);
cout<<"\n\tEntre salario basico por hora: ";
cin>>SaBaHo;
cout<<"\n\tEntre horas ordinarias trabajadas: ";
cin>>HoOr;
cout<<"\n\tEntre horas extras trabajadas: ";
cin>>HoEx;
SaHoOr = SaBaHo * HoOr;
SaHoEx = SaBaHo * HoEx * 1.4;
ReteFuente = SaHoEx * 0.1;
SaNeto = SaHoOr + SaHoEx - ReteFuente;
cout<<"\n\n\t"<<NomEmp;
cout<<"\n\tSalario neto a pagar: $ "<<SaNeto;
cout<<"\n\tRetencion en la fuente: $ "<<ReteFuente;
system("PAUSE");
	
	
	return 0; 
}
