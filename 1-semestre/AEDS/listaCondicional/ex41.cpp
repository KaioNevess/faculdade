/*Especificação	Código	Preço
Cachorro quente	100	2,20
Bauru simples	101	3,30
Bauru com ovo	102	3,50
Hambúrguer	103	5,20
Cheeseburguer	104	7,30
Refrigerante	105	2,00*/
#include <iostream>
using namespace std;

void tabelaPrecos(){
	cout<<"\nEspecificacaoo   Codigo	   Preco"<<endl;
	cout<<"\nCachorro quente   100	   2,20"<<endl;
	cout<<"\nBauru simples	  101	   3,30"<<endl;
	cout<<"\nBauru com ovo	  102	   3,50"<<endl;
	cout<<"\nHamburguer	  103	   5,20"<<endl;
	cout<<"\nCheeseburguer	  104	   7,30"<<endl;
	cout<<"\nRefrigerante	  105	   2,00"<<endl;
}
void compra(int codigo, int quantidade){
    switch(codigo){
        case 100: {
            float valor = 2.20 * quantidade;
            cout << "Valor final: R$ " << valor;
            break;
        }
        case 101: {
            float valor = 3.30 * quantidade;
            cout << "Valor final: R$ " << valor;
            break;
        }
        case 102: {
            float valor = 3.50 * quantidade;
            cout << "Valor final: R$ " << valor;
            break;
        }
        case 103: {
            float valor = 5.20 * quantidade;
            cout << "Valor final: R$ " << valor;
            break;
        }
        case 104: {
            float valor = 7.30 * quantidade;
            cout << "Valor final: R$ " << valor;
            break;
        }
        case 105: {
            float valor = 2.00 * quantidade;
            cout << "Valor final: R$ " << valor;
            break;
        }
        default:
            cout << "Nao possui o produto";
    }
}


int main(){
	int codigo;
	int quantidade;
	tabelaPrecos();
	cout<<"\nInforme o codigo do produto: ";
	cin>>codigo;   
	cout<<"\nInforme a quantidade de produto que deseja comprar: ";
	cin>>quantidade;
	compra(codigo, quantidade);
	
}