/*---------------------------------------- 
	Calcula raizes da equacao 2 grau 
	 	F(x) = a.x² + b.x + c
----------------------------------------
Informe a:  1
Informe b: -5
Informe c:  6

Delta: 1
Raizes da equacao: x1 = 2 e x2 = 3*/
#include <iostream>
#include<math.h>
using namespace std;

void delta(int a, int b, int c){
	
	int calcDelta =(b*b)-(4*a*c);
	cout<<"Delta: "<<calcDelta<<endl;
	if(calcDelta<0){
	
		cout<<"Nao existem raizes, pelo delta ser negativo";
	}else{
	float x1 = (-b + sqrt(calcDelta))/(2.0*a);
    float x2 = (-b - sqrt(calcDelta))/(2.0*a);
	
	cout<<"Raizes: "<<x1<<", "<<x2;
	}
	
	
	
}


int main(){
	int a,b,c;
	
	cout<<"Informe a: ";
	cin>>a;
	cout<<"Informe b: ";
	cin>>b;
	cout<<"Informe c: ";
	cin>>c;
	
	delta(a, b, c);
	
	return 0;
}