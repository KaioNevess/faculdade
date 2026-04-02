#include <iostream>
using namespace std;

void Calcjogo(float i, float f){
	if(i<f){
		float horasTotais = f - i;
		cout<<horasTotais;
	}else{
		float horaTotal=(24 - i)+f;
		cout<<horaTotal;
		
	}
	
}

int main(){
	float horaInicial, horaFinal;
	cout<<"Infome a hora que comecou a jogar: ";
	cin>>horaInicial;
	cout<<"Infome a hora que terminou de jogar: ";
	cin>> horaFinal;
	
	Calcjogo(horaInicial, horaFinal);
	
	return 0;
}
