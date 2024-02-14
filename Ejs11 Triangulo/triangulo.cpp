#include <iostream>
using namespace std;


int main() {
    int a, b, c;

    cout << "Ingrese la longitud del primer lado: ";
    cin >> a;

    cout << "Ingrese la longitud del segundo lado: ";
    cin >> b;
    
    cout << "Ingrese la longitud del tercer lado: ";
    cin >> c;

    if (a == b && b == c) {
        cout << "Equilátero";
    }else if(a == b || b == c || a == c){
        
        cout << "Isósceles";
    }else{
        cout << "Escaleno";
    }
    return 0;
}
