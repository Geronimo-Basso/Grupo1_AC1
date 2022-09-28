#include <iostream>
#include "pilagen.h"
using namespace std;

class User{
public:
    int dni;
    string name;
    string surname;
};

class Book{
public:
    string name;
    string author;
    string category;
    bool isTaken;

    Book(const string &name, const string &author, const string &category, bool isTaken) :
    name(name),
    author(author),
    category(category),
    isTaken(isTaken) {}
};


int main() {
    return 0;
}




