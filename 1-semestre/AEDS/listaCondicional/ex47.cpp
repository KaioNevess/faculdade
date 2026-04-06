#include <iostream>
using namespace std;

void cedulas(int montante) { 
    int nota100 = montante / 100;
    int resto100 = montante % 100;
    
    int nota50 = resto100 / 50;
    int resto50 = resto100 % 50;
    
    int nota10 = resto50 / 10;
    int resto10 = resto50 % 10;
    
    int nota5 = resto10 / 5;
    int nota1 = resto10 % 5; /
    
    cout << "Notas de 100 : " << nota100 << endl;
    cout << "Notas de 50 : " << nota50 << endl;
    cout << "Notas de 10 : " << nota10 << endl;
    cout << "Notas de 5 : " << nota5 << endl;
    cout << "Notas de 1 : " << nota1 << endl;    
}

int main() {
    int montante;
    cout << "Digite o valor: ";
    cin >> montante;
    cedulas(montante);
    return 0;
}