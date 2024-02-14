#include <iostream>
#include <numeric>
using namespace std;
int main() {
    
    int precios[5];
    int cantidades[5];
    int subtotales[5];
    float iva;
    for(int i = 0; i < 5; i++){
        cout << "Ingrese el precio del producto " << i + 1 << ":";
        cin >> precios[i];
        cout << "Ingrese la cantidad del producto " << i + 1 << ":";
        cin >> cantidades[i];
    }

    cout << "Ingrese el valor de iva en %:";
    cin >> iva;

    for(int i = 0; i < 5; i++){
        subtotales[i] = precios[i] * cantidades[i] ;
    }

    cout << "El valor total a pagar es:" << std::accumulate(subtotales, subtotales + 5, 0)  *(1+ iva/100) << endl;


    return 0;
}

