#include <iostream>
using namespace std;


string menor(int a, int b){
	
	
	if(a<b){
		int aux = 0;
		aux = a;
		a = b;
		b= aux;
		cout<<"a: "<<a<<" b: "<<b<<endl;
	}
	
	else{
		cout<<"a: "<<a<<" b: "<<b<<endl;
	}
}

int main(){
	int a, b;
	cout<<"Informe o primeiro numero: ";
	cin>>a;
	cout<<"Informe o segundo numero: ";
	cin>>b;
	cout<<menor(a, b);
	return 0;	
}
