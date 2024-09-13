//
// Created by alaz on 02.09.2024.
//

#include "kartezyenSistem.h"
#include <iostream>
#include <ctime>
using namespace std;

void kartezyenSistem::sistem_olustur() {
    char karakter;
    for (int i = 0; i < buyukluk; i++)
    {
        for (int j = 0; j < buyukluk; j++)
        {
            if (i == buyukluk / 2 || j == buyukluk / 2)
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
}


bool kartezyenSistem::bolge1_check(int dikdortgen_x, int dikdortgen_y, int sistem_buyuklugu) {
    long sec;
    time(&sec);
    srand(unsigned(sec));
    int count_x = 0, idx_y = 0, idx_x = 0;
    int numx = rand() % dikdortgen_x + 1;
    int numy = rand() % dikdortgen_y + 1;
    //int numx = dikdortgen_x, numy = dikdortgen_y;
    bool finish = false, bool_break = false;
    for (int i = sistem_buyuklugu/2; i >= 0; i--)
    {
        if (bool_break == true) {
            break;
        }
        count_x = 0;
        for (int j = sistem_buyuklugu/2; j <= sistem_buyuklugu; j++)
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
        return false;
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
    return true;
}

void kartezyenSistem::sistem_display() {
    for (int i = 0; i < buyukluk; i++)
    {
        for (int j = 0; j < buyukluk; j++)
        {
            cout << sistem[i][j] << " ";
        }
        cout << endl;
    }
}

bool kartezyenSistem::isBolge1Full() const {
    for (int i = buyukluk / 2; i >= 0; i--)
    {
        for (int j = buyukluk / 2; j < buyukluk; j++)
        {
            if (sistem[i][j] != "X") {
                //cout << i << "e" << j << ". nokta X değil!" << endl;
                return false;
            }
        }
    }
    return true;
}

bool kartezyenSistem::bolge2_check(int dikdortgen_x, int dikdortgen_y, int sistem_buyuklugu) {
    long sec;
    time(&sec);
    srand(unsigned(sec));
    int count_x = 0, idx_y = 0, idx_x = 0;
    int numx = rand() % dikdortgen_x + 1;
    int numy = rand() % dikdortgen_y + 1;
    //int numx = dikdortgen_x, numy = dikdortgen_y;
    bool finish = false, bool_break = false;
    for (int i = sistem_buyuklugu/2; i >= 0; i--)
    {
        if (bool_break == true) {
            break;
        }
        count_x = 0;
        for (int j = sistem_buyuklugu/2; j >=    0; j--)
        {
            if (count_x == numx)
            {
                idx_y = i;
                idx_x = j + numx;
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
        return false;
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
            idx_x--;
        }
        idx_y--;
    }
    return true;
}

bool kartezyenSistem::isBolge2Full() const {
    for (int i = buyukluk / 2; i >= 0; i--)
    {
        for (int j = buyukluk / 2; j >= 0; j--)
        {
            if (sistem[i][j] != "X") {
                //cout << i << "e" << j << ". nokta X değil!" << endl;
                return false;
            }
        }
    }
    return true;
}



