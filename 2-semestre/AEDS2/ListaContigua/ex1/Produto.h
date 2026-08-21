#ifndef PRODUTO_H
#define PRODUTO_H
#include <string>
using namespace std;

class Produto
{
	public:
		Produto();//construtor
		Produto(const Produto& outro);
		
		//setters
		void setNome(string nome);
		void setPreco(float preco);
		
		//getters
		string getNome();
		float getPreco();
		
		void preencher();
		void imprimir();
		
		void copiar(Produto &outro);
		
	private:
		string nome;
		float preco;
};

#endif