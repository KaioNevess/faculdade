#include<iostream>
using namespace std;

float soma(float x, float y){
		float resultado = (x*x) + (y*y) - (6*x*y) -1;
		return resultado;
}

int main(){
	
	float x= 2;
	float y= 3;
	
	cout << "resultado" << soma(x,y);
	
	return 0;
}