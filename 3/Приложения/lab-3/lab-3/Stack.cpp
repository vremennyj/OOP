#ifndef STACK_CPP
#define STACK_CPP
#include <iostream>
#include "Stack.h"



template <class T>
Stack<T>::Stack(int capacity) : vect(capacity), top(0) {
    if (capacity == 0) {
        throw 0;
    };
    maxSize = capacity;
}

template <class T>
void Stack<T>::push(const T& value) {
    if (top + 1 > maxSize) {
        throw 1;
    };
    vect[top] = value;
    top++;
    
}

template <class T>
T Stack<T>::pop() {
    if (top > 0) {
        top--;
        return vect[top];
    }
    else {
        throw 3;
    }
}

template <class T>
bool Stack<T>::isEmpty() {
    return top == 0;
}

template <class T>
int Stack<T>::size() {
    return top;
}

template <class T>
T& Stack<T>::peek() {
    if (top > 0) {
        return vect[top - 1];
    }
    else {
        throw 3;
    }
}

template <class T>
void Stack<T>::show() {
    for (int i = top - 1; i >= 0; i--) {
        std::cout << vect[i] << " ";
    }
    std::cout << std::endl;
}

template <class T>
int Stack<T>::getMaxSize() {
    return maxSize;
}

#endif  // STACK_CPP
