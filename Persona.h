//
// Created by Jorge Castilla on 28/9/22.
//

#ifndef GRUPO1_AC1_PERSONA_H
#define GRUPO1_AC1_PERSONA_H

#include <string>
#include "Libro.h"
#include <vector>

using namespace std;


class Persona {
    int DNI;
    string nombre;
    string apellidos;
    std::vector<Libro> historial;

public:
    Persona();
    Persona(int DNI, string nombre, string apellidos);
    int getDNI();
    string Tostring();
    void anadirAlHistorial(Libro leido);
    vector<string> devolverhistorial();

};


#endif //GRUPO1_AC1_PERSONA_H
