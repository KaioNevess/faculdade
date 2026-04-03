#include <iostream>
using namespace std;

// Função que calcula IMC de Brutus e Olivia
void calcularPessoas() {
    float hB = 1.84, pB = 122;
    float hO = 1.76, pO = 45;

    float imcB = pB / (hB * hB);
    float imcO = pO / (hO * hO);

    cout << "=== BRUTUS ===" << endl;
    cout << "IMC: " << imcB << endl;

    if (imcB >= 25) {
        float pesoMax = 25 * (hB * hB);
        cout << "Precisa perder: " << pB - pesoMax << " kg" << endl;
    }

    cout << "\n=== OLIVIA ===" << endl;
    cout << "IMC: " << imcO << endl;

    if (imcO < 18.5) {
        float pesoMin = 18.5 * (hO * hO);
        cout << "Precisa ganhar: " << pesoMin - pO << " kg" << endl;
    }
}

// Função que classifica IMC digitado
void classificarIMC(float altura,float peso) {

    float imc= peso/(altura*altura);
    
    cout<<"Seu IMC: "<<imc<<endl;

    if (imc < 16)
        cout << "Magreza grave" << endl;
    else if (imc < 17)
        cout << "Magreza moderada" << endl;
    else if (imc < 18.5)
        cout << "Magreza leve" << endl;
    else if (imc < 25)
        cout << "Saudavel" << endl;
    else if (imc < 30)
        cout << "Sobrepeso" << endl;
    else if (imc < 35)
        cout << "Obesidade grau I" << endl;
    else if (imc < 40)
        cout << "Obesidade grau II" << endl;
    else
        cout << "Obesidade grau III" << endl;
}

int main() {
	float altura, peso;
    calcularPessoas();  
    
    
    
    cout << "\n Digite sua altura: ";
    cin>>altura;
	cout << "\n Digite seu peso: ";
	cin>>peso;
    classificarIMC(altura,peso);   

    return 0;
}