//
// Created by alaz on 02.08.2024.
//

#include "ters_Fonksiyon_class.h"
#include <iomanip>
#include <iostream>
#include <vector>
#include <sstream>
#include <cmath>
using namespace std;
double ters_Fonksiyon_class::tersFonksiyon(string polinom, double x) {
    bool pow1 = false;
    bool pow2 = false;
    double sonuc;

    vector<string> vecString;
    if (polinom[0] != '-')                  //
    {                                 // stringi parslayıp üzerinde
        polinom.insert(0,"+");        //  işlem yapabilmek için
    }                                 // başına ve sonuna "+" ekliyorum.
    polinom.insert(polinom.length(),"+");   //

    //************ eldeki islemi parslayip baslangici yapma kodu
    int pos;
    for (int i = 0; i < polinom.length(); i++) {
        if (polinom[i] == '+' || polinom[i] == '-') {
            pos = polinom.find_first_of("+-",i+1);
            if (pos != -1) {
                vecString.push_back(polinom.substr(i,pos-i));
            }
        }
    }

    // ****************eldeki islemi parslayip struct vectorune koyma kodu
    vector<VecStruct> vecFonk;
    char sign;
    double katsayi;
    int power, posX, pos_power;

    for (int i =0; i < vecString.size(); i++) {
        sign = vecString[i][0];
        posX = vecString[i].find('x');
        if (posX != -1)
        {
            // to get the Katsayi of x
            string test;
            if (posX == 1) // x, stringin 1. indexiyse (yani katsayısı 1se)
            {
                test = "1";
            }
            else
            {
                test = (string)(vecString[i].substr(1,posX-1));
            }
            if(!test.empty()) {
                katsayi = stod(test);
            }
            pos_power = vecString[i].find('^');
            if (pos_power != -1) {
                // parsing the string from the next index of '^' (power symbol)
                power = stoi(vecString[i].substr(pos_power+1));
            }
            else {
                power = 1;
            }
        }
        else {

            katsayi = stod(vecString[i].substr(1));
            power = 0;
        }

        if (sign == '-')
        {
            katsayi *= -1;
        }

        vecFonk.push_back({sign, katsayi, power});
    }

    // hangi condition var onu tespit edelim
    for (int i = 0; i < vecFonk.size(); i++) {
        if (vecFonk[i].power == 2) {
            pow2 = true;
        }
        else if (vecFonk[i].power == 1) {
            pow1 = true;
        }
    }

    vector<VecStruct> vecTersFonk(vecFonk);
    // hangi condition varsa ona göre işlem uygulayalım
    if (pow1 == true && pow2 == false)
    {
        sonuc = cond1_f(vecTersFonk,x);
    }

    else if (pow1 == false && pow2 == true)
    {
        sonuc = sqrt(cond1_f(vecTersFonk,x));

    }

    else if (pow1 == true && pow2 == true)
    {
        sonuc = cond2_f(vecTersFonk,x);
    }

    return sonuc;
}

double ters_Fonksiyon_class::cond1_f(std::vector<VecStruct> v1, double x) {
    //*********** ters fonksiyonu vektöre koyup üzerinde işlemleri yapma(power max 1ken)
    double tersKatSayi;
    double sonuc = 0;
    for (int i = 0; i < v1.size(); i++) {
        if (v1[i].power == 1 || v1[i].power == 2)
        {
            tersKatSayi = 1 / v1[i].katSayi;
        }
        else if (v1[i].power == 0)
        {
            if (v1[i].sign == '+') {
                v1[i].sign = '-';
                v1[i].katSayi *= -1;
            }
            else {
                v1[i].sign = '+';
                v1[i].katSayi *= -1;
            }
        }
    }

    for (int i = 0; i < v1.size(); i++) {

        if (v1[i].power == 1 || v1[i].power == 2)
        {
            v1[i].katSayi = tersKatSayi;
            sonuc += (v1[i].katSayi * x);
        }
        else if (v1[i].power == 0)
        {
            v1[i].katSayi *= tersKatSayi;
            sonuc += v1[i].katSayi;
        }
    }
    return sonuc;
}

double ters_Fonksiyon_class::cond2_f(std::vector<VecStruct> v1, double x) {
    double a, b, c, pay1, pay2, payda;
    double sonuc = 0;
    // kuadratik denklemdeki yani
    // y = (-b +- sqrt(b^2 -4ac)) / 2a
    // a, b ve c'yi belirlemek için for loop.
    for (int i = 0; i < v1.size(); i++) {
        if (v1[i].power == 2) {
            a = v1[i].katSayi;
        }
        else if (v1[i].power == 1) {
            b = v1[i].katSayi;
        }
        else {
            c = v1[i].katSayi - x;
        }
    }

    double b_kare = pow(b,2);
    double eksi_4ac = -4 * a * c;
    pay1 = -sqrt(b_kare-eksi_4ac);
    pay1 += -b;

    pay2 = sqrt(b_kare-eksi_4ac);
    pay2 += -b;

    payda = 2*a;

    cout << "2 farklı cevap var.\n-b² + (...)'lı olan: " << pay2 / payda
    << "\n-b² - (...)'lı olan: " << pay1 / payda << endl;
    return pay2/payda;
}

