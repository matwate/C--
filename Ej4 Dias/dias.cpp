#include <iostream>

using namespace std;

int main(){

    int dias;
    
    cout << "Ingrese el numero de dias: ";
    cin >> dias;

    int anhos = dias / 365;
    dias = dias - (anhos * 365);

    int meses = dias / 30;
    dias = dias - meses * 30;
    cout << "Equivale a " << anhos << " anhos, " << meses << " meses y " << dias << " dias";

    return 0;
}