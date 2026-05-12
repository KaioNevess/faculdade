#include <iostream>
using namespace std;

void potencia(float base, float expoente){
	float resultado = 1;
	
	
	while(expoente<0){
		cout<<"\n por favor digite um expoente positivo"<<endl;
		cout<<"Expoente: ";
		cin>>expoente;
	}
	
	float elevado = expoente;
	
	while(expoente>0){
		expoente--;
		resultado = resultado * base;
	}
	
	cout<<base<<" eleveado a "<<elevado<< " e igual a: "<<resultado;
}

int main(){
	
	float n1,n2;
	cout<<"Base: ";
	cin>>n1;
	cout<<"Expoente: ";
	cin>>n2;
	potencia(n1,n2);
}