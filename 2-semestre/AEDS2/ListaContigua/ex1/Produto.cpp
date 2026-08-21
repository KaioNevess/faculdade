#include "Produto.h"
#include <string>
#include<iostream>
using namespace std;


Produto::Produto()
{
	this->nome="";
	this->preco=0.0;
}

void Produto::setNome(string nome){
	this->nome=nome;
}

void Produto::setPreco(float preco){
	this->preco=preco;
}

string Produto::getNome(){
	return this->nome;
}

float Produto::getPreco(){
	return this->preco;
}

void Produto::preencher(){
	cout<<"Nome: ";
	cin>>nome;
	cout<<"Preco:";
	cin>>preco;
}

void Produto::imprimir(){
	cout<<"Nome: "<<nome<<endl
	<<"Preco: "<<preco<<endl;
}

void Produto::copiar(Produto &outro){
	this->nome = outro.getNome();
	this->preco = outro.getPreco();
}
