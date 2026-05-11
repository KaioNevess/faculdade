/*Supondo	que a população de um país A seja da ordem de 80000 
habitantes com uma taxa anual de crescimento de 3% e que a população de B 
seja 200000 habitantes com uma taxa de crescimento de 1.5%. 
Faça um	programa que calcule e escreva o número de anos necessários 
para que a população do país A ultrapasse ou iguale a população do 
país B, mantidas as taxas de crescimento.*/

#include<iostream>
using namespace std;

void contagem(){
	float paisA= 80000;
	float paisB= 200000;
	int anos = 0;
	
	while(paisA<paisB){
		paisA= paisA * 1.03;
		paisB = paisB * 1.015;
		
		anos++;
			
	}
	
	cout<<"Igualara em "<<anos<<" anos";
		
}

int main(){
	contagem();
	
	return 0;
}