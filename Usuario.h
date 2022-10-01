#ifndef GRUPO1_AC1_USUARIO_H
#define GRUPO1_AC1_USUARIO_H

#include <string>
#include "Libro.h"
#include "pilagen.h"

using namespace std;


class Usuario {
    string DNI;
    string nombre;
    string apellidos;
    Pila<Libro> historial;

public:
    Usuario(string DNI, string nombre, string apellidos);
    string getDNI();
    string Tostring();
    void anadirAlHistorial(Libro libro);

};


#endif //GRUPO1_AC1_USUARIO_H
