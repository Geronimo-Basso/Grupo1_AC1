//
// Created by Jorge Castilla on 28/9/22.
//

#include "Libro.h"

Libro::Libro() {}
Libro::Libro(string titulo, int ISBN, string categoria) {
    Libro::titulo=titulo;
    Libro::ISBN=ISBN;
    Libro::categoria=categoria;
}

string Libro::getTitulo() {
    return Libro::titulo;
}
