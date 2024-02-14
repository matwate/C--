#include <iostream>

using namespace std;

int main(){
    string toppings[5] = {"Pepperoni", "Jamon", "Champiñones", "Pimenton", "Cebolla"};
    int prices[5] = {100,200,300,400,500};
    int numToppings[5];

    cout << "Desea Pepperoni?, escriba 1 si si, 0 si no: ";
    cin >> numToppings[0];

    cout << "Desea Jamon?, escriba 1 si si, 0 si no: ";
    cin >> numToppings[1];

    cout << "Desea Champiñones?, escriba 1 si si, 0 si no: ";
    cin >> numToppings[2];

    cout << "Desea Pimenton?, escriba 1 si si, 0 si no: ";
    cin >> numToppings[3];

    cout << "Desea Cebolla?, escriba 1 si si, 0 si no: ";
    cin >> numToppings[4];

    int total = numToppings[0]*prices[0] + numToppings[1]*prices[1] + numToppings[2]*prices[2] + numToppings[3]*prices[3] + numToppings[4]*prices[4];

    cout << "El precio total de la pizza es: " << total << endl;
    return 0;
}