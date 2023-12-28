#ifndef STACK_H
#define STACK_H

#include "Vect.h"


template <class T>
class Stack {
private:
    Vect<T> vect;
    int top;
    int maxSize;
public:
    Stack(int capacity);
    void push(const T& value);
    T pop();
    bool isEmpty();
    int size();
    T& peek();
    void show();
    int getMaxSize();
};

#include "Stack.cpp"

#endif //STACK_H
