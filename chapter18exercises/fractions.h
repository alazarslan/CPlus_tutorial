//
// Created by alaz on 29.01.2025.
//

#ifndef FRACTIONS_H
#define FRACTIONS_H
#include <iostream>

using namespace std;

class fractions {
private:
    long nom;
    long denom;
    bool terminate = false;
public:
    fractions(long nominator = 0, long denominator = 1) {
        if (denominator == 0) {
            cerr << "Denominator cannot be 0!";
            denominator = -999;
            terminate = true;
        }
        else {
            if (denominator < 0) {
                denominator *= -1;
                nominator *= -1;
            }
        }
    }
};



#endif //FRACTIONS_H
