//
// Created by alaz on 17.07.2024.
//
#include <iostream>
#include "calisma4_5_class.h"
#include <time.h>
#include <stdlib.h>
using namespace std;
// <<>>
void calisma4_5_class::ch6ex2() {
    cout << "\t\t\t****** MULTIPLICATION TABLE ******" << endl << endl;
    for (int i = 1; i <= 10; i++) {
        cout << "\t" << i;
    }
    cout << endl;
    for (int j = 1; j <= 10; j++) {
        cout << j << "\t";
        for (int x = 1; x <= 10; x++) {
            cout << j * x << "\t";
        }
        cout << endl;
    }
}

void calisma4_5_class::ch6ex3() {
    int num;
    cout << "Enter a number between 0 and 65535: ";
    while (cin >> num) {
        if (num >= 0 && num <= 65535)
            break;
        else {
            cout << "Number out of line, enter another number!" << endl;
            cout << "Enter a number between 0 and 65535: ";
        }
    }
    srand(num);
    int rand_num;
    for (int i = 0; i < 20; i++) {
        cout << rand() % 100 + 1<< endl;
    }
}

void calisma4_5_class::ch6ex4() {
    long sec;
    time( &sec );           // Take the number of seconds and
    srand( (unsigned)sec ); // use it to initialize.
    // ustteki kodu kitap verdi

    cout << "The game is starting..." << endl;
    char ch;
    int randNum, guess;
    bool gameEnd = false;
    while (true) {
        randNum = rand() % 15 + 1;
        cout << "The game has started. A random number between 1 and 15 is selected."
        << " You have 3 attempts to find it." << endl;
        for (int i = 0; i < 3; i++) {
            cout << "Enter your guess: ";
            cin >> guess;
            if (guess == randNum) {
                cout << "Your guess is correct! The game is over." << endl;
                gameEnd = true;
                break;
            }
            else {
                cout << "You guessed the wrong number." << endl;
            }
        }
        if (gameEnd = false)
            cout << "You lost the game. The correct number was: " << randNum;
        cout << "Press <q> to restart the game." << endl;
        cin >> ch;
        if (ch != 'q' && ch != 'Q') {
            break;
        }
    }
}
