//
// Created by Jorge Castilla on 29/9/22.
//

#include <iostream>
#include <vector>
#include "Menu.h"
#include "Libro.h"
#include "Persona.h"
#include "Ejemplar.h"

using namespace std;
Menu::Menu() {
    char seleccion;
    while (true)
    {
        cout << "Selecione una opcion:" << endl;
        cin >> seleccion;
        switch (seleccion){
            case 'A':

                break;

            case 'B':

                break;

            case 'C':

                break;

            case 'D':

                break;
        }
    }
}

void Menu::declaracionInicial() {
    Libro TheGoldenCompass("La Brújula Dorada", 8417092560, "YA");
    Persona Biblioteca(0, "libre", "libre");
    Ejemplar TGC1(TheGoldenCompass, 1,Biblioteca);
    Menu::titulos.push_back(TheGoldenCompass);
    Menu::usuarios.push_back(Biblioteca);
    Menu::libros.push_back(TGC1);
}
