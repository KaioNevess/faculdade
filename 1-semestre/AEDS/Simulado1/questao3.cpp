#include <iostream>
using namespace std;


int func(float n1,float n2,float n3,float n4,float n5,float n6){
	if((n1 == n2 && n2==n3)||(n4 == n5 && n5==n6)){
		return 15;
	}else{
		float soma=n1+n2+n3+n4+n5+n6;
		if((int)soma % (int)n6==0){
			return 1;
		}else{
			
		}
	}
}


int main(){
	float n1,n2,n3,n4,n5,n6;
	cout<<"Primeiro numero: ";
	cin>>n1;
	cout<<"Segundo numero: ";
	cin>>n2;
	cout<<"Terceiro numero: ";
	cin>>n3;
	cout<<"Quarto numero: ";
	cin>>n4;
	cout<<"Quinto numero: ";
	cin>>n5;
	cout<<"Sexto numero: ";
	cin>>n6;
	
	if(func(n1,n2,n3,n4,n5,n6) == 15){
		cout<<"Os tres primeiros valores são iguais ou os tres ultimos valores são iguais"<<endl;
		cout<<"Otimo"<<endl;
	}else if(func(n1,n2,n3,n4,n5,n6) != 15){
		cout<<" Excelente"<<endl;
		if(func(n1,n2,n3,n4,n5,n6) == 1){
			cout<<"Alerta!!"<<endl;
		}
	}
	
	return 0;
}
