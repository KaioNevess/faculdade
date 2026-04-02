#include <iostream>
using namespace std;

/*
1. Tendo como dados de entrada a **altura** e	o **sexo** de uma pessoa (M masculino e F feminino), construa um algoritmo que calcule seu peso ideal, utilizando as seguintes	fórmulas:
    - para homens: (72.7 * Altura)	- 58
    - para mulheres: (62.1 * Altura)	- 44.7
*/

void pesoIdeal(char sexo, float h){
	if(sexo=='M' || sexo=='m'){
		float peso=(72.7*h)-58;
		cout<<"Seu peso ideal E: "<<peso;
	}else if(sexo=='F'||sexo=='f'){
		float pesoF=(62.1*h)-44.7;
		cout<<"Seu peso ideal E: "<<pesoF;
	}else{
		cout<<"Sexo invalido"<<endl;
	}
	
}

int main(){
	char sexo;
	float h;
	
	cout<<"Digite seu sexo: ";
	cin>>sexo;
	cout<<"Digite sua altura para saber seu peso ideal: ";
	cin>>h;
	pesoIdeal(sexo, h);
	
	return 0;
}