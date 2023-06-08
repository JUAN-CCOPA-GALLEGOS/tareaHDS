#include <iostream>
using namespace std;

int main() {
    double pies, yardas, pulgadas, centimetros, metros;

    cout << "Ingrese la medida en yardas: ";
    cin >> yardas;

    pies = yardas *3;
    pulgadas = pies * 12.0;
    centimetros = pulgadas * 2.54;
    metros = centimetros / 100.0;

    cout << yardas << " yardas son equivalentes a:" << endl;
    cout << pies << " pies" << endl;
    cout << pulgadas << " pulgadas" << endl;
    cout << centimetros << " centimetros" << endl;
    cout << metros << " metros" << endl;

    return 0;
}
