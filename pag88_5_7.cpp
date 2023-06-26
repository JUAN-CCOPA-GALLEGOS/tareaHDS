
#include <iostream>
#include <cstdlib>
#define pi 3.1416
using namespace std;

int main(){
float radio, area, volumen;

do
{
cout << "valor del radio positivo " << endl;
cin >> radio;
} while (radio <= 0);
area = 4 * pi * radio * radio;
volumen = 4.0 / 3 * pi * radio * radio * radio;
cout <<"area y volumen de la esfera de radio r = " << radio<<endl;
cout << "area = " << area << " volumen = " << volumen ;

system("PAUSE");

return 0;

}