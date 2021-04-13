#include <iostream>
#include "../include/Ahorcado.h"
#include "../include/Bolsa.h"

int main() {

    Bolsa b;

    int num_partidas, intentos;
    char letra;

    std::cout << R"(
                 8888888888 888
                 888        888                     __________
                 888        888                    |         |
                 8888888    888                    |         0
                 888        888                    |        /|\
                 888        888                    |        / \
                 888        888                    |
                 8888888888 888                    |



                          888                                             888
                          888                                             888
                          888                                             888
                  8888b.  88888b.   .d88b.  888d888 .d8888b  8888b.   .d88888  .d88b.
                     "88b 888 "88b d88""88b 888P"  d88P"        "88b d88" 888 d88""88b
                 .d888888 888  888 888  888 888    888      .d888888 888  888 888  888
                 888  888 888  888 Y88..88P 888    Y88b.    888  888 Y88b 888 Y88..88P
                 "Y888888 888  888  "Y88P"  888     "Y8888P" Y888888  "Y88888  "Y88P"
    )" << '\n';

    cout << " --------------------------------- BIENVENIDO JUGADOR --------------------------------- " << endl;
    cout << "CUANTAS PARTIDAS QUIERE JUGAR? ";
    cin >> num_partidas;

    int i = 0;

    do {
        Ahorcado partida(b.Seleccionar());

        do {
            cout << "De cuantos intentos quiere disponer? ";
            cin >> intentos;
        } while (intentos <= 0);

        cout << endl;
        partida.setIntentos(intentos);
        cout << "PARTIDA " << i + 1 << ": " << endl;


        while (!partida.Fin()) {
            cout << "Inserte una letra a adivinar: ";
            cin >> letra;
            partida.insertarLetra(letra);
            cout << endl << endl;
        }

        partida.saberGanar();
        cout << endl << endl;
        i++;
    } while (i < num_partidas);


}
