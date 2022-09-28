#include <iostream>
#include "Persona.h"
#include "Libro.h"
#include "Ejemplar.h"
using namespace std;


// ----------------------------------------------------Stack-------------------------------------------------------------
#define SIZE 50

template<typename T> class Stack{

public:
    Stack();

    void push(T elementToAdd);

    T pop();

    bool isFull();

    T topElement();

private:
    int top;
    T st[SIZE];
};

template <class T> Stack<T>::Stack() { top = -1; }

template <class T> void Stack<T>::push(T elementToAdd)
{
    if (isFull()) {

        cout << "Invalid operation stack is full \n";
    }
    cout << "Element added: " << elementToAdd << endl;
    top = top + 1;
    st[top] = elementToAdd;
}

template <class T> T Stack<T>::pop()
{
    T elementToDelete = st[top];
    top--;
    return elementToDelete;
}

template <class T> bool Stack<T>::isFull()
{
    if (top == (SIZE - 1))
        return 1;
    else
        return 0;
}

template <class T> T Stack<T>::topElement()
{
    T top_element = st[top];
    return top_element;
}
// ----------------------------------------------------Stack-------------------------------------------------------------

int main() {
  //Stack<int> stack;
  //stack.push(3);
  //stack.push(70);
  //stack.push(42);
  //stack.push(8);
  //stack.push(39);
  //stack.push(37);
  //stack.push(34);
  //stack.push(23);
  //cout << stack.pop() << "\n";
  //cout << stack.topElement()<< "\n";
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




