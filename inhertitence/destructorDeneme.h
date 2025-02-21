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
protected:
    int id;
public:
    int _class;
    baseClass(std::string name, int age, int id = 0, int sinif = 0) : name(name), age(age), id(id), _class(sinif) {
        std::cout << name <<": baseClass constructoru cagirildi" << std::endl;
    }
    ~baseClass() {
        std::cout << name << ": baseClass Destructoru cagirildi" << std::endl;
    }
    std::string getName() {
        return name;
    }
};

class DerivedClass : private baseClass {
public:
    DerivedClass(std::string name, int age) : baseClass(name, age) {
        std::cout << getName() << ": DerivedClass constructoru cagirildi." << std::endl;
    }
    ~DerivedClass() {
        std::cout << getName() << ": DerivedClass Destructoru cagirildi" << std::endl;
    }
    void foo() {
        std::cout << id <<"\t\t" << _class << std::endl;
    }
    friend void func(DerivedClass d) {};
};

void func(DerivedClass d) {
    std::cout << d.name << std::endl;
    std::cout << d.id << std::endl;
    std::cout << d._class << std::endl;

}


#endif //DESTRUCTORDENEME_H
