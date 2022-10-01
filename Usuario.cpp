#include "Usuario.h"
#include "pilagen.h"

Usuario::Usuario(string DNI, string nombre, string apellido) {
    Usuario::DNI=DNI;
    Usuario::nombre=nombre;
    Usuario::apellidos=apellido;
    Usuario::historial=Pila<Libro>();
}

string Usuario::getDNI() {
    return DNI;
}

string Usuario::Tostring() {
    return nombre;
}

void Usuario::anadirAlHistorial(Libro leido) {
    Usuario::historial.insert(leido);
}



