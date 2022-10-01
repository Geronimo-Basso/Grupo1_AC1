#include <iostream>
#include "vector"
using namespace std;

template <typename T>
class Pila
{
private:
        vector <T> datos;
        int elementos;
public:
    // constructor de una pila vacía:
    Pila() {}


    // Función de inserción de elementos dentro de una pila;
    void insert(T elem)
    {
        if (elementos < 50)
        {
            datos[elementos] = elem;
            elementos ++;
        }
        else
        {
            cout << "Error: Pila llena";
        }
    }

    // Función de extracción de elemento de una pila;
    T extract()
    {
        if (elementos > 0)
        {
            elementos --;
            return datos[elementos];
        }
        else
        {
            cout << "Error: Pila vacía";
        }
    }

    int Numero()
    {
        return elementos;
    }

    bool es_vacia()
    {
        return elementos == 0;
    }

    vector<T> devolverDatos(){
        return datos;
    }


};


