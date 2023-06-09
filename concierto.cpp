#include <iostream>
using namespace std;

int main() {
  int ubicacion, cantidad, precio, total;
  string bebida;
  int preferencial_total = 0;

  cout << "Ubicaciones disponibles:" << endl;
  cout << "1. General - Precio 50 soles" << endl;
  cout << "2. Preferencial - Precio 80 soles" << endl;
  cout << "3. Platea - Precio 120 soles" << endl;
  cout << "4. VIP - Precio 160 soles" << endl;

  cout << "Ingrese la ubicación deseada : ";
  cin >> ubicacion;

  cout << "Ingrese la cantidad de entradas: ";
  cin >> cantidad;

  switch (ubicacion) {
    case 1:
      precio = 50;
      break;
    case 2:
      precio = 80;
      preferencial_total += precio * cantidad;
      break;
    case 3:
      precio = 120;
      break;
    case 4:
      precio = 160;
      cout << "Elija una bebida (gaseosa, cerveza, agua): ";
      cin >> bebida;
      preferencial_total += precio * cantidad;
      break;
    default:
      cout << "Opción inválida." << endl;
      return 0;
  }

  total = precio * cantidad;
  cout << "El total a pagar es: " << total << " soles" << endl;

  if (preferencial_total > 400) {
    cout << "¡Felicidades! Usted ha superado los 400 soles en entradas preferenciales" << endl;
    cout << "Tiene un descuento del 20% en la siguiente funcion" << endl;
    cout << "¿Desea una hamburguesa o salchipapa en la siguiente funcion? (hamburguesa/salchipapa): ";
    string comida;
    cin >> comida;
    cout << "¡Gracias por su preferencia! Disfrute de su " << comida << "." << endl;
  }

  if (ubicacion == 4) {
    cout << "Bebida seleccionada: " << bebida << endl;
  }

  return 0;
}
    } // MODIFIQUE EL EJERCICIO PARA EL CASO QUE SI LA SUMA DE LAS ENTRADAS "PREFERENCIALES" SUPERA LOS 400 SE LES DARA UN DESCUENTO DEL 20% EN LA SIGUIENTE FUNCION Y PODRAN ELEGIR ENTRE UNA AMBURGUESA Y SALCHIPAPA

    return 0;
}
