#include <iostream>
#include <string> // Importante incluir para usar string

using namespace std;

void tabela(string cod, float precoAntigo) {
    int codNumerico = 0;

   
    if (cod == "S" || cod == "s") {
        codNumerico = 1;
    } else if (cod == "C" || cod == "c") {
        codNumerico = 2;
    } else if (cod == "P" || cod == "p") {
        codNumerico = 3;
    } else {
        codNumerico = 4;
    }

    
    switch (codNumerico) {
        case 1: {
            if (precoAntigo < 150000) {
                float precoNovo = precoAntigo + (precoAntigo * 0.11);
                cout << "O preco atual e de: " << precoNovo;
            } else {
                float precoNovo = precoAntigo + (precoAntigo * 0.07);
                cout << "O preco atual e de: " << precoNovo;
            }
            break;
        }

        case 2: {
            if (precoAntigo < 100000) {
                float precoNovo = precoAntigo + (precoAntigo * 0.09);
                cout << "O preco atual e de: " << precoNovo;
            } else {
                cout << "O preco atual e de: " << precoAntigo;
            }
            break;
        }

        case 3: {
            float precoNovo = precoAntigo + (precoAntigo * 0.04);
            cout << "O preco atual e de: " << precoNovo;
            break;
        }

        case 4: {
            float precoNovo = precoAntigo + (precoAntigo * 0.05);
            cout << "O preco atual e de: " << precoNovo;
            break;
        }
    } 
}

int main() {
    string cod;
    float precoAntigo;
    
    cout << "'S'- SEDAN / 'C' - CONVERSIVEL / 'P' - POPULAR" << endl;
    cout << "Com base na tabela acima, informe o codigo do seu carro: ";
    cin >> cod;
    cout << "Agora, informe seu valor: ";
    cin >> precoAntigo;

    tabela(cod, precoAntigo);
    
    return 0; 
}