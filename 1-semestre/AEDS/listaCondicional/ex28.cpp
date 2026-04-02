#include <iostream>
using namespace std;

void mediaNotas(float n1, float n2, float n3){
	float somaNotas=n1+n2+n3;
	float media= somaNotas/3;
	if(media>=6){
		cout<<"Sua média foi: "<<media<<endl;
		cout<<"APROVADO!!!";
	}else{
		cout<<"Sua média foi: "<<media<<endl;
		cout<<"REPROVADO!!!";
	}
}
int main(){
	float n1,n2,n3;
	cout<<"Infome a nota 1: ";
	cin>>n1;
	cout<<"Infome a nota 2: ";
	cin>>n2;
	cout<<"Infome a nota 3: ";
	cin>>n3;
	
	mediaNotas(n1,n2,n3);
	
	return 0;
}
