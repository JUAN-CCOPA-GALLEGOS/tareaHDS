#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

int d1, d2, d3, i, x;
cout << " lista de numeros que cumplen la condicion\n";
for(i = 100; i <= 999; i++)
{
x = i ;
d1 = x % 10;
x = x / 10;
d2 = x % 10;
x = x / 10;
d3 = x;
// ya se han calculado las tres cifras
if( d1 * d1 + d2 * d2 + d3 * d3 == i / 3)
cout << " numero " << i << endl;
}

system("PAUSE");

return 0;
}