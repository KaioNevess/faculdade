#include <iostream>
using namespace std;

void calcIdade(int idade){
	int diferenca = 18 - idade;
	
	if(idade>=18){
		cout<<"Voce e maior de idade, e pode tirar sua carteiira de motorista";
		
	}
	else{
		
		cout<<"Voce ainda e menor de idade, e tem que esperar "<<diferenca<< " ano(s) para tirar sua carteira de motorista";
	}
}

int main(){
	int idade = 0;
	cout<<"Digite sua idade para ver se ja e apto a tirar sua carteira de identidade: ";
	cin>>idade;
	calcIdade(idade);
}
