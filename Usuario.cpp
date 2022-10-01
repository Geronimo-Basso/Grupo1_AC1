#include "Usuario.h"


Usuario::Usuario(string DNI, string nombre, string apellido) {
    Usuario::DNI=DNI;
    Usuario::nombre=nombre;
    Usuario::apellidos=apellido;
    Usuario::historial= Pila<Libro>();
    Usuario::milibro= Libro();
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

Pila<Libro> Usuario::getHistorial(){
    return Usuario::historial;
}

Libro Usuario::getMilibro() {
    return Usuario::milibro;
}

void Usuario::setMilibro(Libro milibro) {
    Usuario::milibro=milibro;
}


