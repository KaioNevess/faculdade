#include <iostream>
using namespace std;

void notas(float nota){
	for(int i = 0; nota>=1;){
		cout<<"Digite sua nota: ";
		cin>>nota;
		
		if(nota>10){
			cout<<" Nota anterior invalida"<<endl;
		}
	}
}

int main(){
	float n;
	cout<<"Digite sua nota: ";
	cin>>n;
	notas(n);
}