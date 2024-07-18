//
// Created by alaz on 18.07.2024.
//
#include <iostream>
#include <cmath>
#include <iomanip>
#include <fstream>
#include "calisma5_class.h"
#include "myMacros.h"
using namespace std;
// <<>>



void calisma5_class::ch7prog1() {
#define PI 3.1415926536
#define START 0.0 // Lower limit
#define END (2.0 * PI) // Upper limit
#define STEP (PI / 8.0) // Step width
#define HEADER (cout << \
" ***** Sine Function Table *****\n\n")

    HEADER; // Title
    // Table Head:
    cout << setw(16) << "x" << setw(20) << "sin(x)\n"
    << " -----------------------------------------"
    << fixed << endl;
    double x;
    for( x = START; x < END + STEP/2; x += STEP)
        cout << setw(20) << x << setw(16) << sin(x)
        << endl;
    cout << endl << endl;
}

// bu program??????????????
void calisma5_class::ch7prog2() {
#define DELAY 10000000L // Output delay
#define CLS (cout << "\033[2J") // Clear screen          //????
#define LOCATE(z,s) (cout <<"\033["<< z <<';'<< s <<'H') //????
    // Position the cursor in row z and column s

    int x = 2, y = 3, dx = 1, speed = 0;
    char ch;
    string floor(79, '-'),
    header = "**** JUMPING BALL ****";
    CLS;
    LOCATE(1,25); cout << header;               //???
    LOCATE(25,1); cout << floor;                //????
    while(true) // Let the ball "always" bounce
    {
        // Terminate by interrupt key (^C)
        LOCATE(y,x); cout << 'o' << endl; // Show the ball
        for( long wait = 0; wait < DELAY; ++wait)
            ;
        if(x == 1 || x == 79) dx = -dx; // Bounce off
        // a wall?
        if( y == 24 ) // On the floor?
        {
            speed = - speed;
            if( speed == 0 ) speed = -7; // Restart
        }
        speed += 1; // Acceleration = 1
        LOCATE(y,x); cout << ' '; // Clear output
        y += speed; x += dx; // New Position
    }
}

void calisma5_class::ch7codes1() {
#define SQUARE(a) ((a) * (a))
    int z = SQUARE(3+1);
#define _SQUARE(a) (a * a)
    int z1 = _SQUARE(3+1);
    cout << "z: " << z << " z1: " << z1 << endl;
    denemeicin;
    int x =3;
    cout << endl<< SQUARE(x++) << endl;

    #define MIN(a,b) ((a)<(b)? (a) : (b)) // dogruysa a, yanlissa b
    cout << MIN(5,8) << endl;// Here MIN can be called
    #undef MIN
    //cout << MIN(5,8) << endl;// Here MIN can NOT be called
}

// program calisinca total of characters dogru hesaplanmiyo
void calisma5_class::ch7prog3() {
    char c;
    long nChar = 0, // Counts all characters
    nConv = 0; // and converted characters
    while ( cin.get(c) ) // As long as a character
    {
        ++nChar; // can be read, to increment.
        if( islower(c)) // Lowercase letter?
        {
            c = toupper(c); // Converts the character
            ++nConv; // and counts it.
        }
        cout.put(c); // Outputs the character.
    }
    clog << "\nTotal of characters: " << nChar
    << "\nTotal of converted characters: " << nConv
    << endl;
}

void calisma5_class::ch7codes2() {
    char c; cin >> c; // Reads and
    // classifies
    if( !isdigit(c) ) // a character.
        cout << "The character is no digit \n";
#define toupper(c) \
(islower(c) ? ((c)-'a'+'A') : (c))
    cout << char(toupper(c)) << endl; // char koymazsam sayi veriyo

}

void calisma5_class::ch7ex3() {
    ifstream file;
    string line;
    char ch;
    file.open("sample.txt");
    while (file.get(ch)) {
        if (isControl(ch)) {
            continue;
        }
        //else
        cout << ch;
    }
}





