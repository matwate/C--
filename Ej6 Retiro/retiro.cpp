#include <iostream>

using namespace std;

int main(){
    
    int edad;
    int esMujer;

    cout << "Ingrese su edad: ";
    cin >> edad;

    cout << "Ingrese 1 si es mujer, 0 si es hombre: ";
    cin >> esMujer;

    int anhos_Faltantes = 62 - edad + esMujer * 5;

    cout << "Le faltan " << anhos_Faltantes << " años para poder retirarse" << endl;
    return 0;
}