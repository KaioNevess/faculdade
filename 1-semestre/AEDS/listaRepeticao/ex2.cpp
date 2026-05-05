#include <iostream>
using namespace std;

void maiorMenor(){
	int quantidade;
	cout<<"Digite a quantidade de numeros: ";
	cin>>quantidade;
	float num;
	float maior = 0;
	
	while(quantidade>0){
		quantidade--;
		cin>>num;
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