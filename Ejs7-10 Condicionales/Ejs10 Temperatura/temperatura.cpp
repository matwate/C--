#include <iostream>

using namespace std;

int main() {
    float temp;

    string units;

    cout << "Ingrese la temperatura: ";
    cin >> temp;

    cout << "Ingrese la unidad de la temperatura (C o F): ";

    cin >> units;

    if(units == "C"){
        cout << "La temperatura en F es: " << (temp * 9/5) + 32 << " F";

    }

    if (units == "F"){
        cout << "La temperatura en C es: " << (temp - 32) * 5/9 << " C";
    }
    
    return 0;
}
