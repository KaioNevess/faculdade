#include <iostream>
#include <string>
#include "Livro.h"
#include "Carro.h"
#include "Motor.h"
using namespace std;

void maiorque1(Carro *carros, int tam){
	cout<<"Carro(s) com a motorizacao maior(es) que 1.0: ";
	for(int i=0;i<tam;i++){
		if(carros[i].getMotorizacao()>1.0){
			cout<<carros[i].getNome()<<endl;
		}
	}
}

void comparaMarca(Carro *carros, int tam){
	cout<<"Carros da mesma marca: "<<endl;
	for(int i=0;i<tam;i++){
		for(int j=0;j<tam;j++){
		if(carros[i].getMarca()==carros[j+1].getMarca()){
			cout<<carros[i].getNome()<<endl;
			cout<<carros[j+1].getNome()<<endl;
			}
		}
	}
}

void calculaPorcentagem(Carro *carros, int tam){
	int maior=0;
	for(int i=0;i<tam;i++){
		for(int j=0;j<tam;j++){
		if(carros[i].getValor()>carros[j+1].getValor()){
			maior=i;
			}
		}
	}
	
	for(int i=0;i<tam;i++){
		float perc=((carros[maior].getValor()-carros[i].getValor()) / carros[i].getValor()) *100;{
			cout<<"O carro "<<carros[maior].getNome()<<" e "<<perc<<"por cento, maior que o carro "<<carros[i].getNome();
		}
		
		
		}
	}
	
void maiorPaginas(Livro l1, Livro l2){
	if(l1.getNumeroPaginas() > l2.getNumeroPaginas()){
		cout<<"O livro "<<l1.getNome() <<" tem maior numero de paginas"<<endl;	
	}else if (l1.getNumeroPaginas() < l2.getNumeroPaginas()){
		cout<<"O livro "<<l2.getNome() <<" tem maior numero de paginas"<<endl;	
	}else{
		cout<<"Os livros '"<<l1.getNome()<<"' e '"<<l2.getNome()<<"' possuem o mesmo numero de paginas."<<endl;
	}
}
	
	


int main() {
	/*
    Livro l1;
    cout<<"\n------------CADASTRO LIVRO 1------------"<<endl;
    l1.preencher();
    cout<<"\n------------CADASTRO LIVRO 2------------"<<endl;
    Livro l2;
    l2.preencher();
    maiorPaginas(l1, l2);
    */
   
    /*
    int tam=3;
	Carro *carros=new Carro[tam];
	
	cout<<"Preencher"<<endl;
    for(int i=0;i<tam;i++){
    	cout<<"\n Carro "<<i+1<<": "<<endl;
    	carros[i].preencher();
	}
	
	for(int i=0;i<tam;i++){
		cout<<"\n Carro "<<i+1<<": "<<endl;
    	carros[i].imprimir();
	}
	
	maiorque1(carros, tam);
	comparaMarca(carros, tam);
	calculaPorcentagem(carros, tam);
    */
    
    Motor m1, m2;
    
    cout<<"\n----------------Preenchendo Motor 1----------------"<<endl;
    m1.preencher();
    cout<<"---------------------------------------------------"<<endl;
    
    cout<<"\n----------------Preenchendo Motor 2----------------"<<endl;
    m2.preencher();
    cout<<"---------------------------------------------------"<<endl;
    
    cout<<"\n----------------------Motor 1----------------------"<<endl;
    m1.imprimir();
    cout<<"---------------------------------------------------"<<endl;
    
    cout<<"\n----------------------Motor 2----------------------"<<endl;
    m2.imprimir();
    cout<<"---------------------------------------------------"<<endl;
    
    
    if(m1.getPotencia()>m2.getPotencia()){
    	cout<<"A potencia do motor tipo "<<m1.getTipo()<<" e maior que do motor tipo "<<m2.getTipo()<<endl;
	}else if(m1.getPotencia()<m2.getPotencia()){
    	cout<<"A potencia do motor tipo "<<m2.getTipo()<<" e maior que do motor tipo "<<m1.getTipo()<<endl;
	}else{
		cout<<"Os motores possuem a mesma potecia."<<endl;
	}
    return 0;
    
    
}
