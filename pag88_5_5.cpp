#include <iostream>

using namespace std;

int main() {
    int limite_maximo, base, potencia = 1, contador_positivos = 0, contador_negativos = 0, contador_ceros = 0;

    do {
        cout << "Ingrese el límite máximo positivo: ";
        cin >> limite_maximo;
    } while (limite_maximo <= 0);

    do {
        cout << "Ingrese la base entera positiva: ";
        cin >> base;
    } while (base <= 0);

    for (int i = 1; potencia <= limite_maximo; i++) {
        cout << "Potencia " << i << ": " << potencia << endl;
        potencia *= base;
    }

    return 0;
}