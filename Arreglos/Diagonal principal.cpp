#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	int matriz[100][100], c, f;

	cout<<"Digite el numero de filas: ";cin>>f;
	cout<<"Digite el numero de columnas: ";cin>>c;

	for(int i=0; i<f;i++){
		for(int j=0; j<c; j++){
			cout<<"Digite un numero: ["<<i<<"]["<<j<<"]";cin>>matriz[i][j];
		}
	}

	for(int i=0; i<f;i++){
			for(int j=0; j<c; j++){
				if(i==j){
				cout<<matriz[i][j];
				}
			}
			cout<<"\n";
		}



	return 0;
}