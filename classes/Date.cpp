//
// Created by alaz on 09.08.2024.
//

#include "Date.h"
#include <iostream>
#include <ctime>
using namespace std;

void Date::init(void) {
    struct tm *ptr; // Pointer to struct tm.
    time_t sec; // For seconds.
    time(&sec); // To get the present time.
    ptr = localtime(&sec);

    day = ptr->tm_mday;
    month = ptr->tm_mon + 1;
    year = ptr->tm_year + 1900;
}

void Date::init(int m, int d, int y) {
    day = d;
    month = m;
    year = y;
}

void Date::print() {
    cout << month << "-" << day << "-" << year << endl;
}


