//
// Created by Jorge Castilla on 28/9/22.
//

#include "Ejemplar.h"

Ejemplar::Ejemplar(Libro libro, int numero, Persona poseedor) {
    Ejemplar::libro = libro;
    Ejemplar::ID = numero;
    Ejemplar::poseedor = poseedor;
}

int Ejemplar::Asignar(Persona asignado) {
    if (Ejemplar::poseedor.getDNI() == 0)
    {
        Ejemplar::poseedor=asignado;
        return 0;
    } else {
        return 1;
    }
}

Persona Ejemplar::getPoseedor() {
    return poseedor;
}
