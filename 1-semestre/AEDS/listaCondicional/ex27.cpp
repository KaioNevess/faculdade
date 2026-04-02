#include <iostream>
using namespace std;

float mediaNotas(float n1, float n2, float n3){
	float somaNotas=(n1*2)+(n2*3)+(n3*5);
	float media= somaNotas/(10);
	return media;
}

int main(){
	float n1, n2, n3;
	cout<<"Informe o valor da nota 1: ";
	cin>>n1;
	cout<<"Informe o valor da nota 2: ";
	cin>>n2;
	cout<<"Informe o valor da nota 3: ";
	cin>>n3;
	
	cout<<"A media ponderada das suas notas e: "<< mediaNotas(n1,n2,n3) ;
	
	return 0;
}
