#include <iostream>
#include <string>
#include "Livro.h"
#include "Carro.h"
using namespace std;

int main() {
	/*
    Livro l1;
    cout<<"\n------------CADASTRO LIVRO 1------------"<<endl;
    l1.preencher();
    cout<<"\n------------CADASTRO LIVRO 2------------"<<endl;
    Livro l2;
    l1.preencher();
    
    */
    
    int tam=3;
	Carro *carros=new Carro[tam];
    for(int i=0;i<tam;i++){
    	carros[i].preencher();
	}
	
	for(int i=0;i<tam;i++){
    	carros[i].imprimir();
	}
    
    return 0;
    
    
}

