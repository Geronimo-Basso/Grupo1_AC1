//
// Created by Jorge Castilla on 29/9/22.
//

#ifndef GRUPO1_AC1_MENU_H
#define GRUPO1_AC1_MENU_H

#include "Libro.h"
#include "Persona.h"
#include "Ejemplar.h"

using namespace std;


class Menu {
    vector<Libro> titulos;
    vector<Persona> usuarios;
    vector<Ejemplar> libros;
    Menu();
    void declaracionInicial();
};


#endif //GRUPO1_AC1_MENU_H
