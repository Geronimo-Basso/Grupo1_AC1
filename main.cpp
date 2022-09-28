#include <iostream>
#include "pilagen.h"
#include "Persona.h"
#include "Libro.h"
#include "Ejemplar.h"
using namespace std;



int main() {
    Libro TheGoldenCompass("La Brújula Dorada", 8417092560, "YA");
    Persona Biblioteca(0, "libre", "libre");
    Persona Jorge(11223344, "Jorge", "Castilla");
    Ejemplar TGC1(TheGoldenCompass, 1,Biblioteca);
    cout << TGC1.getPoseedor().Tostring() << endl;
    TGC1.Asignar(Jorge);
    cout << TGC1.getPoseedor().Tostring() << endl;
    TGC1.Asignar(Biblioteca);
    Jorge.anadirAlHistorial(TheGoldenCompass);
    cout << TGC1.getPoseedor().Tostring() << endl;
    for (int i = 0; i < Jorge.devolverhistorial().size(); ++i) {
        cout << Jorge.devolverhistorial().at(i);
    }
    return 0;
}




