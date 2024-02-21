#include <iostream>
#include <math.h>
using namespace std;

void ej1()
{
    srand(time(0));

    int dice1 = rand() % 6 + 1;
    int dice2 = rand() % 6 + 1;

    int initialRoll = dice1 + dice2;

    int input;
    cout << "Bienvenido al juego Craps, escriba 1 para tirar los dados" << endl;
    cin >> input;

    if (input == 1)
    {
        cout << "El resultado de los dados es: " << initialRoll << endl;
        if (initialRoll == 7 || initialRoll == 11)
        {
            cout << "Ganaste, con un resutado de " << initialRoll << endl;
        }
        else if (initialRoll == 2 || initialRoll == 3 || initialRoll == 12)
        {
            cout << "Perdiste, con un resutado de " << initialRoll << endl;
        }
        else
        {
            bool stop = false;

            srand(time(0));
            dice1 = rand() % 6 + 1;
            dice2 = rand() % 6 + 1;
            cout << "Tire nuevamente los dados, escriba 1 para lanzarlos" << endl;
            cin >> input;

            if (input == 1)
            {
                int newRoll = dice1 + dice2;
                cout << "El resultado de los dados es: " << newRoll << endl;
                if (newRoll == initialRoll)
                {
                    cout << "Ganaste, con un resutado de " << newRoll << endl;
                    stop = true;
                }
                else if (newRoll == 7)
                {
                    cout << "Perdiste, con un resutado de " << newRoll << endl;
                    stop = true;
                }
            }
            else
            {
                cout << "El input no es valido" << endl;
            }
            if (!stop)
            {
                srand(time(0));
                dice1 = rand() % 6 + 1;
                dice2 = rand() % 6 + 1;
                cout << "Tire nuevamente los dados, escriba 1 para lanzarlos" << endl;
                cin >> input;

                if (input == 1)
                {
                    int newRoll = dice1 + dice2;
                    cout << "El resultado de los dados es: " << newRoll << endl;
                    if (newRoll == initialRoll)
                    {
                        cout << "Ganaste, con un resutado de " << newRoll << endl;
                        stop = true;
                    }
                    else if (newRoll == 7)
                    {
                        cout << "Perdiste, con un resutado de " << newRoll << endl;
                        stop = true;
                    }
                }
                else
                {
                    cout << "El input no es valido" << endl;
                }
                if (!stop)
                {
                    srand(time(0));
                    dice1 = rand() % 6 + 1;
                    dice2 = rand() % 6 + 1;
                    cout << "Tire nuevamente los dados, escriba 1 para lanzarlos" << endl;
                    cin >> input;

                    if (input == 1)
                    {
                        int newRoll = dice1 + dice2;
                        cout << "El resultado de los dados es: " << newRoll << endl;
                        if (newRoll == initialRoll)
                        {
                            cout << "Ganaste, con un resutado de " << newRoll << endl;
                            stop = true;
                        }
                        else if (newRoll == 7)
                        {
                            cout << "Perdiste, con un resutado de " << newRoll << endl;
                            stop = true;
                        }
                    }
                    else
                    {
                        cout << "El input no es valido" << endl;
                    }
                    if (!stop)
                    {
                        srand(time(0));
                        dice1 = rand() % 6 + 1;
                        dice2 = rand() % 6 + 1;
                        cout << "Tire nuevamente los dados, escriba 1 para lanzarlos" << endl;
                        cin >> input;

                        if (input == 1)
                        {
                            int newRoll = dice1 + dice2;
                            cout << "El resultado de los dados es: " << newRoll << endl;
                            if (newRoll == initialRoll)
                            {
                                cout << "Ganaste, con un resutado de " << newRoll << endl;
                                stop = true;
                            }
                            else if (newRoll == 7)
                            {
                                cout << "Perdiste, con un resutado de " << newRoll << endl;
                                stop = true;
                            }
                        }
                        else
                        {
                            cout << "El input no es valido" << endl;
                        }
                    }
                }
            }
        }
    }
    else
    {
        cout << "El input no es valido" << endl;
    }
}

void ej2()
{

    float x;
    float y;

    cout << "Ingrese el valor de x" << endl;
    cin >> x;

    cout << "Ingrese el valor de y" << endl;
    cin >> y;

    float z = sqrt(x + (pow(y, 2) / (3 + x))) - ((pow(x, 2) / (pow(y, 3) + x)) - ((5) * (sqrt(3 * x))));

    cout << "El resultado de la operacion es: " << z << endl;
}
int main()
{

    int input;
    cout << "Escriba 1 para ver el ejercicio 1, 2 para el ejercicio 2" << endl;
    cin >> input;

    if (input == 1)
    {
        ej1();
    }
    else if (input == 2)
    {
        ej2();
    }
    else
    {
        cout << "El input no es valido" << endl;
    }
}
