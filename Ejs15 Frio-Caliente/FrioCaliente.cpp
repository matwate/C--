#include <iostream>
#include <cstdlib> // for random number generation

using namespace std;

int main() {
    srand(time(0));

    int numero_secreto = rand() % 100 + 1;
    int guess;
    cout << "Adivina el número secreto entre 1 y 100" << endl;
    cin >> guess;

    int difference = abs(numero_secreto - guess);
    bool adivino;


    if(difference == 0) {
        cout << "Acertaste!" << endl;
        bool adivino = true;
    } else if(difference <= 10) {
        cout << "Caliente" << endl;
    } else if(difference <= 15) {
        cout << "Tibio" << endl;
    } else {
        cout << "Frio" << endl;
    }
    if(!adivino) {
        if(difference == 0) {
        cout << "Acertaste!" << endl;
        bool adivino = true;
    } else if(difference <= 10) {
        cout << "Caliente" << endl;
    } else if(difference <= 15) {
        cout << "Tibio" << endl;
    } else {
        cout << "Frio" << endl;
    }
    }
    return 0;
}
