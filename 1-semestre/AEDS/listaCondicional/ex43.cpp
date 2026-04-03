#include <iostream>
using namespace std;

void diaSemana(int dia){
	switch(dia){
		case 1:
			cout<<"Domingo"<<endl;
			break;
		case 2:
			cout<<"Segunda-Feira"<<endl;
			break;
		case 3:
			cout<<"Terca-Feira"<<endl;
			break;
		case 4:
			cout<<"Quarta-Feira"<<endl;
			break;
		case 5:
			cout<<"Quinta-Feira"<<endl;
			break;
		case 6:
			cout<<"Sexta-Feira"<<endl;
			break;
		case 7:
			cout<<"Sabado"<<endl;
			break;
		default:
			cout<<"Dia da semana invalido";
	}
}

int main(){
	int dia;
	cout<<"Digite o dia(numero): ";
	cin>>dia;
	diaSemana(dia);
}