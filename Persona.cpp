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

void Persona::anadirAlHistorial(Libro leido) {
    Persona::historial.push_back(leido);
}

vector<string> Persona::devolverhistorial() {
    vector<string> titulos;
    for (int i = 0; i < Persona::historial.size(); ++i) {
        titulos.push_back(Persona::historial.at(i).getTitulo());
    }
    return titulos;
}
