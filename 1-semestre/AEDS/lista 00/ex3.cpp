#include<iostream>
#include<math.h>
using namespace std;

int main (){
	float a, m, d;
	cout << "informe quantos anos: ";
	cin >> a;
	cout << "informe quantos meses: ";
	cin >> m;
	cout << "informe quantos dias: ";
	cin >> d;
	float r= (a*365) + (m*30) + d;
	cout << "o total de dias e: " << r;
	return 0;
}