#include <iostream>
using namespace std;
int main()
{
	int op, pf=1200, sc=2500, p=1800, e=1700, a=2000, g=1600, vt=1000, d=200, vuelto;
	int moneda_quinientos, moneda_doscientos, moneda_cien, dinero_total, mqv, mdv, mcv;
	
	cout<<"CANTIDAD MINIMA ACCEPTADA $200- MAXIMA $2500\nCUALQUIER CANTIDAD SUPERIOR A ESTA SERA CONSIDERADA COMO PROPINA";
	
	cout<<"\nINGRESE LA CANTIDAD DE MONEDAS DE $500: "; cin>>moneda_quinientos;
	cout<<"\nINGRESE LA CANTIDAD DE MONEDAS DE $200: "; cin>>moneda_doscientos;
	cout<<"\nINGRESE LA CANTIDAD DE MONEDAS DE $100: "; cin>>moneda_cien;
		mqv=moneda_quinientos*500;
		mdv=moneda_doscientos*200;
		mcv=moneda_cien*100;
	dinero_total=mqv+mdv+mcv;
	cout<<"\nDINERO TOTAL INGRESADO: "<<dinero_total<<endl;

	cout<<"------------------------------------------------------------------------------";
	
	cout<<"\nMaquina dispensadora 'EL PUENTE'";
	cout<<"\n1.Papas Fritas                  $1200";
	cout<<"\n2.Sandwich Combinado            $2500";
	cout<<"\n3.Pescadito                     $1800";
	cout<<"\n4.Empanada                      $1700";
	cout<<"\n5.Arepa                         $2000";
	cout<<"\n6.Gaseosa                       $1600";
	cout<<"\n7.Vaso de Te                    $1000";
	cout<<"\n8.Dulce                         $200";
	cout<<"\n9.Salir\n";
	cout<<"DIGITE SU OPCION:  ";
	cin>>op;
	
	cout<<"------------------------------------------------------------------------------"<<endl;
					
		switch (op) //opcion
		 {
			case 1:
				cout<<"\nPAPAS FRITAS\n";
	 cout<<"------------------------------------------------------------------------------";
					 if(dinero_total <pf)
					 {
              			cout<<"el valor es insuficiente";
					 }
             		 else 
					 {
             			 if (dinero_total == pf)
						 {
             				cout<<"Gracias por su compre :D";
						 }
            		 else if (dinero_total > pf )
					 	 {
              			vuelto = dinero_total - pf;
              cout<<"\nGracias por su compra :D\nSu cambio es:  "<<vuelto<<endl;
			  			}
          			 }	
			break;
		    case 2:
		    	cout<<"\nSANDWICH COMBINADO\n";
	 cout<<"------------------------------------------------------------------------------";
						if(dinero_total <sc)
					 {
              			cout<<"el valor es insuficiente";
					 }
             		 else 
					 {
             			 if (dinero_total==sc)
						 {
             				cout<<"Gracias pro su compre :D";
						 }
            		 else if (dinero_total > sc )
					 	 {
              			vuelto = dinero_total - sc;
              cout<<"\nGracias por su compra :D\nSu cambio es:  "<<vuelto<<endl;
			  			}
          			 }
			break;
			case 3:
				cout<<"\nPESCADITO\n";
 	cout<<"------------------------------------------------------------------------------";
					 if(dinero_total<p)
					 {
              			cout<<"el valor es insuficiente";
					 }
             		 else 
					 {
             			 if (dinero_total==p)
						 {
             				cout<<"Gracias pro su compre :D";
						 }
            		 else if (dinero_total>p)
					 	 {
              			vuelto = dinero_total - p;
              cout<<"\nGracias por su compra :D\nSu cambio es:  "<<vuelto<<endl;
			  			}
          			 }
			break;
			case 4:
				cout<<"\nEMPANADA\n";
 	cout<<"------------------------------------------------------------------------------";
					 if(dinero_total<e)
					 {
              			cout<<"el valor es insuficiente";
					 }
             		 else 
					 {
             			 if (dinero_total==e)
						 {
             				cout<<"Gracias pro su compre :D";
						 }
            		 else if (dinero_total > e )
					 	 {
              			vuelto = dinero_total - e;
              cout<<"\nGracias por su compra :D\nSu cambio es:  "<<vuelto<<endl;
			  			}
          			 }
			break;
			case 5:
				cout<<"\nAREPA\n";
 	cout<<"------------------------------------------------------------------------------";
					 if(dinero_total<a)
					 {
              			cout<<"el valor es insuficiente";
					 }
             		 else 
					 {
             			 if (dinero_total==a)
						 {
             				cout<<"Gracias pro su compre :D";
						 }
            		 else if (dinero_total>a)
					 	 {
              			vuelto = dinero_total-a;
              cout<<"\nGracias por su compra :D\nSu cambio es:  "<<vuelto<<endl;
			  			}
          			 }
			break;
			case 6:
				cout<<"\nGASEOSA\n";
 	cout<<"------------------------------------------------------------------------------";
				 if(dinero_total<g)
					 {
              			cout<<"el valor es insuficiente";
					 }
             		 else 
					 {
             			 if (dinero_total==g)
						 {
             				cout<<"Gracias pro su compre :D";
						 }
            		 else if (dinero_total>g)
					 	 {
              			vuelto = dinero_total - g;
              cout<<"\nGracias por su compra :D\nSu cambio es:  "<<vuelto<<endl;
			  			}
          			 }
			break;
			case 7:
				cout<<"\nVASO DE TE\n";
 	cout<<"------------------------------------------------------------------------------";
					 if(dinero_total<vt)
					 {
              			cout<<"el valor es insuficiente";
					 }
             		 else 
					 {
             			 if (dinero_total==vt)
						 {
             				cout<<"Gracias pro su compre :D";
						 }
            		 else if (dinero_total>vt)
					 	 {
              			vuelto = dinero_total-vt;
              cout<<"\nGracias por su compra :D\nSu cambio es:  "<<vuelto<<endl;
			  			}
          			 }
			break;
			case 8:
				cout<<"\nDULCE\n";
 	cout<<"------------------------------------------------------------------------------";
					 if(dinero_total<d)
					 {
              			cout<<"el valor es insuficiente";
					 }
             		 else 
					 {
             			 if (dinero_total==d)
						 {
             				cout<<"Gracias pro su compre :D";
						 }
            		 else if (dinero_total>d)
					 	 {
              			vuelto = dinero_total - d;
              cout<<"\nGracias por su compra :D\nSu cambio es:  "<<vuelto<<endl;
			  			}
          			 }
			break;
		/*	case 9:
				cout<<"\nSALIR\n";
			break;*/
		default: cout<<"\nPRESIONE ENTER PARA SALIR DE LA APLICACION\n";
	}
cout<<"------------------------------------------------------------------------------";
	
	switch (vuelto)
	{
		case 100 : cout<<"\nSU CAMBIO ES UNA MONEDA DE 100";
		break;
		case 200 : cout<<"\nSU CAMBIO ES UNA MONEDA DE 200";
		break;
		case 300 : cout<<"\nSU CAMBIO ES UNA MONEDA DE 200 Y UNA DE 100";
		break;
		case 400 : cout<<"\nSU CAMBIO ES DE DOS MONEDAS DE 200";
		break;
		case 500 : cout<<"\nSU CAMBIO ES DE DOS MONEDAS DE 500";
		break;
		case 600 : cout<<"\nSU CAMBIO ES UNA MONEDA DE 500 Y UNA DE 100";
		break;
		case 700 : cout<<"\nSU CAMBIO ES UNA MONEDA DE 500 Y UNA DE 200";
		break;
		case 800 : cout<<"\nSU CAMBIO ES UNA MONEDA DE 500, UNA DE 200 Y UNA DE 100";
		break;
		case 900 : cout<<"\nSU CAMBIO ES UNA MONEDA DE 500 Y DOS DE 200";
		break;
		default : cout<<"\nINGRESO UNA CANTIDAD INVALIDA, SU DINERO SERA CONSIDERADO COMO PROPINA\n"; //tas fumao
	}
	
return 0;
}