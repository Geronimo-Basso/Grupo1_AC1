#include <iostream>
#include <vector>
#include "Menu.h"
#include "Book.h"
#include "User.h"

using namespace std;
Menu::Menu() {
    char seleccion;
    while (true)
    {
        cout << "Selecione una opcion:" << endl;
        cin >> seleccion;
        switch (seleccion){
            case '1':
                break;

            case '2':

                break;

            case '3':

                break;

            case '4':

                break;
        }
    }
}

void Menu::declaracionInicial() {
    Book(9780151660346,"1984","George Orwell","Distopía");
    Book(9780679643456,"Nada","Carmen Laforet","Guerra");
    Book(9781421846774,"Los Miserables","Víctor Hugo","Sociedad");
    Book(9788408052944,"El Alquimista","Paulo Coelho","Aventura");
    Book(9781607109914,"La Divina Comedia","Dante","Comedia");
    Book(9780065023961,"Cien Años de Soledad","Gabriel García Marquez","Novela");
    Book(9783140464079,"El Principito","Antoine de Saint-Exupéry","Fantasía");
    Book(9780140431872,"El retrato de Dorian Grey","Oscar Wilde","Novela");
    Book(9781604135794,"Un mundo feliz","Aldous Huxley","Distopía");
    Book(9780141182575,"A sangre fría","Truman Capote","Acción");
    Book(9780003700862,"Cumbres Borrascosas","Emily Bronte","Amor");
    Book(9788489666153,"Rayuela","Julio Cortázar","Novela");
    Book(9780194227568,"Mujercitas","Louise May Alcott","Sociedad");
    Book(9783100767134,"El Diario de Ana Frank","Ana Frank","Guerra");
    Book(9780521402309,"El gran Gatsby","F. Scott Fitzgerald","Novela");
    Book(9780395647400,"El señor de los anillos","J.R.R. Tolkien","Fantasía");
    Book(9780062896261,"American gods","Neil Gaiman","Fantasía");
    Book(9783608938159,"Crónica del asesino de reyes","Patrick Rothfuss","Fantasía");
    Book(9780590353403,"Harry Potter","JK Rowling","Fantasía");
    Book(9780007241873,"Las crónicas de Narnia","C.S. Lewis","Fantasía");
    User("00000000A","Carlos","García");
    User("00000000B","Ruben","Pajares");
    User("00000000C","María","Martínez");
    User("00000000D","Paula","Herranz");
    User("00000000E","Fernando","Contreras");
    User("00000000F","Saturnina","Gil");
    User("00000000G","Pepe","Mora");
    User("00000000H","Lucia","Lucia");
    User("00000000I","Francisco","Vena");
    User("00000000J","Jorge","Nitales");
    User("00000000K","Teodoro","Amigo");
    User("00000000L","Carlota","Esteban");
    User("00000000M","Luisa","Quiroz");
    User("00000000N","Laura","Reyes");
    User("00000000P","Victoria","Doblas");
}
