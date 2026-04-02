#include <iostream>
using namespace std;

bool angulos(int a, int b, int c){
	int somaAngulos = a+b+c;
	if(somaAngulos == 180){
		return true;
	}else{
		return false;
	}
	}
	
	int main(){
		int a,b,c;
		cout<<"Digite os angulos do triangulo para saber se ele e verdadeiro ou falso: ";
		cin>>a;
		cin>>b;
		cin>>c;
		
		if(angulos(a,b,c) == 1){
			cout<<"O trinagulo e verdadeiro"
			;	
		}else{
			cout<<"O trinagulo e falso";
			
			
			
		}
		return 0;
	}
