#include <iostream>
#include <math.h>
#include <cstdlib>
#define  n 20
using namespace std;

int main(){

float termino, suma = 0;

for (float i = 1; i <= n ; i++)
{
termino = i * i/ pow(3,i);
suma += termino;
}
cout << " valor de la suma = " << suma << endl;

system("PAUSE");

return 0;

}