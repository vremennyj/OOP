#ifndef VECT_H
#define VECT_H

template <class T>
class Vect {
private:
    T* data;
    int size;

public:
    Vect(int s);
    ~Vect();
    T& operator[](int index);
};

#include "Vect.cpp"

#endif  // VECT_H