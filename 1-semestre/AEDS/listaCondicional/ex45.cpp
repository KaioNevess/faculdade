#include <iostream>
using namespace std;

float aumento(float salario, int cod){
	switch(cod){
		case 101:{
			float salarioN= salario+(salario*0.10);
			return salarioN;
			break;
		}
		case 102:{
			float salarioN= salario+(salario*0.20);
			return salarioN;
			break;
		}
		case 103:{
			float salarioN= salario+(salario*0.30);
			return salarioN;
			break;
		}
		default:{
			float salarioN= salario+(salario*0.40);
			return salarioN;
			break;
		}		
	}	
}

int main(){
	float salario; int codigo;
	
	cout<<"Codigo |    Cargo   | Percentual"<<endl;
	cout<<"  101  |   Gerente  |    10%    "<<endl;
	cout<<"  102  | Engenheiro |    20%    "<<endl;
	cout<<"  103  |   Tecnico  |    30%    "<<endl;
	
	cout<<"Informe o seu salario: ";
	cin>>salario;
	
	cout<<"Informe o codigo da sua profissao: ";
	cin>>codigo;
	
	cout<<"Seu novo salario e de: R$ "<<aumento(salario, codigo);
	
}