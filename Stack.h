//
// Created by Geronimo Basso on 28/9/22.
//

#ifndef GRUPO1_AC1_STACK_H
#define GRUPO1_AC1_STACK_H



class Stack {

};

#include <iostream>
using namespace std;
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



int main() {
    Stack<int> stack;
    stack.push(3);
    stack.push(70);
    stack.push(42);
    stack.push(8);
    stack.push(39);
    stack.push(37);
    stack.push(34);
    stack.push(23);
    cout << stack.pop() << "\n";
    cout << stack.topElement()<< "\n";
    return 0;
}



#endif //GRUPO1_AC1_STACK_H
