#include <iostream>
using namespace std;

void fibonacci(){
	int n;
	int sequencia =  1;
	int nAnterior= 1;
	int result = 1;
	cout<<"Digite ate que numero da sequencia voce deseja: ";
	cin>>n;
	
	cout<<nAnterior<<endl;
	
	for(int i = 2; i<=n; i++){
		result = nAnterior + sequencia;
		
		cout<<result<<endl;
		
		result = nAnterior;
		
		
		
		
	}
}

int main(){
	fibonacci();
}