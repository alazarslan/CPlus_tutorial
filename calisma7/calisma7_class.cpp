//
// Created by alaz on 23.07.2024.
//

#include "calisma7_class.h"
#include <iostream>
#include <iomanip>
using namespace std;
// <<>>


void test(int arg1, double arg2 ) // Definition
{
    cout << "\nIn function test()."
    << "\n 1. argument: " << arg1
    << "\n 2. argument: " << arg2 << endl;
}
void calisma7_class::ch9prog1() {
    cout << "\nNow function test() will be called.\n";
    test( 10, -7.5); // Call
    cout << "\nAnd back again in main()." << endl;
}

double area( double width, double len)
{
    return (width * len); // Returns the result.
}
void calisma7_class::ch9prog2() {
    double x = 3.5, y = 7.2, res;
    res = area( x, y+1); // Call
    // To output to two decimal places:
    cout << fixed << setprecision(2);
    cout << "\n The area of a rectangle "
    << "\n with width " << setw(5) << x
    << "\n and length " << setw(5) << y+1
    << "\n is " << setw(5) << res
    << endl;
}

