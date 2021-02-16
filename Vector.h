//
// Created by alex on 16.02.2021.
//

#ifndef UNTITLED6_VECTOR_H
#define UNTITLED6_VECTOR_H

#include <iostream>


class Vector {

    int *Values;
    int Quantity;
    int DynamicQuantity;
public:
    Vector();

    Vector(const Vector &vector);

    Vector(const int &Quantity_, int *&Values_);

    Vector &operator=(const Vector &vector);
    int operator[]( int& Number);


    ~Vector();

    const Vector &operator[](int &index) const;

    int size();

    int find(const int &ElementValue);

    void push(const int &NewElementValue);

    void change(const int &OldValue, const int &NewValue);

    friend std::ostream& operator<<(std::ostream& out, const Vector& vector);

};
 std::ostream& operator<<(std::ostream& out, const Vector& vector);

#endif //UNTITLED6_VECTOR_H
