//
// Created by Jorge Castilla on 28/9/22.
//

#include "User.h"

User::User() {}
User::User(string DNI, string nombre, string apellido) {
    User::DNI=DNI;
    User::nombre=nombre;
    User::apellidos=apellido;
}

int User::getDNI() {
    return DNI;
}

string User::Tostring() {
    return nombre;
}

void User::anadirAlHistorial(Book leido) {
    User::historial.push_back(leido);
}

vector<string> User::devolverhistorial() {
    vector<string> titulos;
    for (int i = 0; i < User::historial.size(); ++i) {
        titulos.push_back(User::historial.at(i).getTitle());
    }
    return titulos;
}
