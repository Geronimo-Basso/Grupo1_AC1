#ifndef GRUPO1_AC1_LIBRO_H
#define GRUPO1_AC1_LIBRO_H
#include <string>
using namespace std;

class Libro {
    long ISBN;
    string titulo;
    string autor;
    string categoria;
    bool estaDisponible;

public:
    Libro();
    Libro(long ISBN, string titulo, string autor, string categoria);
    string getTitulo();
    bool getEstaDisponible() const;
    void setEstaDisponible(bool estaDisponible);
    long getISBN();
};

#endif //GRUPO1_AC1_LIBRO_H
