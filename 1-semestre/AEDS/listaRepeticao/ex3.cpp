#include <iostream>
using namespace std;

void somaMedia(){
	int quantidade;
	cout<<"Digite a quantidade de numeros: ";
	cin>>quantidade;
	int num;
	int soma = 0;
	float media;
	float divisor = quantidade;
	
	while(quantidade>0){
		quantidade--;
		cin>>num;
		
		soma = soma + num;
			
	}
	
	media = soma/divisor;
	cout<<"soma: "<<soma<<endl;
	cout<<"media: "<<media;
}

	


int main(){
	
	somaMedia();
	
return 0;	
}