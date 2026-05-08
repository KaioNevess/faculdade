#include <iostream>
using namespace std;

void validarNota(float nota){
	while(nota>10 || nota<0){
		
		cout<<"A nota foi inválida, por favor informe novamente"<<endl;
		cout<<"Digite sua nota(de 0 a 10): ";
		cin>>nota;
		
	}
}

int main(){
	float nota;
	cout<<"Digite sua nota(de 0 a 10): ";
	cin>>nota;
	validarNota(nota);
}