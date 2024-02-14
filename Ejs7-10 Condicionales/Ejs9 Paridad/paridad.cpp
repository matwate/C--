#include <iostream>

using namespace std;

int main() {
    // Your code here
    long n;
    cout << "Ingrese un número: ";
    cin >> n;

    if (n % 2 == 0) {
        cout << "El número es par";
    } 
    if(n % 2 != 0) {
        cout << "El número es impar";
    }
    return 0;
}
