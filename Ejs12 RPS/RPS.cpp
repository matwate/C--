#include <iostream>
#include <cstdlib> // For generating random numbers

using namespace std;

int main() {
    int userChoice;
    int computerChoice;
    string choices[5] = {"Papel", "Piedra", "Lagarto", "Spock", "Tijeras"};
    srand(time(0));
    computerChoice = rand() % 4; 

    cout << "Escoja su jugada: 0: Papel 1: Piedra 2: Lagarto: 3: Spock 4: Tijeras: ";
    cin >> userChoice;
    if (userChoice == computerChoice) {
        cout << "Empate";
    } else if ((userChoice + 6) % 5 == computerChoice || (userChoice + 8) % 5 == computerChoice) {
        cout << "Ganaste, la computadora escogio:"<< choices[computerChoice] << " y tu escogiste: " << choices[userChoice] << " " << endl;
    } else {
        cout << "Perdiste, La computadora escogio: " << choices[computerChoice] << " y tu escogiste: " << choices[userChoice] << " " << endl;
    }
    
    return 0;
}
