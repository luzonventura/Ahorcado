//
// Created by Usuaria on 04/01/2021.
//

#include <iostream>
#include <string>
#include "../include/Ahorcado.h"

using namespace std;

Ahorcado::Ahorcado(){
    palabra = " ";
    plantilla = " ";
    letras = " ";
    intentos = 0;
}

Ahorcado::Ahorcado(string cadena){
    palabra = cadena;
    inicializarPlantilla();
}

void Ahorcado::mostrarPlantilla() {
    cout << "Plantilla: " << plantilla;
}

void Ahorcado::inicializarPlantilla(){
    int tam = ((palabra.size())*2) - 1;
    for(int i = 0; i < tam; i++) {
        if (i % 2 != 0)
            plantilla.push_back('-');
        else
            plantilla.push_back(' ');
    }
}

int Ahorcado::getIntentos(){
    return intentos;
}

void Ahorcado::setIntentos(int num){
    intentos = num;
}

void Ahorcado::mostrarletras(){
    cout << "Letras utilizadas: " << letras;
}

bool Ahorcado::Fin(){
    bool acabado = false;
    if(intentos == 0)
        acabado = true;
    else{
        if(Ganado())
            acabado = true;
    }
    return acabado;
}

void Ahorcado::saberGanar(){
    if(Ganado())
        cout << "FELICIDADES, HA GANADO LA PARTIDA. ";
    else {
        cout << "GAME OVER, HAS PERDIDO. " << endl;
        cout << "La palabra era: " << palabra;
    }
}

bool Ahorcado::Ganado(){
    bool ganar = true;
    int j = 0;
    for(int i = 0; i < plantilla.size() && ganar; i++) {
        if (plantilla[i] != '-') {
            if (palabra[j] != plantilla[i]){
                ganar = false;
            }
            j++;
        }
    }
    return ganar;
}

bool Ahorcado::saberLetra(char letra) {
    bool incluida = true;
    if((letra >= 65 && letra <= 90) || (letra >= 97 && letra <= 122)){
        for (int i = 0; i < letras.size() && incluida ; i++) {
            if (tolower(letra) == letras[i] || toupper(letra) == letras[i])
                incluida = false;
        }
        for(int i = 0; i < plantilla.size() && incluida ; i++) {
            if (tolower(letra) == plantilla[i] || toupper(letra) == plantilla[i])
                incluida = false;
        }
    }
    else{
        incluida = false;
    }
    return incluida;
}

void Ahorcado::insertarLetra(char c) {
    bool cumple = false;
    if(saberLetra(c) && !Fin()){
        for(int i = 0; i < palabra.size(); i++) {
            if ((palabra[i] == tolower(c)) || (palabra[i] == toupper(c))) {
                if (i == 0){
                    plantilla[i] = palabra[i];
                }
                else{
                    plantilla[2 * i] = palabra[i];
                }
                cumple = true;
            }
        }
        if(!cumple) {
            letras.push_back(c);
            intentos--;
        }
        mostrarPlantilla();
        cout << endl;
        mostrarletras();
        cout << endl << "Numero de intentos restantes: " << intentos;
    }
    else {
        if (!saberLetra(c))
            cout << "El caracter " << c << " no es valido o es repetido. ";
        else
            cout << "La partida ha finalizado. " << endl;
    }
}
