#include <iostream>
using namespace std;

void verMaior(float a, float b, float c){
	if(a>b && a>c){
		cout<<"O maior numero e o : "<<a<<endl;
	}else if(b>a && b>c){
		cout<<"O maior numero e o : "<<b<<endl;
	}else if(c>a && c>b){
		cout<<"O maior numero e o : "<<c<<endl;
	}else{
		cout<<"Os 3 numeros sao iguais";
	}
}

int main(){
	float a, b, c;
	cout<<"Informe o primeiro numero: ";
	cin>>a;
	cout<<"Informe o segundo numero: ";
	cin>>b;
	cout<<"Informe o terceiro numero: ";
	cin>>c;
	verMaior(a,b,c);
	
	return 0;
}
