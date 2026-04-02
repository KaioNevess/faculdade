#include <iostream>
using namespace std;

void parImpar(int num){
	if(num%2==0){
		cout<<"Esse numero e par";
	}else{
		cout<<"Esse numero e impar";
	}
}
void positivoNegativo(int num){
	if(num>0){
		cout<<" e tambem e positivo";
	}else if(num==0){
		cout<<" e, e o numero 0";
	}else{
		cout<<" e tambem e negativo";
	}
}


int main(){
	int num;
	cout<<"Digite um numero pora saber se ele e par ou impar: ";
	cin>>num;
	parImpar(num); 
	positivoNegativo(num);
	
	return 0;
}
