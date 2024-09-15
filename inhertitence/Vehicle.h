//
// Created by alaz on 15.09.2024.
//

#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>

// Base class
class Vehicle {
public:
    void startVehicle() {
        std::cout << "Starting Vehicle " << std::endl;
    }
};


class Engine {
// bu fonksiyon public'te olmazsa Car class'ı start fonksiyonuna erişemiyor.
// private ve protected da erişemiyor.
public:
    void start() {
        std::cout << "Starting Engine " << std::endl;
    }
};

// Derived class: Vehicle class'tan türetilmiştir.
class Car : public Vehicle {
private:
    Engine engine; // "Has-a" ilişkisi: Car bir Engine'e sahiptir.
public:
    void playRadio() {
        std::cout << "Playing Radio " << std::endl;
    }
    void startCar() {
        std::cout << "Starting Car " << std::endl;
        engine.start(); // Engine sınıfına ait fonksiyon
    }
};



#endif //VEHICLE_H
