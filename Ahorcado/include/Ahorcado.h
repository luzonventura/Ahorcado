//
// Created by Usuaria on 04/01/2021.
//

#ifndef PFINAL_AHORCADO_H
#define PFINAL_AHORCADO_H

using namespace std;

class Ahorcado {
private:
    string palabra;
    string plantilla;
    string letras;
    int intentos;

    void inicializarPlantilla();
    bool Ganado();

public:
    Ahorcado();
    Ahorcado(string cadena);
    void mostrarPlantilla();
    int getIntentos();
    void setIntentos(int num);
    void mostrarletras();
    bool Fin();
    bool saberLetra(char letra);
    void saberGanar();
    void insertarLetra(char c);
};


#endif //PFINAL_AHORCADO_H
