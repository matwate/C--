#include <iostream>

using namespace std;

int main() {
    string inicios[] = {"Erase una vez", "En un lugar lejano"};
    string personajes[] = {"un rey", "una princesa", "un principe"};
    string acciones[] = {"se enamoro de", "se caso con", "se peleo con"};
    string personajes2[] = {"un dragon", "una bruja", "un ogro"};
    string finales[] = {"y vivieron felices para siempre", "y la soledad lo consumio despues de lo sucedido ", "y tuvieron muchos hijos"};
    
    int opcionInicio;
    cout << "Seleccione un inicio 0 o 1 " << endl;
    cin >> opcionInicio;

    cout << "Usted selecciono: " << inicios[opcionInicio] << endl;

    int opcionPersonaje;

    cout << "Seleccione un personaje 0, 1 o 2 " << endl;
    cin >> opcionPersonaje;

    cout << "Usted selecciono: " << personajes[opcionPersonaje] << endl;

    int opcionAccion;

    cout << "Seleccione una accion 0, 1 o 2 " << endl;

    cin >> opcionAccion;

    cout << "Usted selecciono: " << acciones[opcionAccion] << endl;

    int opcionPersonaje2;

    cout << "Seleccione un personaje 0, 1 o 2 " << endl;

    cin >> opcionPersonaje2;

    cout << "Usted selecciono: " << personajes2[opcionPersonaje2] << endl;

    int opcionFinal;

    cout << "Seleccione un final 0, 1 o 2 " << endl;
    cin >> opcionFinal;

    cout << "Usted selecciono: " << finales[opcionFinal] << endl;


    string historia = inicios[opcionInicio] + " " + personajes[opcionPersonaje] + " " + acciones[opcionAccion] + " " + personajes2[opcionPersonaje2] + " " + finales[opcionFinal];

    cout << historia << endl;



    return 0;
}
