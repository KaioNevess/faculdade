#include <iostream>
#include<string>
using namespace std;

void validarSenha(string usuario, string senha){
	while(usuario == senha){
		cout<<"\n Sua senha e usuario nao podem ser iguais!! "<<endl;
		cout<<"----------------------------------------------"<<endl;
		cout<<"Digite seu usuario: ";
		cin>>usuario;
		
		cout<<"Digite sua senha: ";
		cin>>senha;
	}
	
	cout<<"\n Login bem sucedido!!";
}

int main(){
	string usuario, senha;
	cout<<"Digite seu usuario: ";
	cin>>usuario;
		
	cout<<"Digite sua senha: ";
	cin>>senha;
	
	validarSenha(usuario, senha);
}