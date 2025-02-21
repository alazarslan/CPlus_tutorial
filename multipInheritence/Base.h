//
// Created by alaz on 16.10.2024.
//

#ifndef BASE_H
#define BASE_H
#include <iostream>
#include <ostream>

using namespace std;

class Base {
public:
    Base() {
        cout << "Base constructor called" << endl;
    }
};

class virtual_Derived : public Base {
public:
    virtual_Derived(): Base() {
        cout << "Virtual_Derived constructor called" << endl;
    }
};

class non_virtual_Derived : public Base {
public:
    non_virtual_Derived(): Base() {
        cout << "non_virtual_Derived constructor called" << endl;
    }
};

class MultiDerived : public virtual virtual_Derived, public non_virtual_Derived {
public:
    MultiDerived(): non_virtual_Derived(), virtual_Derived() {
        cout << "MultiDerived constructor called" << endl;
    }
};


#endif //BASE_H
