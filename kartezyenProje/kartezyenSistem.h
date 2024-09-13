//
// Created by alaz on 02.09.2024.
//

#ifndef KARTEZYENSISTEM_H
#define KARTEZYENSISTEM_H

#include <iostream>
using namespace std;

class kartezyenSistem {
private:
    string sistem[7][7];
    int buyukluk = 7;
public:
    //void dikdortgenGenerator(int x, int y);
    bool bolge1_check(int dikdortgen_x, int dikdortgen_y, int sistem_buyuklugu);
    void sistem_olustur();
    void sistem_display();
    bool isBolge1Full() const;
    bool bolge2_check(int dikdortgen_x, int dikdortgen_y, int sistem_buyuklugu);
    bool isBolge2Full() const;
    //void ciz(int idx_y, int idx_x, int numy, int numz);

};



#endif //KARTEZYENSISTEM_H
