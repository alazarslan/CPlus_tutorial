//
// Created by alaz on 16.10.2024.
//

#include "Car.h"

Car::Car(long n, const string &prod) {
    nr = n;
    producer = prod;
}

void Car::display() const {
    cout << "nr is: " << nr << endl;
    cout << "Producer is: " << producer << endl;
}
