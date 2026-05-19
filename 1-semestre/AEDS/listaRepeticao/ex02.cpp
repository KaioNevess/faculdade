#include <iostream>
using namespace std;

void maiorMenor(){
	int quantidade;
	cout<<"Digite a quantidade de numeros: ";
	cin>>quantidade;
	float num;
	float maior = 0;
	
	int valor_inicial=quantidade;
	
	while(quantidade>0){
		cout<<"Digite aqui: ";
		cin>>num;
		
		if(quantidade == valor_inicial){
			maior = num;
		}
		
		quantidade--;
		
		
		
		
		if(num>maior){
			maior = num;
		}
	}
	cout<<"Esse e o maior numero: "<<maior;
}

int main(){
	
	maiorMenor();
	
return 0;	
}