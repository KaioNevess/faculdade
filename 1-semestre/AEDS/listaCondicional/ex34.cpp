#include <iostream>
using namespace std;

void categoria(int idade){
	if(idade>=5 && idade <=7){
		cout<<"Categoria: Infantil A"<<endl;
	}else if(idade>=8 && idade <=10){
		cout<<"Categoria: Infantil B"<<endl;
	}else if(idade>=11 && idade <=13){
		cout<<"Categoria: Juvenil A"<<endl;
	}else if(idade>=14 && idade <=17){
		cout<<"Categoria: Juvenil B"<<endl;
	}else if(idade>=18){
		cout<<"Categoria: Adulto"<<endl;
	}else{
		cout<<"Nao ranqueado";
	}
}
int main(){
	int idade=0;
	cout<<"Digite sua idade poara ver sua categoria: ";
	cin>>idade;
	categoria(idade);
	
	return 0;
}
	 
	 
