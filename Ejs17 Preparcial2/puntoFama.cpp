#include <iostream>

using namespace std;

/*
Ejercicio:
Punto-Fama
En este juego de dos personas, el jugador B intenta adivinar un número secreto de dos dígitos que el jugador A ha ingresado al inicio. El sistema le dará pistas de la siguiente manera:
-	Se le dice que tiene un “punto” si el número que ingresó contiene al menos un dígito del número secreto, pero no en la posición correcta, sin decirle cual
-	Se le dice que tiene una “fama” si el número que ingresó contiene al menos un dígito del número secreto en la posición correcta, sin decirle cual
El jugador B tiene máximo 5 intentos para adivinar el número.
El resumen del algoritmo es:
Pida al jugador A que ingrese el número secreto de dos dígitos. Si no lo ingresa, el programa terminará de inmediato con un mensaje de error.
Si el número secreto el válido, los turnos del usuario B inician y se le pide que ingrese un número. Se determina si es válido; si no lo es, el jugador pierde ese turno y se vuelve a leer otro número.
El programa verificará si el número ingresado es en secreto. En este caso, el programa debe terminar, anunciando la victoria del jugador B. En caso de que no sea el número, el programa pasa a verificar la existencia de puntos y famas, y los escribirá por pantalla, para darle paso al siguiente intento.
Si luego del 5 intento el jugador B no ha encontrado en número, el programa terminará, anunciando que el jugador B ha perdido.



*/

/*
Razonamiento:

Como el numero se le debe de pedir completo y no digito por digito, pero necesitamos los digitos independientes para ver si estan en la correcta posicion o no
podemos hacer lo siquiente:

1. Asumamos que el numero es 25
Si calculamos 25 % 10, nos da 5, que es el ultimo digito
Si calculamos 25 / 10, nos da 2, debido al truco de division entre enteros en C++, que es el primer digito

Entonces tenemos que hacer eso para tanto el numero secreto, como el numero que ingresa el jugador B


*/
int main()
{
    int numero_secreto;
    int digito1, digito2;

    cout << "Ingrese el numero secreto de dos digitos" << endl;
    cin >> numero_secreto;

    // Si el numero no es de 2 digitos, Terminamos el programa
    if (numero_secreto < 10 || numero_secreto > 99)
    {
        cout << "El numero secreto no es valido" << endl;

        // Return 0 termina el programa
        return 0;
    }

    // Calculamos los digitos del numero secreto
    digito1 = numero_secreto / 10;
    digito2 = numero_secreto % 10;

    // Inicializamos las variables para el jugador B
    int numero_jugador;
    int digito1_jugador, digito2_jugador;

    // Creamos la logica para el primer intento

    cout << "Jugador B, Ingrese su primer intento" << endl;
    cin >> numero_jugador;

    bool stop;
    // Verificamos que el numero sea de dos digitos
    if (numero_jugador < 10 || numero_jugador > 99)
    {
        cout << "El numero ingresado no es valido" << endl;
    }
    else
    {
        // Calculamos los digitos del numero ingresado
        digito1_jugador = numero_jugador / 10;
        digito2_jugador = numero_jugador % 10;

        // Verificamos si el numero es el correcto
        if (digito1_jugador == digito1 && digito2_jugador == digito2)
        {
            cout << "Felicidades, has adivinado el numero secreto" << endl;
            stop = true;
        }
        else
        {
            // Verificamos si el numero tiene un punto
            if (digito2_jugador == digito1 || digito2_jugador == digito2)
            {
                //Verificamos si el numero tiene dos puntos
                if (digito1_jugador == digito2 && digito2_jugador == digito1)
                {
                    cout << "Tienes Dos puntos " << endl;
                }else{
                    cout << "Tienes un punto" << endl;
                }
                
            }

            // Verificamos si el numero tiene una fama
            if (digito1_jugador == digito1)
            {
                cout << "Tienes una fama" << endl;
            }
            else if (digito2_jugador == digito2)
            {
                cout << "Tienes una fama" << endl;
            }
        }
    }
    /*
        Esta Es la logica de cada intento, y como debemos hacerlas con condicionales y sin ciclos
        Usamos una variable llamada stop, para saber si el jugador adivino el numero no, y salirse de las condicionales
        Debemos añadir esa variable tras cada intento y verificar si el jugador adivino el numero o no

        Basicamente debemos de copiar todo 5 veces junto con una condicional verificando.
    */
    if (!stop)
    {
        cout << "Jugador B, Ingrese su segundo intento" << endl;
        cin >> numero_jugador;
        if (numero_jugador < 10 || numero_jugador > 99)
        {
            cout << "El numero ingresado no es valido" << endl;
        }
        else
        {
            // Calculamos los digitos del numero ingresado
            digito1_jugador = numero_jugador / 10;
            digito2_jugador = numero_jugador % 10;

            // Verificamos si el numero es el correcto
            if (digito1_jugador == digito1 && digito2_jugador == digito2)
            {
                cout << "Felicidades, has adivinado el numero secreto" << endl;
            }
            else
            {
                // Verificamos si el numero tiene un punto
                if (digito2_jugador == digito1 || digito2_jugador == digito2)
                {
                    cout << "Tienes un punto" << endl;
                }
                else if (digito1_jugador == digito2 && digito2_jugador == digito1)
                {
                    cout << "Tienes Dos puntos punto" << endl;
                }
                else
                {
                }

                // Verificamos si el numero tiene una fama
                if (digito1_jugador == digito1)
                {
                    cout << "Tienes una fama" << endl;
                }
                else if (digito2_jugador == digito2)
                {
                    cout << "Tienes una fama" << endl;
                }
            }
        }
        if (!stop)
        {
            cout << "Jugador B, Ingrese su Tercer intento" << endl;
            cin >> numero_jugador;
            if (numero_jugador < 10 || numero_jugador > 99)
            {
                cout << "El numero ingresado no es valido" << endl;
            }
            else
            {
                // Calculamos los digitos del numero ingresado
                digito1_jugador = numero_jugador / 10;
                digito2_jugador = numero_jugador % 10;

                // Verificamos si el numero es el correcto
                if (digito1_jugador == digito1 && digito2_jugador == digito2)
                {
                    cout << "Felicidades, has adivinado el numero secreto" << endl;
                }
                else
                {
                    // Verificamos si el numero tiene un punto
                    if (digito2_jugador == digito1 || digito2_jugador == digito2)
                    {
                        cout << "Tienes un punto" << endl;
                    }
                    else if (digito1_jugador == digito2 && digito2_jugador == digito1)
                    {
                        cout << "Tienes Dos puntos punto" << endl;
                    }
                    else
                    {
                    }

                    // Verificamos si el numero tiene una fama
                    if (digito1_jugador == digito1)
                    {
                        cout << "Tienes una fama" << endl;
                    }
                    else if (digito2_jugador == digito2)
                    {
                        cout << "Tienes una fama" << endl;
                    }
                }
            }
            if (!stop)
            {
                cout << "Jugador B, Ingrese su cuarto intento" << endl;
                cin >> numero_jugador;
                if (numero_jugador < 10 || numero_jugador > 99)
                {
                    cout << "El numero ingresado no es valido" << endl;
                }
                else
                {
                    // Calculamos los digitos del numero ingresado
                    digito1_jugador = numero_jugador / 10;
                    digito2_jugador = numero_jugador % 10;

                    // Verificamos si el numero es el correcto
                    if (digito1_jugador == digito1 && digito2_jugador == digito2)
                    {
                        cout << "Felicidades, has adivinado el numero secreto" << endl;
                    }
                    else
                    {
                        // Verificamos si el numero tiene un punto
                        if (digito2_jugador == digito1 || digito2_jugador == digito2)
                        {
                            cout << "Tienes un punto" << endl;
                        }
                        else if (digito1_jugador == digito2 && digito2_jugador == digito1)
                        {
                            cout << "Tienes Dos puntos punto" << endl;
                        }
                        else
                        {
                        }

                        // Verificamos si el numero tiene una fama
                        if (digito1_jugador == digito1)
                        {
                            cout << "Tienes una fama" << endl;
                        }
                        else if (digito2_jugador == digito2)
                        {
                            cout << "Tienes una fama" << endl;
                        }
                    }
                }
                if (!stop)
                {
                    cout << "Jugador B, Ingrese su Quinto intento" << endl;
                    cin >> numero_jugador;
                    if (numero_jugador < 10 || numero_jugador > 99)
                    {
                        cout << "El numero ingresado no es valido" << endl;
                    }
                    else
                    {
                        // Calculamos los digitos del numero ingresado
                        digito1_jugador = numero_jugador / 10;
                        digito2_jugador = numero_jugador % 10;

                        // Verificamos si el numero es el correcto
                        if (digito1_jugador == digito1 && digito2_jugador == digito2)
                        {
                            cout << "Felicidades, has adivinado el numero secreto" << endl;
                        }
                        else
                        {
                            // Verificamos si el numero tiene un punto
                            if (digito2_jugador == digito1 || digito2_jugador == digito2)
                            {
                                cout << "Tienes un punto" << endl;
                            }
                            else if (digito1_jugador == digito2 && digito2_jugador == digito1)
                            {
                                cout << "Tienes Dos puntos punto" << endl;
                            }
                            else
                            {
                            }

                            // Verificamos si el numero tiene una fama
                            if (digito1_jugador == digito1)
                            {
                                cout << "Tienes una fama" << endl;
                            }
                            else if (digito2_jugador == digito2)
                            {
                                cout << "Tienes una fama" << endl;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
