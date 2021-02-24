//
// Created by alex on 16.02.2021.
//

#include "Vector.h"
#include <iostream>

Vector::Vector() {
    Values = new int[10];
    DynamicQuantity = 10;
    Quantity = 0;
}

Vector::Vector(const int &Quantity_, int *&Values_)
        : Quantity(Quantity_), DynamicQuantity(Quantity_) {
    Values = new int[DynamicQuantity];
    for (int i = 0; i < DynamicQuantity; i++) {
        Values[i] = Values_[i];
    }
}

Vector::Vector(const Vector &vector)
        : Quantity(vector.Quantity), DynamicQuantity(vector.DynamicQuantity) {
    Values = new int[DynamicQuantity];
    for (int i = 0; i < Quantity; i++) {
        Values[i] = vector.Values[i];
    }
}

Vector::~Vector() {
    delete[] Values;
}

int Vector::size() {
    return Quantity;
}

void Vector::change(const int &OldValue, const int &NewValue) {
    for (int i = 0; i < Quantity; i++)
        if (Values[i] == OldValue){
            Values[i] = NewValue;
            break;
        }
}

void Vector::push(const int &NewElementValue) {
    if (Quantity<DynamicQuantity){
        Values[Quantity]=NewElementValue;
        Quantity++;

    }
    else {
        int* NewValues= new int [DynamicQuantity+10];
        for (int i=0; i<Quantity; i++){
            NewValues[i]=Values[i];
        }
        NewValues[Quantity]=NewElementValue;
        delete[] Values;
        DynamicQuantity+=10;
        Quantity++;
        Values=NewValues;
    }
}

int Vector::find(const int &ElementValue) {
    int Number=-1;
    for (int i=0;i<Quantity;i++){
        if (Values[i]==ElementValue){
            Number=i;
            break;
        }
    }
    return Number;
}

Vector &Vector::operator=(const Vector &vector){
    delete[] Values;
    Quantity=vector.Quantity;
    DynamicQuantity=vector.DynamicQuantity;
    Values = new int[DynamicQuantity];
    for (int i = 0; i < Quantity; i++) {
        Values[i] = vector.Values[i];
    }
    return *this;
}

int Vector::operator[]( int& Number) {
    return Values[Number];
}

std::ostream& operator<<(std::ostream& out, const Vector& vector){
    for (int i=0; i<vector.Quantity; i++){
        out<<vector.Values[i]<<"; ";
    }
    return out;
}



