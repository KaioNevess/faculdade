#include <iostream>
using namespace std;

void parImpar(int num){
	int pares = 0 ; int impares = 0;
	do{
		cout<<"Digite aqui os numeros: (digite 0 para parar)" ;
		cin>>num;
		if(num%2==0){
		  pares += 1;	
		}else{
			impares += 1;
		}
	}
	while(num!=0);
	pares -= 1;
	cout<<"Numeros de pares: "<<pares<<endl;
	cout<<"Numeros de impares: "<<impares<<endl;
}

int main(){
	
	int n;
	parImpar(n);
}