#include <iostream>

using namespace std;

int main() {
    string opcionesCarbohidrato[3] = {"Pasta", "Arroz", "Papa"};
    int preciosCarbohidrato[3] = {10200, 8500, 15000};

    string opcionesCarne[4] = {"Pollo", "Res", "Pescado", "Cerdo"};
    int preciosCarne[4] = {8000, 12000, 15000, 10000};
    
    string opcionesBebida[5] = {"Agua", "Jugo", "Gaseosa", "Limonada", "Te"};
    int preciosBebida[5] = {2000, 3000, 4000, 5000, 6000};
    
    string opcioneesAcompanamiento[2] = {"Ensalada", "Papas"};
    int preciosAcompanamiento[2] = {3000, 4000};
    
    int carbohidrato, carne, bebida, acompanamiento;
    int total;

    cout << "Escoja su carbohidrato: 0: Pasta,10200$ 1: Arroz,8500$ 2: Papa,15000$: ";
    cin >> carbohidrato;

    cout << "Escoja su carne: 0: Pollo,8000$ 1: Res,12000$ 2: Pescado,15000$ 3: Cerdo,10000$: ";
    cin >> carne;

    cout << "Escoja su bebida: 0: Agua,2000$ 1: Jugo,3000$ 2: Gaseosa,4000$ 3: Limonada,5000$ 4: Te,6000$: ";
    cin >> bebida;

    cout << "Escoja su acompanamiento: 0: Ensalada,3000$ 1: Papas,4000$: ";
    cin >> acompanamiento;

    total = preciosCarbohidrato[carbohidrato] + preciosCarne[carne] + preciosBebida[bebida] + preciosAcompanamiento[acompanamiento];
    cout << "El plato escogido es: " << opcionesCarbohidrato[carbohidrato] << " con " << opcionesCarne[carne] << " con " << opcionesBebida[bebida] << " y " << opcioneesAcompanamiento[acompanamiento] << endl;
    cout << "El total a pagar es: " << total << endl;


    return 0;
}
