#include <iostream>
using namespace std;

void parImpar(int num){
	if(num%2==0){
		cout<<"Esse numero e par";
	}else{
		cout<<"Esse numero e impar";
	}
}
int main(){
	int num;
	cout<<"Digite um numero pora saber se ele e par ou impar: ";
	cin>>num;
	parImpar(num);
	
	return 0;
}
