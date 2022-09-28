//
// Created by Jorge Castilla on 28/9/22.
//

#ifndef GRUPO1_AC1_EJEMPLAR_H
#define GRUPO1_AC1_EJEMPLAR_H


#include "Libro.h"
#include "Persona.h"

class Ejemplar {
    Libro libro;
    int ID;
    Persona poseedor;

public:
    Ejemplar(Libro libro1, int numero, Persona poseedor);
    int Asignar(Persona asignado);
    Persona getPoseedor();
};


#endif //GRUPO1_AC1_EJEMPLAR_H
