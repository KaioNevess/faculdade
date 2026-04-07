#include <iostream>
#include <string>

using namespace std;

void calculo(float IPI, string cod1, int valor1, int quant1, string cod2, int valor2, int quant2){
	float valorFinal= (valor1 * quant1 + valor2 * quant2) * (IPI/100 + 1);
	
	cout<<valorFinal;
	
}

int main(){
	float IPI;
	string cod1, cod2;
	int valor1, quant1 , valor2, quant2;
	
	cout<<"Informe a percentagem do IPI: ";
	cin>>IPI;
	
	cout<<"Informe o codigo da peça 1: ";
	cin>>cod1;
	
	cout<<"Informe o valor da peça 1: ";
	cin>>valor1;
	
	cout<<"Informe a quantidades de peças 1: ";
	cin>>quant1;
	
	cout<<"Informe o codigo da peça 2: ";
	cin>>cod2;
	
	cout<<"Informe o valor da peça 2: ";
	cin>>valor2;
	
	cout<<"Informe a quantidades de peças 2: ";
	cin>>quant2;
	
	calculo(IPI, cod1, valor1, quant1, cod2, valor2, quant2);
	
	return 0;
}