#include <iomanip>
#include <iostream>
#include <vector>
#include <sstream>
#include <cmath>
using namespace std;
// <<>>
struct VecStruct {
    string str;
    char sign;
    double katSayi;
    int power;
};
int main()
{
    double param1 = 2;
    double param2 = 1;
    vector<string> vecString;
    string a = "-3x^2+5"; // sonuna + ekleme sebebim parselarken
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
    vector<VecStruct> vecStruct;
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
        vecStruct.push_back({terim, sign, katsayi, power});
    }
    for (int i = 0; i < vecStruct.size(); i++) {
        cout << "Terim" << setw(10) << "Isaret" << setw(10)<< "Katsayi"
        << setw(10) << "Power" << endl
        << vecStruct[i].str
        << setw(10) << vecStruct[i].sign
        << setw(10) << vecStruct[i].katSayi
        << setw(10) << vecStruct[i].power <<endl;
    }


    // integral alma kodu
    for (int i = 0; i < vecStruct.size(); i++)
    {
        vecStruct[i].power += 1;
        vecStruct[i].katSayi /= vecStruct[i].power;
        string newTerim = "";
        newTerim += vecStruct[i].sign;

        stringstream out;                                // katsayıyı noktadan sonra
        out << setprecision(2) << vecStruct[i].katSayi;// max 2 sayi olmasını
        string formattedNumber = out.str();              // sağlamak için formatla

        if (formattedNumber != "1") // katsayı 1'se terime ekleme.
        {
            newTerim += formattedNumber;
        }
        if ( vecStruct[i].power == 1 )
        {
            newTerim += "x";
        }
        else
        {
            newTerim += "x^";
            newTerim += to_string(vecStruct[i].power);
        }
        vecStruct[i].str = newTerim;
    }



    for (int i = 0; i < vecStruct.size(); i++) {
        cout << "Int Terim" << setw(10) << "Isaret" << setw(10)<< "Katsayi"
        << setw(10) << "Power" << endl
        << vecStruct[i].str
        << setw(10) << vecStruct[i].sign
        << setw(10) << vecStruct[i].katSayi
        << setw(10) << vecStruct[i].power <<endl;
    }


    double sonuc = 0;
    for (int i = 0; i < vecStruct.size(); i++) {
        double sayi1 = 1;
        double sayi2 = 1;
        double islem = 0;

        sayi1 = pow(param1,vecStruct[i].power);
        sayi1 *= vecStruct[i].katSayi;

        sayi2 = pow(param2,vecStruct[i].power);
        sayi2 *= vecStruct[i].katSayi;

        if (vecStruct[i].sign == '-') {
            sayi1 *= -1;
            sayi2 *= -1;
        }

        islem = sayi1 - sayi2;
        sonuc += islem;
    }

    cout << sonuc << endl;

    return 0;
}

