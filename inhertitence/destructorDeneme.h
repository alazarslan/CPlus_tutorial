//
// Created by alaz on 16.09.2024.
//

#ifndef DESTRUCTORDENEME_H
#define DESTRUCTORDENEME_H

#include <iostream>

class baseClass {
private:
    std::string name;
    int age;
public:
    baseClass(std::string name, int age) : name(name), age(age) {
        std::cout << "baseClass constructoru cagirildi" << std::endl;
    }
    ~baseClass() {
        std::cout << "baseClass Destructoru cagirildi" << std::endl;
    }
};

class DerivedClass : public baseClass {
public:
    DerivedClass(std::string name, int age) : baseClass(name, age) {
        std::cout << "DerivedClass constructoru cagirildi." << std::endl;
    }
    ~DerivedClass() {
        std::cout << "DerivedClass Destructoru cagirildi" << std::endl;
    }
};



#endif //DESTRUCTORDENEME_H
