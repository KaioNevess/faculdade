#include <iostream>
using namespace std;

// Função que copia, completa com 5 e retorna a soma
float preencherSomar(float *vMaior, int tamMaior, float *vMenor, int tamMenor) {

    // Copiando os elementos do menor para o maior
    for (int i = 0; i < tamMenor; i++) {
        vMaior[i] = vMenor[i];
    }

    // Preenchendo o restante com 5
    for (int i = tamMenor; i < tamMaior; i++) {
        vMaior[i] = 5;
    }

    // Calculando a soma
    float soma = 0;

    for (int i = 0; i < tamMaior; i++) {
        soma += vMaior[i];
    }

    return soma;
}

int main() {

    int t1, t2;

    cout << "Digite o tamanho do vetor 1: ";
    cin >> t1;

    cout << "Digite o tamanho do vetor 2: ";
    cin >> t2;

    // Criando vetores dinamicamente
    float *vet1 = new float[t1];
    float *vet2 = new float[t2];

    float resultado;

    // Descobrindo qual vetor é menor
    if (t1 < t2) {

        cout << "Preencha o vetor menor (vetor 1):\n";

        for (int i = 0; i < t1; i++) {
            cin >> vet1[i];
        }

        resultado = preencherSomar(vet2, t2, vet1, t1);

    } else {

        cout << "Preencha o vetor menor (vetor 2):\n";

        for (int i = 0; i < t2; i++) {
            cin >> vet2[i];
        }

        resultado = preencherSomar(vet1, t1, vet2, t2);
    }

    cout << "Somatorio do vetor maior: " << resultado << endl;

    // Liberando memória
    delete[] vet1;
    delete[] vet2;

    return 0;
}