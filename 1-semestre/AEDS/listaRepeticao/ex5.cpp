#include <iostream>
using namespace std;

void funcSimples(){
	
	for(int i=1;i<50;i=i+2){
		cout<<i<<endl;
	}
}

void func_if(){
	for (int i=1;i<50;i++){
		if(i%2 != 0){
			cout<<i<<endl;
		}
	}
}

int main(){
	funcSimples();
	func_if();
}