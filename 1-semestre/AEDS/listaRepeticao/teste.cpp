#include <iostream>
using namespace std;

void imprimeMensagem(int n){
	int i = 0;
	while(n>i){
		cout<<"Ola mundo"<<endl;
		n--;
	}
}

int main(){
	int n;
	cin>>n;
	
	imprimeMensagem(n);
}