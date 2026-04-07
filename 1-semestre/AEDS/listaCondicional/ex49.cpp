#include <iostream>

using namespace std;

int main() {
    float indice;

    cout << "Digite o índice de poluição atual: ";
    cin >> indice;
    
    if (indice >= 0.5) {
    
        cout << "ALERTA CRÍTICO! Indústrias do 1º, 2º e 3º grupo devem suspender as atividades." << endl;
    } 
    else if (indice >= 0.4) {
       
        cout << "ALERTA! Indústrias do 1º e 2º grupo devem suspender as atividades." << endl;
    } 
    else if (indice >= 0.3) {
       
        cout << "ALERTA! Indústrias do 1º grupo devem suspender as atividades." << endl;
    } 
    else {
      
        cout << "Níveis de poluição aceitáveis. Nenhuma suspensão necessária." << endl;
    }

    return 0;
}