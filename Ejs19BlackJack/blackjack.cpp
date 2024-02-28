#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main() {
    srand(time(0));

    std::cout << "Welcome to Blackjack!\n";

    int computerDeckValue = rand() % 21 + 2;
    int playerDeckValue = rand() % 21 + 2;

    if (playerDeckValue > 21) {
        std::cout << "Sacaste " << playerDeckValue << ", Perdiste!\n";
    } else {
        while (playerDeckValue < 21) {
            std::cout << "El valor de tu mano es de " << playerDeckValue << ", ¿Quieres otra carta? (s/n): ";
            std::string answer;
            std::cin >> answer;

            if (answer == "n") {
                break;
            } else if (answer == "s") {
                playerDeckValue += rand() % 13 + 1;
                std::cout << "El valor de tu mano es de " << playerDeckValue << "\n";
                if (playerDeckValue > 21) {
                    std::cout << "Tu mano vale " << playerDeckValue << ", Perdiste!\n";
                }
            } else {
                std::cout << "Respuesta no valida\n";
            }
        }
    }

    std::cout << "El valor de la mano de la computadora es de " << computerDeckValue << "\n";
    if (playerDeckValue <= 21) {
        if (playerDeckValue == computerDeckValue) {
            std::cout << "El valor de tu mano es de " << playerDeckValue << ", Empate!\n";
        } else if (playerDeckValue > computerDeckValue) {
            std::cout << "El valor de tu mano es de " << playerDeckValue << ", Ganaste!\n";
        } else {
            std::cout << "El valor de tu mano es de " << playerDeckValue << ", Perdiste!\n";
        }
    } else if (playerDeckValue == 21) {
        std::cout << "El valor de tu mano es de " << playerDeckValue << ", Ganaste!\n";
    } else {
        std::cout << "El valor de tu mano es de " << playerDeckValue << ", Perdiste!\n";
    }

    return 0;
}