//
// Created by alaz on 16.10.2024.
//

#ifndef CAR_H
#define CAR_H

#include <iostream>
using namespace std;

class Car {
private:
    long nr;
    string producer;
public:
    Car( long n = 0L, const string& prod = "");
    virtual ~Car() {}
    // Virtual destructor.
    // Access methods:
    long getNr(void) const { return nr; }
    void setNr( long n ) { nr = n; }
    const string& getProd() const { return producer; }
    void setProd(const string& p){ producer = p; }
    virtual void display() const;
    // Display a car
};



#endif //CAR_H
