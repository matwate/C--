#include <iostream>
#include <math.h>
using namespace std;
int main(){
    float capital, interes;
    int meses;

    cout << "Ingrese el capital inicial:";
    cin >> capital;

    cout << "Ingrese el interes mensual en %:";
    cin >> interes;

    cout << "Ingrese el numero de meses del prestamo:";
    cin >> meses;

    cout << "El valor a pagar es:" << capital * (1 + interes/100 * meses); 
    return 0;
}