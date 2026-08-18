#ifndef CARRO_H
#define CARRO_H
#include <string>
#include <iostream>
using namespace std;

class Carro
{
	public:
		Carro();
		//metodos set
		void setNome(string nome);
		void setMarca(string marca);
		void setMotorizacao(float motorizacao);
		void setCor(string cor);
		void setValor(float valor);
		
		//metodos get
		string getNome();
		string getMarca();
		float getMotorizacao();
		string getCor();
		float getValor();
		
		//preencher e imprimir
		
		//prencher e imprimir
		void preencher();
		
		void imprimir();
		
		
	private:
		string nome;
		string marca;
		float motorizacao;
		string cor;
		float valor;
		
};

#endif