#include <iostream>
#include <vector>
#include "Menu.h"
#include "Libro.h"
#include "Usuario.h"
using namespace std;

Menu::Menu() {
    vector<Libro> librosDisponibles;
    declaracionInicial();
    char seleccion;
    string documento;
    bool encontreUsuario = false;
    string isbn;
    while (true) {
        cout << "Selecione una opcion: "
             << "\n1.Comprobar que libros hay disponibles \n2.Ver historial de una persona \n3.Ver prestamos activos de una persona \n4.Sacar un libro \n5.Devolver un libro"
             << endl;
        cin >> seleccion;
        switch (seleccion) {
            case '1':
                cout << "Los libros disponibles actualmente son: " << endl;
                for (int i = 0; i < libros.size(); i++) {
                    if (libros[i].getEstaDisponible()) {
                        librosDisponibles.push_back(libros[i]);
                    }
                }
                for (int i = 0; i < librosDisponibles.size(); i++) {
                    cout << librosDisponibles.at(i).getTitulo() << endl;
                }
                break;

            case '2':
                cout << "Inserte el DNI de la persona que quiere ver el historial: " << endl;
                cin >> documento;
                for (int i = 0; i < usuarios.size(); i++) {
                    if (usuarios[i].getDNI() == documento) {
                        encontreUsuario = true;
                        for (int k = 0; k < usuarios.at(i).getHistorial().devolverDatos().size(); k++) {
                            cout << usuarios.at(i).getHistorial().devolverDatos().at(k).getTitulo() << endl;
                        }
                    }
                }

                if (!encontreUsuario) {
                    cout << "El DNI ingresado no esta registrado en nuestro sistema, intente otra vez." << endl;
                }
                break;

            case '3':
                cout << "Inserte el DNI de la persona que quiera ver su libro prestado: " << endl;
                cin >> documento;
                for (int j = 0; j < usuarios.size(); j++) {
                    if (usuarios[j].getDNI() == documento) {
                        cout << usuarios.at(j).getMilibro().getTitulo() << endl;
                    }
                }
                break;

            case '4':
                cout << "Introduzca el ISBN del libro que desea sacar: ";
                cin >> documento;
                for (int i = 0; i < libros.size(); i++) {
                    if (to_string(libros.at(i).getISBN()) == documento) {
                        cout << "Inserte el DNI de la persona que quiere sacar un libro: " << endl;
                        cin >> documento;
                        for (int j = 0; j < usuarios.size(); j++) {
                            if (usuarios[j].getDNI() == documento) {
                                usuarios.at(j).setMilibro(libros.at(i));
                                usuarios.at(j).anadirAlHistorial(libros.at(i));
                            }
                        }
                        libros.at(i).setEstaDisponible(false);
                    }
                }
                break;


            case '5':
                cout << "Introduzca el ISBN del libro que quiere devolver: " << endl;
                cin >> isbn;
                for (int i = 0; i < libros.size(); i++) {
                    if (libros.at(i).getISBN() == stol(isbn)) {
                        libros.at(i).setEstaDisponible(true);
                    }
                }
                break;

            default:
                cout << "Por favor elija una opción valida.";
        }
    }
}

    void Menu::declaracionInicial()
    {
        libros.push_back(Libro(9780151660346, "1984", "George Orwell", "Distopía"));
        libros.push_back(Libro(9781421846774, "Los Miserables", "Víctor Hugo", "Sociedad"));
        libros.push_back(Libro(9788408052944, "El Alquimista", "Paulo Coelho", "Aventura"));
        libros.push_back(Libro(9781607109914, "La Divina Comedia", "Dante", "Comedia"));
        libros.push_back(Libro(9780065023961, "Cien Años de Soledad", "Gabriel García Marquez", "Novela"));
        libros.push_back(Libro(9783140464079, "El Principito", "Antoine de Saint-Exupéry", "Fantasía"));
        libros.push_back(Libro(9780140431872, "El retrato de Dorian Grey", "Oscar Wilde", "Novela"));
        libros.push_back(Libro(9781604135794, "Un mundo feliz", "Aldous Huxley", "Distopía"));
        libros.push_back(Libro(9780141182575, "A sangre fría", "Truman Capote", "Acción"));
        libros.push_back(Libro(9780003700862, "Cumbres Borrascosas", "Emily Bronte", "Amor"));
        libros.push_back(Libro(9788489666153, "Rayuela", "Julio Cortázar", "Novela"));
        libros.push_back(Libro(9780194227568, "Mujercitas", "Louise May Alcott", "Sociedad"));
        libros.push_back(Libro(9783100767134, "El Diario de Ana Frank", "Ana Frank", "Guerra"));
        libros.push_back(Libro(9780521402309, "El gran Gatsby", "F. Scott Fitzgerald", "Novela"));
        libros.push_back(Libro(9780395647400, "El señor de los anillos", "J.R.R. Tolkien", "Fantasía"));
        libros.push_back(Libro(9780062896261, "American gods", "Neil Gaiman", "Fantasía"));
        libros.push_back(Libro(9783608938159, "Crónica del asesino de reyes", "Patrick Rothfuss", "Fantasía"));
        libros.push_back(Libro(9780590353403, "Harry Potter", "JK Rowling", "Fantasía"));
        libros.push_back(Libro(9788417092566, "La brújula dorada", "Philip Pullman", "Fantasía"));
        libros.push_back(Libro(9780007241873, "Las crónicas de Narnia", "C.S. Lewis", "Fantasía"));
        usuarios.push_back(Usuario("00000000", "Jorge", "DeLeon"));
        usuarios.push_back(Usuario("00000000A", "Carlos", "García"));
        usuarios.push_back(Usuario("00000000B", "Ruben", "Pajares"));
        usuarios.push_back(Usuario("00000000C", "María", "Martínez"));
        usuarios.push_back(Usuario("00000000D", "Paula", "Herranz"));
        usuarios.push_back(Usuario("00000000E", "Fernando", "Contreras"));
        usuarios.push_back(Usuario("00000000F", "Saturnina", "Gil"));
        usuarios.push_back(Usuario("00000000G", "Pepe", "Mora"));
        usuarios.push_back(Usuario("00000000H", "Lucia", "Lucia"));
        usuarios.push_back(Usuario("00000000I", "Francisco", "Vena"));
        usuarios.push_back(Usuario("00000000J", "Jorge", "Nitales"));
        usuarios.push_back(Usuario("00000000K", "Teodoro", "Amigo"));
        usuarios.push_back(Usuario("00000000L", "Carlota", "Esteban"));
        usuarios.push_back(Usuario("00000000M", "Luisa", "Quiroz"));
        usuarios.push_back(Usuario("00000000N", "Laura", "Reyes"));
        usuarios.push_back(Usuario("00000000P", "Victoria", "Doblas"));
    }