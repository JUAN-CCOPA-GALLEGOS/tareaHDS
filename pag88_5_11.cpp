#include <iostream>

using namespace std;

int main() {
    
    int n, num, mayor, menor, suma = 0;

    cout << "Ingrese la cantidad de números: ";
    cin >> n;

    cout << "Ingrese el primer número: ";
    cin >> num;

    mayor = num;
    menor = num;
    suma += num;

    for (int i = 2; i <= n; i++) {
        cout << "Ingrese el número " << i << ": ";
        cin >> num;

        if (num > mayor) {
            mayor = num;
        }

        if (num < menor) {
            menor = num;
        }

        suma += num;
    }

    cout << "El número mayor es: " << mayor << endl;
    cout << "El número menor es: " << menor << endl;
    cout << "La media es: " << static_cast<double>(suma) / n << endl;

    return 0;
}