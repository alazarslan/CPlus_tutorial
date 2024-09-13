//
// Created by ALAZ on 13.09.2024.
//

#ifndef MAINPCCALISMA_MYCLASS_H
#define MAINPCCALISMA_MYCLASS_H
#include <iostream>

class myClass {
public:
    int value;
    myClass(int v) : value(v) {}

    // Unary & overload: adresini döndürür
    inline myClass* operator& () {
        std::cout << "Address-of operator overloaded\n";
        return this;
    }

    // Binary & overload: bitwise AND işlemi
    inline int operator&(const myClass& other) {
        return this->value & other.value;
    }

    // Unary * overload: dereference işlemi
    inline int operator*() {
        return value;
    }

    // Binary * overload: çarpma işlemi
    inline myClass operator*(const myClass& obj) {
        myClass temp(this->value * obj.value);
        return temp;
    }

    // Unary + overload: değer aynen döner
    inline myClass operator+() {
        return *this;
    }

    // Binary + overload: toplama işlemi
    inline myClass operator+(const myClass& obj) {
        myClass temp(this->value + obj.value);
        return temp;
    }

    // Unary - kullanımı
    inline myClass operator-() {
        return myClass(-value);
    }

    // Binary - kullanımı
    inline myClass operator-(const myClass& obj) {
        myClass temp(this->value - obj.value);
        return temp;
    }
};


#endif //MAINPCCALISMA_MYCLASS_H
