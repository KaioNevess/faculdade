#include <iostream>
using namespace std;

void contaLuz(int kwh) {
	float calc = 0;
	if(kwh<=100){
		calc = kwh*0.5;	
	}else if(kwh<200){
		calc = kwh*0.75;
	}else if(kwh<250){
		calc = kwh*1.20;
	}else{
		calc = kwh*1.50;
	}
	
	float valorFinal = calc + (calc*0.2);
	
	cout<<"O valor final e: "<<valorFinal;
       
}

int main() {
    int kwh;
    cout<<"Informe o gasto de KWh: ";
    cin>>kwh;
    contaLuz(kwh);
    return 0;
}