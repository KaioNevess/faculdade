#include <iostream>
using namespace std;

int fatorial(int num){
	while(num<0){
		cout<<"Digite um numero novamente: ";
		cin>>num;
		}
	if(num == 0){
		return 1;
	}else{
		return num * fatorial(num-1);
	}
}

int main(){
	int n;
	cout <<"Digite um numero para saber seu fatorial: ";
	cin>>n;
	cout<<fatorial(n);
}