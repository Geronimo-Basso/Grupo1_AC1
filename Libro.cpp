#include "Libro.h"

Libro::Libro(){}

Libro::Libro(string ISBN, string titulo, string autor, string categoria) {
    Libro::ISBN=ISBN;
    Libro::titulo=titulo;
    Libro::autor=autor;
    Libro::categoria=categoria;
    Libro::estaDisponible=true;
}

string Libro::getTitulo() {
    return Libro::titulo;
}

bool Libro::getEstaDisponible() const {
    return estaDisponible;
}

void Libro::setEstaDisponible(bool estaDisponible) {
    Libro::estaDisponible = estaDisponible;
}

string Libro::getISBN() {
    return Libro::ISBN;
}


