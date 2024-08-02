//
// Created by alaz on 02.08.2024.
//

#include "integral_Class.h"
#include <iomanip>
#include <iostream>
#include <vector>
#include <sstream>
#include <cmath>
using namespace std;

double integral_Class::integral(double ust_sinir, double alt_sinir, std::string a) {
    std::vector<string> vecString;

    if (a[0] != '-')                  //
    {                                 // stringi parslayıp üzerinde
        a.insert(0,"+");        //  işlem yapabilmek için
    }                                 // başına ve sonuna "+" ekliyorum.
    a.insert(a.length(),"+");   //

    // eldeki islemi parslayip baslangici yapma kodu
    int pos;
    for (int i = 0; i < a.length(); i++) {
        if (a[i] == '+' || a[i] == '-') {
            pos = a.find_first_of("+-",i+1);
            if (pos != -1) {
                vecString.push_back(a.substr(i,pos-i));
            }
        }
    }
}
