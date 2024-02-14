#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float a,b;

    cout << "Ingrese el valor del cateto A:";
    cin >> a;
    cout << "Ingrese el valor del cateto B:";
    cin >> b;

    cout << "El valor de la hipotenusa es de " << sqrt(pow(a,2) + pow(b,2));

    return 0;
}