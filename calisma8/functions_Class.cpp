//
// Created by alaz on 26.07.2024.
//
// <<>>
#include <iostream>
#include "functions_Class.h"

#include <iomanip>
#include <math.h>
using namespace std;

void functions_Class::ch10prog1(int arg1, double arg2) {
    cout << "\nIn function test()."
    << "\n 1. argument: " << arg1
    << "\n 2. argument: " << arg2 << endl;
}

void functions_Class::moveTo(int x, int y) {
    cout << "x is: " << x << endl;
    cout << "y is: " << y << endl;
    cout << "x * y = " << x * y << endl;
    cout << "x + y = " << x + y << endl;
}

bool setrand = false;
inline void init_random() // Initializes the random
{ // number generator with the
    // present time.
    if( !setrand )
    { srand((unsigned int)time(NULL));
        setrand = true;
    }
}

inline double myRandom() // Returns random number x
{ // with 0.0 <= x <= 1.0
    init_random();
    return (double)rand() / (double)RAND_MAX;
}

inline int myRandom(int start, int end) // Returns the
{ // random number n with
    init_random(); // start <= n <= end
    return (rand() % (end+1 - start) + start);
}

void functions_Class::ch10prog2() {
    int i;
    cout << "5 random numbers between 0.0 and 1.0 :" << endl;
    for( i = 0; i < 5; ++i)
        cout << setw(10) << myRandom();
    cout << endl;
    cout << "\nAnd now 5 integer random numbers between -100 and +100 :" << endl;
    for( i = 0; i < 5; ++i)
        cout << setw(10) << myRandom(-100, +100);
    cout << endl;
}

void functions_Class::ch10code1() {
    char x,y;
    cout << "Enter 2 values: " << endl;
    cin >> x >> y;
    cout << "The max value of x = " << x << " and y = " << y
    << " is: " << Max(x,y) << endl;
}

long functions_Class::sum(long var1, long var2, long var3, long var4) {
    return var1+var2+var3+var4;
}


double functions_Class::area(double width, double len) {
    return (width * len);
}


long double functions_Class::factorialLoop(unsigned int n) {
    long double sum = 1;
    for (n; n > 1; n--) {
        sum *= n;
    }
    return sum;
}

long double functions_Class::factorialRecursive(unsigned int n) {
    if( n <= 1)
        return 1.0;
    else
        return factorialRecursive(n-1) * n;
}

double functions_Class::pow(double base, int exp) {
    double result = 1;
    if (base == 0 && exp < 0) {
        return HUGE_VAL;
    }
    if (base == 0) {
        return 0.0;
    }
    if (exp == 0) {
        return 1.0;
    }
    if (exp < 0) {
        return pow(1/base, -exp);
    }
    for (;exp > 0; exp--) {
        result *= base;
    }
    return result;
}
