#include "Carro.h"
#include <string>
#include <iostream>
using namespace std;

Carro::Carro(){
	this->nome ="";
	this->marca="";
	this->motorizacao=0.0;
	this->cor="";
	this->valor=0.0;
	
}

//metodos set

void Carro::setNome(string nome){
	this->nome = nome;
}

void Carro::setMarca(string marca){
	this->marca = marca;
}

void Carro::setMotorizacao(float motorizacao){
	this->motorizacao = motorizacao;
}

void Carro::setCor(string cor){
	this->cor = cor;
}

void Carro::setValor(float  valor){
	this->valor=valor;
}

//metodos get
string Carro::getNome(){
	return this->nome;
}

string Carro::getMarca(){
	return this->marca;
}

float Carro::getMotorizacao(){
	return this->motorizacao;
}

string Carro::getCor(){
	return this->cor;
}

float Carro::getValor(){
	return this->valor;
}

//prencher e imprimir
		void Carro::preencher(){
			cout<<"Nome: ";
			cin>>this->nome;
			cout<<"Marca: ";
			cin>>this->marca;
			cout<<"Motorização: ";
			cin>>this->motorizacao;
			cout<<"Cor: ";
			cin>>this->cor;
			cout<<"Valor: ";
			cin>>this->valor;
		}
		
		void Carro::imprimir(){
			
			cout<<"Nome: "<< nome << endl
				<<"Marca: "<< marca <<endl
				<<"Motorização: "<< motorizacao <<endl
				<<"Cor: "<<cor<<endl
				<<"Valor: "<<valor<<endl;
		}
