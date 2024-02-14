#include <iostream>
using namespace std;

int main()
{
    // Your code goes here
    float peso, altura, imc;

    cout << "Ingrese su peso en kg: ";
    cin >> peso;

    cout << "Ingrese su altura en metros: ";
    cin >> altura;

    imc = peso / (altura * altura);

    if (imc < 18.5)
    {
        cout << "Desnutrición";
    }
    if (imc >= 18.5 && imc < 22)
    {
        cout << "bajo peso";
    }
    if (imc >= 22 && imc < 25)
    {
        cout << "Normal";
    }
    if (imc >= 25 && imc < 30)
    {
        cout << "Sobrepeso";
    }
    if (imc >= 30){
        cout << "Obesidad";
    }
    return 0;
}
