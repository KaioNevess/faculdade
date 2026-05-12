#include <iostream>
using namespace std;

void tabuada(){
	int num;
	cout<<"Tabuada"<<endl;
	cout<<"Digite um numero: ";
	cin>>num;
	
	for(int i = 0;i<=10;i++){
		int multiplicacao=num*i;
		
		cout<<num<<" x "<<i<<" = "<<multiplicacao<<endl;
	}
}

int main(){
	tabuada();
	return 0;
}
