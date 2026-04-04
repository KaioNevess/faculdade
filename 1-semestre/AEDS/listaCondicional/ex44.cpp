#include <iostream>
using namespace std;

float compras(string codigo, int quantidade){
	if (codigo=="1001"){
		float valor=5.32*quantidade;
		return valor;	
	}else if(codigo=="1324"){
		float valor=6.45*quantidade;
		return valor;	
	}else if(codigo=="6548"){
		float valor=2.37*quantidade;
		return valor;
	}else if(codigo=="0987"){
		float valor=5.32*quantidade;
		return valor;
	}else if(codigo=="7623"){
		float valor=6.45*quantidade;
		return valor;
	}
}

int main(){
	string codigo;
	int quantidade;
	
	cout<<"Informe o codigo da compra: ";
	cin>>codigo;
	cout<<"Informe a quantidade da compra: ";
	cin>>quantidade;
	
	cout<<"O valor total da compra e de: "<<compras(codigo, quantidade);
}