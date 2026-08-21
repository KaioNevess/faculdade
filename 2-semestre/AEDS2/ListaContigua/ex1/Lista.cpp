#include "Lista.h"
#include "Produto.h"
using namespace std;
#include<iostream>

Lista::Lista(){
	this->tam=0;
	this->quant=0;
	this->lista = NULL;
}

Lista::Lista(int tamanho){
	this->tam=tamanho;
	this->quant=0;
	this->lista = new Produto[this->tam];
}

void Lista::insert(Produto &novo){
	if(quant<tam){
		shiftEnd();
		lista[0].copiar(novo);
		quant++;
	}else{
		cout<<"Lista cheia!"<<endl;
	}
	
}

void Lista::shiftEnd(){
	for(int i=quant-1; i>0; i++){
		lista[i].copiar(lista[i-1]);
	}
}

void Lista::remove(){
	if(quant>0){
		shiftFront();
		quant--;
	}else{
		cout<<"Lista vazia!"<<endl;
	}
}

void Lista::shiftFront(){
	for(int i=0; i<=quant-1; i++){
		lista[i].copiar(lista[i+1]);
	}
	
}