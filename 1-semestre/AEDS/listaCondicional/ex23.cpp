#include <iostream>
using namespace std;

void parImpar(int n1, int n2){
	if(n1%2==0 && n2%2==0){
		cout<<"Os dois numeros sao pares";
	}else{
		cout<<"Um deles ou os dois sao impares";
	}
}

int main(){
	int n1,n2;
	cout<<"Digite dois numeros para saber se ambos sao pares: ";
	cin>>n1;
	cin>>n2;
	parImpar(n1, n2);
	
	return 0;
}
