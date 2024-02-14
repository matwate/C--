#include <iostream>

using namespace std;

int main(){
    float precio;
    
    cout << "Ingrese el precio del producto: ";
    cin >> precio;

    cout << "El precio con descuento es: " << precio * (precio >=100 ? 0.9 : 1)  << endl;
    return 0;

}