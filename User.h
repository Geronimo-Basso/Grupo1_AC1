//
// Created by Jorge Castilla on 28/9/22.
//

#ifndef GRUPO1_AC1_USER_H
#define GRUPO1_AC1_USER_H

#include <string>
#include "Book.h"
#include <vector>

using namespace std;


class User {
    string DNI;
    string nombre;
    string apellidos;
    std::vector<Book> historial;

public:
    User();
    User(string DNI, string nombre, string apellidos);
    string getDNI();
    string Tostring();
    void anadirAlHistorial(Book leido);
    vector<string> devolverhistorial();

};


#endif //GRUPO1_AC1_USER_H
