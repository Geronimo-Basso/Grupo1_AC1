//
// Created by Jorge Castilla on 28/9/22.
//

#ifndef GRUPO1_AC1_BOOK_H
#define GRUPO1_AC1_BOOK_H

#include <string>

using namespace std;

class Book {
    int ISBN;
    string title;
    string author;
    string category;

public:
    Book(int ISBN, string title, string author, string category);
    Book();
    string getTitle();

};


#endif //GRUPO1_AC1_BOOK_H
