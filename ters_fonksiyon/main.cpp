#include <iomanip>
#include <iostream>
#include <vector>
#include <sstream>
#include <cmath>

#include "ters_Fonksiyon_class.h"
using namespace std;
// <<>>
/*
struct VecStruct {
    string str;
    char sign;
    double katSayi;
    int power;
};
*/
int main() {
    /*
    double param = 5;

    vector<string> vecString;
    string a = "8x+7";             // sonuna + ekleme sebebim parselarken
    //                              son terimi de alabilmek, yapmazsam alamıyorum

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


    for (int i = 0; i < vecString.size(); i++) {
        cout << vecString[i] << endl;
    }


    // eldeki islemi parslayip struct vectorune koyma kodu
    vector<VecStruct> vecFonk;
    string terim;
    char sign;
    double katsayi;
    int power, posX, pos_power;

    for (int i =0; i < vecString.size(); i++) {
        terim = vecString[i];
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
            cout << test << endl;
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
        vecFonk.push_back({terim, sign, katsayi, power});
    }

    for (int i = 0; i < vecFonk.size(); i++) {
        cout << "Terim" << setw(10) << "Isaret" << setw(10)<< "Katsayi"
        << setw(10) << "Power" << endl
        << vecFonk[i].str
        << setw(10) << vecFonk[i].sign
        << setw(10) << vecFonk[i].katSayi
        << setw(10) << vecFonk[i].power <<endl;
    }

    vector<VecStruct> vecTersFonk(vecFonk);
    double tersKatSayi;
    double sonuc = 0;
    for (int i = 0; i < vecTersFonk.size(); i++) {
        if (vecTersFonk[i].power == 1)
        {
            tersKatSayi = 1 / vecTersFonk[i].katSayi;
        }
        else if (vecTersFonk[i].power == 0)
        {
            vecTersFonk[i].str[0] = '-';
            vecTersFonk[i].sign = '-';
        }
    }

    for (int i = 0; i < vecTersFonk.size(); i++) {
        if (vecTersFonk[i].sign == '-')
        {
            vecTersFonk[i].katSayi *= -1;
        }

        if (vecTersFonk[i].power == 1)
        {
            vecTersFonk[i].katSayi = tersKatSayi;
            sonuc += (vecTersFonk[i].katSayi * param);
        }
        else if (vecTersFonk[i].power == 0)
        {
            vecTersFonk[i].katSayi *= tersKatSayi;
            sonuc += vecTersFonk[i].katSayi;
        }
    }

    for (int i = 0; i < vecTersFonk.size(); i++) {
        cout << "Ters Terim" << setw(10) << "Isaret" << setw(10)<< "Katsayi"
        << setw(10) << "Power" << endl
        << vecTersFonk[i].str
        << setw(10) << vecTersFonk[i].sign
        << setw(10) << vecTersFonk[i].katSayi
        << setw(10) << vecTersFonk[i].power <<endl;
    }

    cout << "Fonksiyonun tersinin sonucu: " <<sonuc << endl;
    */
    ters_Fonksiyon_class *myVar = new ters_Fonksiyon_class;
    string poli = "-3.5x^2-2.1x+3";
    double x = 3;
    cout << myVar->tersFonksiyon(poli,x) << endl;
    return 0;
}
