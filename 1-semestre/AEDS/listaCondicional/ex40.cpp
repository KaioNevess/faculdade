#include <iostream>
using namespace std;

/*
Escreva um algoritmo que leia o código de um aluno e suas três notas. 
Calcule a média ponderada do aluno, considerando que o peso para a maior nota seja 4 e	para as duas restantes, 3.
 Mostre o código do aluno, suas três notas, a média calculada e uma mensagem "APROVADO" se a média for maior ou igual a 50 
 e "REPROVADO" se a média for menor que 50.
*/


float mediaPond(float n1, float n2, float n3){
	if(n1>n2 && n1>n3){
		float soma=(n1*4)+(n2*3)+(n3*3);
		float divisao=soma/10;
		return divisao;
	}else if(n2>n1 && n2>n3){
		float soma=(n1*3)+(n2*4)+(n3*3);
		float divisao=soma/10;
		return divisao;
	}else if(n3>n1 && n3>n2){
		float soma=(n1*3)+(n2*3)+(n3*4);
		float divisao=soma/10;
		return divisao;
	}else{
		float soma= n1*4 +n2*3 +n3*3;
		float divisao= soma/10;
		return divisao;
	}
}

void aprovacao(int nota){
	if(nota>=90){
		cout<<"Conceito: A"<<endl;
	}
	else if(nota>=75 && nota<90){
		cout<<"Conceito: B"<<endl;
	}
	else if(nota>= 60 && nota <75){
		cout<<"Conceito: C\"<<endl;
	}else{
		cout<<"Reprovado!!"<<endl;
	}
}

int main(){
	float n1,n2,n3;
	string codMatricula;
	
	cout<<"---------  Prezado aluno -------------"<<endl;
	cout<<"Informe seu codigo de matricula: ";
	cin>>codMatricula;
	cout<<"Informe a nota 1: ";
	cin>>n1;
	cout<<"Informe a nota 2: ";
	cin>>n2;
	cout<<"Informe a nota 3: ";
	cin>>n3;
	cout<<"---------------------------------------"<<endl;
	cout<<"Media ponderada: "<<mediaPond(n1,n2,n3)<<endl;
	aprovacao(mediaPond(n1,n2,n3));
	
	return 0;
	
}