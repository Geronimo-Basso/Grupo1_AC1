//
// Created by Jorge Castilla on 28/9/22.
//

#include "Book.h"

Book::Book() {}
Book::Book(long ISBN,string title,string author, string category) {
    Book::ISBN=ISBN;
    Book::title=title;
    Book::author=author;
    Book::category=category;
}

string Book::getTitle() {
    return Book::title;
}
