#include <iostream>
using namespace std;

void viagem(bool passagem, bool passaporte, bool identidade){
	if(passagem==true){
		cout<<"Voce possui uma passaporte? (1 - sim / 0- nao): ";
		cin>>passaporte;
		cout<<"Voce possui uma identidade? (1 - sim / 0- nao): ";
		cin>>identidade;
		if(passaporte == true || identidade == true){
			cout<<"Pode viajar";
		}
	}else{
		cout<<"Voce nao pode viajar";
	}
}

int main(){
	bool passagem, passaporte, identidade;
	cout<<"Voce possui uma passagem? (1 - sim / 0- nao): ";
	cin>>passagem;
	viagem(passagem,passaporte,identidade);
	
	return 0;
}