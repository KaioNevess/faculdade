#include <iostream>
using namespace std;

void menu(char opcao, float n1,float n2,float n3){
	if(opcao =='a'){
		float media=(n1+n2+n3)/3;
		cout<<"Sua media e: "<<media;
	}else if(opcao =='b'){
		float soma=(n1*3)+(n2*3)+(n3*4);
		float media=soma/10;
		cout<<"Sua media e: "<<media;	
	}else if(opcao=='c'){
		float media=3/((1/n1)+(1/n2)+(1/n3));
		cout<<"Sua media e: "<<media;
	}
}

int main(){
	char opcao;
	float n1,n2,n3;
	cout<<"Escolha a média que voce deseja: "<<endl;
	cout<<"a- aritmetica"<<endl;
	cout<<"b- ponderada "<<endl;
	cout<<"c- harmonica "<<endl;
	cout<<"informe:  ";
	
	cin>>opcao;
	
	cout<<"Informe a nota 1: ";
	cin>>n1;
	cout<<"Informe a nota 2: ";
	cin>>n2;
	cout<<"Informe a nota 3: ";
	cin>>n3;
	cout<<"---------------------------------------"<<endl;
	
	menu(opcao,n1,n2,n3);
}