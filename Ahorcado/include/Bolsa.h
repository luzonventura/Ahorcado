//
// Created by Usuaria on 07/01/2021.
//

#ifndef PFINAL_BOLSA_H
#define PFINAL_BOLSA_H
#include <string>

using namespace std;

class Bolsa {
private:
    static const int TAM = 76;
    string vector[TAM] = { "caballero",  "Dulcinea",   "historia",   "escudero",
                           "rocinante",  "adelante",   "gobernador", "andantes",
                           "voluntad",   "capitulo",   "menester",   "doncella",
                           "caballeria", "castillo",   "Fernando",   "finalmente",
                           "aventura",   "hermosura",  "palabras",   "gobierno",
                           "intencion",  "cardenio",   "pensamientos", "Luscinda",
                           "lagrimas",   "aposento",   "aventuras",  "quisiera",
                           "libertad",   "desgracia",  "entendimiento", "pensamiento",
                           "licencia",   "Mercedes",   "semejantes", "silencio",
                           "valeroso",   "doncellas",  "labrador",   "caballerias",
                           "cristiano",  "cristianos", "discreto",   "hicieron",
                           "llegaron",   "quisiere",   "espaldas",   "muestras",
                           "escuderos",  "discurso",   "grandeza",   "altisidora",
                           "princesa",   "haciendo",   "renegado",   "provecho",
                           "quedaron",   "resolucion", "presente",   "encantadores",
                           "enamorado",  "valiente",   "encantado",  "molino",
                           "licenciado", "necesidad",  "responder",  "discrecion",
                           "ejercicio",  "hacienda",   "posadero",   "Rocinante",
                           "presencia",  "historias",  "presentes",  "verdadero" };

    double Aleatorio();


public:
    Bolsa();
    string Seleccionar();
    void Barajar();
    void mostrarBolsa();
};





#endif //PFINAL_BOLSA_H
