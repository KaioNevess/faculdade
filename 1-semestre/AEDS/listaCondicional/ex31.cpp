#include <iostream>
using namespace std;

void login(string tentUsuario, string tentSenha){
	
	//usei o .compare para comparar as strings podendo guarda-las em variaveis o que não consigui usando "==".
	string usuario="admin";
	string senha="admin123";
	
	if(usuario.compare(tentUsuario)==0 && usuario.compare(tentSenha)){
		cout<<"Acesso liberado!";	
	}else{
		cout<<"Usuario ou senha incorretos!";
	}
	
	//exemplo sem usar variaveis 
	
	/*
	if(usuario == "admin" && senha == "admin123"){
		cout<<"Acesso liberado!";	
	}else{
		cout<<"Usuario ou senha incorretos!";
	}
	*/
}

int main(){
	string tentUsuario, tentSenha;
	cout<<"=============================="<<endl;
	cout<<"            LOGIN             "<<endl;
	cout<<"=============================="<<endl;
	cout<<"                              "<<endl;
	cout<<"Usuario: ";
	cin>>tentUsuario;
	cout<<"Senha: ";
	cin>>tentSenha;
	cout<<"                              "<<endl;
	login(tentUsuario, tentSenha);
	
	return 0;
	
	
}
