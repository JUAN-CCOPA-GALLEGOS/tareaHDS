#include <iostream>
#include <cstdlib>
#define m 30
using namespace std;

int main(int argc, char *argv[]){

int i, suma = 0;
for (i = 1; i <= m; i++)
suma += 2 * i ;
cout << "La suma de los 30 primeros numeros pares es : " << suma << endl;
cout << " mediante formula: " << (2+ 2*m)*m/2 << endl;

system("PAUSE");

return 0;

}
