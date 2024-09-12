//
// Created by alaz on 02.08.2024.
//

#ifndef INTEGRAL_CLASS_H
#define INTEGRAL_CLASS_H
#include <string>

struct VecStruct {
    std::string str;
    char sign;
    double katSayi;
    int power;
};

class integral_Class {
public:
    double integral(double ust_sinir, double alt_sinir, std::string islem);
};



#endif //INTEGRAL_CLASS_H
