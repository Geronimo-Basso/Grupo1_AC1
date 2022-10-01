#include "Libro.h"

Libro::Libro(){}

Libro::Libro(long ISBN, string titulo, string autor, string categoria) {
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

long Libro::getISBN() {
    return Libro::ISBN;
}


