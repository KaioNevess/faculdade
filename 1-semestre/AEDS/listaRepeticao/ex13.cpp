#include <iostream>

using namespace std;

int main() {
    double popA, popB, taxaA, taxaB;
    char repetir;

    do {
        
        cout << "Populacao A e Taxa A (%): ";
        cin >> popA >> taxaA;
        
        cout << "Populacao B e Taxa B (%): ";
        cin >> popB >> taxaB;

        int anos = 0;
        
        while (popA < popB) {
            popA += popA * (taxaA / 100);
            popB += popB * (taxaB / 100);
            anos++;
        }

        cout << "Anos: " << anos << endl;

        cout << "Repetir? (s/n): ";
        cin >> repetir;

    } while (repetir == 's');

    return 0;
}