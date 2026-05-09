#include <iostream>
#include <string>
using namespace std;

void verificacaoIdade(int idade){
	
	while(idade > 150 || idade < 0){
		cout<<"Idade invalida, informe novamente: ";
		cin>>idade;
	}
}

void verificacaoSalario(float salario){
	
	while(salario<0){
		cout<<"Salario invalido, informe novamente: ";
		cin>>salario;
	}
}

void verificacao_estadoCivil(char estadoCivil){
	if(estadoCivil == 's' || estadoCivil == 'c' || estadoCivil == 'v' || estadoCivil == 'd' ){		
		cout<<"\n Finalizado"<<endl;
	}
	else{
		while(true){
			cout<<"Estado civil invalido, informe novamente: ";
			cin>>estadoCivil;
			
			if(estadoCivil == 's' || estadoCivil == 'c' || estadoCivil == 'v' || estadoCivil == 'd' ){		
				cout<<"\n Finalizado"<<endl;
				break;
			}
		}
	}
}

int main(){
	int idade;float salario;char estadoCivil;string conversao;
	
	cout<<"Informe sua idade(entre 0 e 150): ";
	cin>>idade;
	verificacaoIdade(idade);
	
	cout<<"Informe seu salario: ";
	cin>>salario;
	verificacaoSalario(salario);
	
	cout<<"Informe seu estado civil:('s', 'c', 'v', 'd'): ";
	cin>>estadoCivil;
	verificacao_estadoCivil(estadoCivil);
	
	cout<<"Dados informados: "<<endl;
	cout<<"Sua idade: "<<idade<<endl;
	cout<<"Seu salario: "<<salario<<endl;
	
	switch(estadoCivil){
		case 's':
			conversao = "Solteiro";
			cout<<"Seu estado civil: "<<conversao<<endl;
			break;
		case 'c':
			conversao = "Casado";
			cout<<"Seu estado civil: "<<conversao<<endl;
			break;
		case 'v':
			conversao = "Viuvo";
			cout<<"Seu estado civil: "<<conversao<<endl;
			break;
		case 'd':
			conversao = "Divorciado";
			cout<<"Seu estado civil: "<<conversao<<endl;
			break;
			
	}
	
	
	
}