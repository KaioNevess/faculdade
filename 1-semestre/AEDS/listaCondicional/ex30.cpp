#include <iostream>
using namespace std;

void multiplos(int a, int b){
	
	if(a%b==0 || b%a==0){
		cout<<"SAO MULTIPLOS";
	}else{
		cout<<"NAO SAO MULTIPLOS";
	}
	
}

int main(){
	int n1,n2;
	cout<<"Infome o primeiro numero: ";
	cin>>n1;
	cout<<"Infome o segundo numero: ";
	cin>>n2;
	multiplos(n1,n2);
	
	return 0;
	
	
}
