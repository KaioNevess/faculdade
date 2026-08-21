#ifndef LISTA_H
#define LISTA_H
#include <string>
#include "Produto.h"
using namespace std;

class Lista
{
	public: 
		Lista();
		Lista(int tamanho);
		Lista(Lista &outro);
		
		void insert(Produto& novo);
		void remove();
		
		void shiftEnd();
		void shiftFront();
		
		
	
	private:
		int tam;
		int quant;
		Produto* lista;
};

#endif