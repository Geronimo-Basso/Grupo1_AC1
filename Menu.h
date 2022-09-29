//
// Created by Jorge Castilla on 29/9/22.
//

#ifndef GRUPO1_AC1_MENU_H
#define GRUPO1_AC1_MENU_H

#include "Book.h"
#include "User.h"

using namespace std;


class Menu {
    vector<Book> books;
    vector<User> users;
    Menu();
    void declaracionInicial();
};


#endif //GRUPO1_AC1_MENU_H
