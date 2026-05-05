#include <iostream>
using namespace std;

void maiores(int n){
	int x;
	int maior1 = 0, maior2 = 0, maior3 = 0;

    for (int i = 0; i < n; i++) {
        cout << "Digite um numero: ";
        cin >> x;

        if (x > maior1) {
            maior3 = maior2;
            maior2 = maior1;
            maior1 = x;
        } else if (x > maior2) {
            maior3 = maior2;
            maior2 = x;
        } else if (x > maior3) {
            maior3 = x;
        }
    }

    cout << "Soma dos 3 maiores: " << (maior1 + maior2 + maior3) << endl;
}

int main() {
    int n;
    
    cout << "Quantos numeros? ";
    cin >> n;
    
    maiores(n);

    

    return 0;
}
