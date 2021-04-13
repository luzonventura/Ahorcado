//
// Created by Usuaria on 07/01/2021.
//

#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
#include "../include/Bolsa.h"

using namespace std;


double Bolsa::Aleatorio() {
    double aleatorio = rand() / (RAND_MAX + 1.0);
    return aleatorio;
}

void Bolsa::Barajar() {
    srand (time(NULL));
    for (int i=0; i<TAM; i++){
        int aleatorio1, aleatorio2;

        aleatorio1=Aleatorio()*TAM;
        aleatorio2=Aleatorio()*TAM;

        string cambiar = vector[aleatorio1];

        vector[aleatorio1]=vector[aleatorio2];
        vector[aleatorio2]=cambiar;
    }
}

Bolsa::Bolsa() {
    Barajar();
}

string Bolsa::Seleccionar() {
    int pos_palabra = Aleatorio() * TAM;
    string p_seleccionada = vector[pos_palabra];

    return p_seleccionada;
}

void Bolsa::mostrarBolsa(){
    for(int i = 0; i < TAM; i++)
        cout << vector[i] << "\n";
}
