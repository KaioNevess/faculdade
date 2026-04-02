#include <iostream>
using namespace std;

void desconto(bool pagarAvista, bool vip, bool maior300){
	if(pagarAvista==true){
		cout<<"O cliente e VIP? (1-para verdadeiro 0-para falso) :";
		cin>>vip;
		cout<<"O cliente gastou mais que 300 reais em compras? (1-para verdadeiro 0-para falso) :";
		cin>>maior300;
		if(vip==true || maior300==true){
			cout<<"Voce tem direito a desconto";
		}else{
			cout<<"Voce não tem desconto";
		}
	}else{
		cout<<"Voce não tem desconto";
	}	
}

int main(){
	bool pagarAvista, vip, maior300;
	cout<<"O cliente pagou a vista? (1-para verdadeiro 0-para falso) :";
	cin>>pagarAvista;
	desconto(pagarAvista, vip, maior300);
	
	return 0;
	
}
