//
// Created by Jorge Castilla on 28/9/22.
//

#ifndef GRUPO1_AC1_LIBRO_H
#define GRUPO1_AC1_LIBRO_H

#include <string>

using namespace std;

class Libro {
    string titulo;
    int ISBN;
    string categoria;

public:
    Libro(string titulo, int ISBN, string categoria);
    Libro();
    string getTitulo();

};


#endif //GRUPO1_AC1_LIBRO_H
