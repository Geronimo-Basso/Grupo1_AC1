#ifndef GRUPO1_AC1_USUARIO_H
#define GRUPO1_AC1_USUARIO_H
#include <string>
#include "pilagen.h"
#include "Libro.h"

using namespace std;


class Usuario {
    string DNI;
    string nombre;
    string apellidos;
    Pila<Libro> historial;
    Libro milibro;

public:
    Usuario(string DNI, string nombre, string apellidos);
    string getDNI();
    string Tostring();
    void anadirAlHistorial(Libro libro);
    Pila<Libro> getHistorial();
    Libro getMilibro();
    void setMilibro(Libro milibro);

};
#endif //GRUPO1_AC1_USUARIO_H
