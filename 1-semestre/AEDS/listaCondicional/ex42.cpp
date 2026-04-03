#include <iostream>
using namespace std;

void estacaoAno(int mes){
	switch(mes){
		case 12:	
		case 1:	
		case 2:	
			cout<<"Verao";
			break;
		case 3:
		case 4:
		case 5:
			cout<<"Outono";
			break;
		case 6:
		case 7:
		case 8:
			cout<<"Inverno";
		default:
			cout<<"Primavera";
		
	}
}

int main(){
	int mes;
	cout<<"Informe o mes (numero): ";	
	cin>>mes;
	estacaoAno(mes);
	
}