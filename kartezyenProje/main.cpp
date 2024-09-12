#include <iostream>
#include <ctime>
#include "kartezyenSistem.h"
// <<>>
using namespace std;

int main() {
    int deger, dikdortgen_x, dikdortgen_y;
    //cout << "Kartezyen sistemin buyuklugunu giriniz: ";
    //cin >> deger;
    //cout << "Olusturulacak dikdortgenlerin max buyuklugunu giriniz: ";
    //cin >> dikdortgen_x >> dikdortgen_y;
    long sec;
    time(&sec);
    srand(unsigned(sec));

    /*
    char karakter;
    string sistem[deger][deger];
    for (int i = 0; i < deger; i++)
    {
        for (int j = 0; j < deger; j++)
        {
            if (i == deger / 2 || j == deger / 2)
            {
                karakter = '-';
            }
            else
            {
                karakter = '#';
            }
            sistem[i][j] = karakter;
        }
    }
    */


    ////////////////////////////////////
    /*
    int count_x = 0, idx_y = 0, idx_x = 0, numx, numy;
    //int numx = 4, numy = 4;

    int a = 0;
    while (a < 2) {
        numx = rand() % dikdortgen_x + 1;
        numy = rand() % dikdortgen_y + 1;
        bool finish = false, bool_break = false;
        for (int i = deger/2; i >= 0; i--)
        {
            if (bool_break == true) {
                break;
            }
            count_x = 0;
            for (int j = deger/2; j < deger; j++)
            {
                if (count_x == numx)
                {
                    idx_y = i;
                    idx_x = j - numx;
                    bool_break = true;
                    break;
                }
                else
                {
                    if (sistem[i][j] != "X")
                    {
                        count_x++;
                    }
                    else
                    {
                        count_x = 0;
                    }
                }
            }
        }

        if (idx_y - numy + 1 < 0) {
            //return false;
            break;
        }

        int yedek_idx_y = idx_y;
        int yedek_idx_x = idx_x;
        for ( int x = 0; x < numx; x++)
        {
            idx_y = yedek_idx_y;
            for (int y = 0; y < numy; y++)
            {
                if (sistem[idx_y][idx_x] == "X")
                {
                    return false;
                }
                idx_y--;
            }
            idx_x++;
        }

        // çiz
        idx_y = yedek_idx_y;
        for (int i = 0; i < numy; i++)
        {
            idx_x = yedek_idx_x;
            for (int j = 0; j < numx; j++)
            {
                sistem[idx_y][idx_x] = "X";
                idx_x++;
            }
            idx_y--;
        }
        a++;
    }
    /////////////////////
    */


    /*
    for (int i = 0; i < deger; i++)
    {
        for (int j = 0; j < deger; j++)
        {
            cout << sistem[i][j] << " ";
        }
        cout << endl;
    }
    */

    kartezyenSistem *kartezyen = new kartezyenSistem();
    kartezyen->sistem_olustur();
    int a = 0, count = 0;
    bool bolge1_doldu = false;
    while(count < 10 && a < 10) {
        if (kartezyen->isBolge2Full() == true) {
            cout << "Bolge2Full!!!!!!!!" << endl;
            cout << "Count: " << count << " a: " << a << endl;
            //bolge1_doldu = true;
            break;
        }
        if (kartezyen->bolge2_check(2,4,7) == true) {
            a++;
        }
        else {
            count++;
            cout << count << ". Bolge2 check failed" << endl;
        }
    }
    /*
    if (bolge1_doldu == true) {
        while(count < 10 && a < 10) {
            if (kartezyen->isBolge2Full() == true) {
                cout << "Bolge2Full!!!!!!!!" << endl;
                cout << "Count: " << count << " a: " << a << endl;
                //bolge1_doldu = true;
                break;
            }
            if (kartezyen->bolge2_check(2,4,7) == true) {
                a++;
            }
            else {
                count++;
                cout << count << ". Bolge2 check failed" << endl;
            }
        }
    }
    */
    kartezyen->sistem_display();

    /*
    if (kartezyen->isBolge1Full() == true) {
    cout << "Bolge1Full!!!!!!!!" << endl;
    cout << "Count: " << count << " a: " << a << endl;
    bolge1_doldu = true;
    break;
    }
    if (kartezyen->bolge1_check(2,4,7) == true) {
    a++;
    }
    else {
    count++;
    cout << count << ". Bolge1 check failed" << endl;
    }
    */

    return 0;
}
