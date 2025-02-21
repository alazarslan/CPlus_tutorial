//
// Created by alaz on 16.10.2024.
//

#ifndef HOME_H
#define HOME_H

#include <iostream>

class Home {
private:
    int numRoom;
    int size_in_meters;
public:
    Home() : numRoom(0), size_in_meters(0) {}
    void display() const;
};



#endif //HOME_H
