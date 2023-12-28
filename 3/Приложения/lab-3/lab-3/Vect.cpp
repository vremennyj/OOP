#ifndef VECT_CPP
#define VECT_CPP

#include "Vect.h"

template <class T>
Vect<T>::Vect(int s) : size(s) {
    data = new T[size];
}

template <class T>
Vect<T>::~Vect() {
    delete[] data;
}

template <class T>
T& Vect<T>::operator[](int index) {
    return data[index];
}

#endif  // VECT_CPP