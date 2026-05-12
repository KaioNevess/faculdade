#include <iostream>
using namespace std;

void parImpar(){
	int num =0;
	char r;
	
	do{
		int contadorPar;
		int contadorImpar;
		
		for(int i = 0; i<10; i++){
			cout<<": ";
			cin>>num;
			
			if(num%2==0){
				contadorPar++;
			}else{
				contadorImpar++;
			}
		}
		
		cout<<"\n Numero de pares: "<<contadorPar<<endl;
		cout<<"\n Numero de impares: "<<contadorImpar;
		
		cout<<"\n Deseja continuar? (s/n)";
		cin>>r;
		
		contadorPar = 0;
		contadorImpar = 0;
	}
	while(r=='s');
}

int main(){
	parImpar();
}