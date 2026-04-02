#include<iostream>
#include<math.h>
using namespace std;

float custo(float x){
	float per= x*1.28;
	float por= x*0.45;
	float re= per+por;
	return re;
}

int main (){
	float resul = custo(5000);
	cout << resul;
	return 0;
}
	