//
// Created by Jorge Castilla on 28/9/22.
//

#include "Persona.h"

Persona::Persona() {}
Persona::Persona(int DNI, string nombre, string apellido) {
    Persona::DNI=DNI;
    Persona::nombre=nombre;
    Persona::apellidos=apellido;
}

int Persona::getDNI() {
    return DNI;
}

string Persona::Tostring() {
    return nombre;
}
