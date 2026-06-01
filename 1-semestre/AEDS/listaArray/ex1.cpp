#include <iostream>
using namespace std;

/*Faça um programa que cria um vetor com 5 elementos inteiros, lê 5 números do teclado, armazena os números no vetor e imprime o vetor na ordem inversa.*/

int main(){
	
	int vetor[5];
	
	for(int i=0; i<5; i++){
		cin>>vetor[i];	
	}
	
	for(int i=4; i>=0; i--){
		cout<<vetor[i]	;
	}
}