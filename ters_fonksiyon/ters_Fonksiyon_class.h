//
// Created by alaz on 02.08.2024.
//

#ifndef TERS_FONKSIYON_CLASS_H
#define TERS_FONKSIYON_CLASS_H
#include <string>
#include <vector>

struct VecStruct {
    char sign;
    double katSayi;
    int power;
};

class ters_Fonksiyon_class {
public:
    double tersFonksiyon(std::string polinom, double x);

private:
    // f(x) = x + 5 gibiyse (sadece x^1'li ifade var)
    // veya
    // f(x) = x^2 + 5 gibi (sadece x^2'li ifade var)
    double cond1_f(std::vector<VecStruct> v1, double x);

    // f(x) = x^2 + x + 5 (hem x^2 hem x'li ifade var)
    double cond2_f(std::vector<VecStruct> v1, double x);


};



#endif //TERS_FONKSIYON_CLASS_H
