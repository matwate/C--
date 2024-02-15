#include <iostream>

using namespace std;

int main() {
    
    string platos[] = {"Pizza", "Hamburguesa", "Tacos"};
    int preciosBase[] = {21000, 18000, 15000};   
    string toppingsPizza[] = {"Pepperoni", "Jamon", "Champiñones"}; 
    int preciosToppingsPizza[] = {2000, 3000, 4000};
    string toppingsHamburguesa[] = {"Queso", "Lechuga", "Cebolla"};
    int preciosToppingsHamburguesa[] = {1000, 500, 500};

    string toppingsTacos[] = {"Cilantro", "Cebolla", "Salsa"};
    int preciosToppingsTacos[] = {500, 500, 1000};

    int opcionPlato;
    cout << "Seleccione un plato 0:Pizza,21000$ 1:Hamburguesa,18000$ 2:Tacos, 15000$: " << endl;
    cin >> opcionPlato;

    cout << "Usted selecciono: " << platos[opcionPlato] << endl;

    if(opcionPlato == 0){
        cout << "Seleccione un topping 0:Pepperoni,2000$ 1:Jamon,3000$ 2:Champiñones,4000$: " << endl;
        int opcionTopping;
        cin >> opcionTopping;
        cout << "Usted selecciono: " << toppingsPizza[opcionTopping] << endl;
        cout << "El precio total es: " << preciosBase[opcionPlato] + preciosToppingsPizza[opcionTopping] << endl;
    }else if(opcionPlato == 1){
        cout << "Seleccione un topping 0:Queso,1000$ 1:Lechuga,500$ 2:Cebolla,500$: " << endl;
        int opcionTopping;
        cin >> opcionTopping;
        cout << "Usted selecciono: " << toppingsHamburguesa[opcionTopping] << endl;
        cout << "El precio total es: " << preciosBase[opcionPlato] + preciosToppingsHamburguesa[opcionTopping] << endl;
    }else if(opcionPlato == 2){
        cout << "Seleccione un topping 0:Cilantro,500$ 1:Cebolla,500$ 2:Salsa,1000$: " << endl;
        int opcionTopping;
        cin >> opcionTopping;
        cout << "Usted selecciono: " << toppingsTacos[opcionTopping] << endl;
        cout << "El precio total es: " << preciosBase[opcionPlato] + preciosToppingsTacos[opcionTopping] << endl;
    }else{
        cout << "Opcion no valida" << endl;
    }

    return 0;
}
