#ifndef GRUPO1_AC1_MENU_H
#define GRUPO1_AC1_MENU_H

#include "Libro.h"
#include "Usuario.h"
#include "vector"

using namespace std;


class Menu {
    vector<Libro> libros;
    vector<Usuario> usuarios;

public:
    void declaracionInicial();
    Menu();
    void addLibros(Libro libro) {
        libros.push_back(libro);
    }
    void addUsuario(Usuario usuario) {
        usuarios.push_back(usuario);
    }
};


#endif //GRUPO1_AC1_MENU_H
