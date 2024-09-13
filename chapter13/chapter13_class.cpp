//
// Created by alaz on 05.08.2024.
//

#include "chapter13_class.h"
#include <iostream>
#include <cmath>
using namespace std;

float x = 10.7F;
void chapter13_class::samp_Prog1() {
    float &rx = x;                          // Local reference to x
    // double &ref = x;                     // Error: different type!
    rx *= 2;
    cout << " x = " << x << endl            // x = 21.4
    << " rx = " << rx << endl;              // rx = 21.4
    const float& cref = x;                  // Read-only reference
    cout << "cref = " << cref << endl;      // ok!
    // ++cref;                              // Error: read-only!

    const string str = "I am a constant string!";
    // str = "That doesn't work!";          // Error: str constant!
    // string& text = str;                  // Error: str constant!
    const string& text = str;               // ok!
    cout << text << endl;                   // ok! Just reading.
}

bool getClient( string& name, long& nr) // Definition
{
    cout << "\nTo input client data!\n" << " Name: ";
    if( !getline( cin, name))
        return false;
    cout << " Number: ";
    if( !( cin >> nr))
        return false;
    return true;
}

void putClient( const string& name, const long& nr)
{
    // name and nr can only be read!
    cout << "\n-------- Client Data ---------\n"
    << "\n Name: "; cout << name << "\n Number: "; cout << nr << endl;
}

void chapter13_class::samp_Prog2() {
    string clientName;
    long clientNr;
    cout << "\nTo input and output client data \n"
    << endl;
    if( getClient( clientName, clientNr)) // Calls
        putClient( clientName, clientNr);
    else
        cout << "Invalid input!" << endl;
}

double& refMin( double& a, double& b)
{                                               // Returns a
    return a <= b ? a : b;                      // reference to
}                                               // the minimum.

void chapter13_class::samp_Prog3() {
    double x1 = 1.1, x2 = x1 + 0.5, y;
    y = refMin( x1, x2);               // Assigns the minimum to y.
    cout << "x1 = " << x1 << " " << "x2 = " << x2 << endl;
    cout << "Minimum: " << y << endl;

    ++refMin( x1, x2);                 // ++x1, as x1 is minimal
    cout << "x1 = " << x1 << " "                // x1 = 2.1
    << "x2 = " << x2 << endl;                   // x2 = 1.6

    ++refMin( x1, x2);                 // ++x2, because x2 is the minimum.
    cout << "x1 = " << x1 << " "                // x1 = 2.1
    << "x2 = " << x2 << endl;                   // x2 = 2.6

    refMin( x1, x2) = 10.1;            // x1 = 10.1, because
                                                // x1 is the minimum.
    cout << "x1 = " << x1 << " "                // x1 = 10.1
    << "x2 = " << x2 << endl;                   // x2 = 2.6
    refMin( x1, x2) += 5.0;           // x2 += 5.0, because
                                                // x2 is the minimum.
    cout << "x1 = " << x1 << " "                // x1 = 10.1
    << "x2 = " << x2 << endl;                   // x2 = 7.6
}

void strToUpper( string& str)                   // Converts the content
{                                               // of str to uppercase.
    int len = str.length();
    for( int i=0; i < len; ++i)
        str[i] = toupper(str[i]);
}

void chapter13_class::samp_Prog4() {
    string text("Test with assignments \n");
    strToUpper(text);
    cout << text << endl;
    strToUpper( text = "Flowers");
    cout << text << endl;
    strToUpper( text += " cheer you up!\n");
    cout << text << endl;
}

void chapter13_class::samp_Prog5() {
    int var, *ptr;
    var = 100;
    ptr = &var;
    cout << " Value of var: " << var << " Address of var: " << &var << endl;
    cout << " Value of ptr: " << ptr << " Address of ptr: " << &ptr << endl;
}

void chapter13_class::samp_Prog6() {
    double x, y, *px;
    px = &x; // Let px point to x.
    cout << " Value of x: " << x << " Address of x: " << &x << endl;
    cout << " Value ptr points to: " << *px << " Address of ptr: " << &px << endl;
    *px = 12.3; // Assign the value 12.3 to x
    cout << " Value of x: " << x << " Address of x: " << &x << endl;
    cout << " Value ptr points to: " << *px << " Address of ptr: " << &px << endl;
    *px += 4.5; // Increment x by 4.5.
    cout << " Value of x: " << x << " Address of x: " << &x << endl;
    cout << " Value ptr points to: " << *px << " Address of ptr: " << &px << endl;
    y = sin(*px); // To assign sine of x to y
    cout << " Value of y: " << y << " Address of y: " << &x << endl;

    long a = 10, b,         // Definition of a, b
    *ptr;                   // and pointer ptr.
    ptr = &a;               // Let ptr point to a.
    b = *ptr;
    cout << "Val of a: "<< a << "\nVal of *ptr: " << *ptr << "\nVal of b: "
    << b << endl;
}

void swap( float *p1, float *p2)
{
    float temp; // Temporary variable
    temp = *p1; // At the above call p1 points
    *p1 = *p2; // to x and p2 to y.
    *p2 = temp;
}

void chapter13_class::samp_Prog7() {
    float x = 11.1F;
    float y = 22.2F;
    cout << "Value of x: " << x << endl;
    cout << "Value of y: " << y << endl;
    float* ptrx = &x;
    float* ptry = &y;
    swap(ptrx,ptry);
    cout << "Value of x: " << x << endl;
    cout << "Value of y: " << y << endl;
}

void chapter13_class::circle(const double &radius, double &area, double &circumference) {
    long pi = 3.1415926536;
    area = pi * radius * radius;
    circumference = 2 * pi * radius;
}

bool chapter13_class::quadEquation(double a, double b, double c, double *p1, double *p2) {
    double ans1, ans2;
    double disc = pow(b,2);
    disc = disc - (4 * a * c);
    if (disc < 0) {
        *p1 = NULL;
        *p2 = NULL;
        return false;
    }
    else {
        ans1 = sqrt(disc) - b;
        ans1 = ans1 / (2 * a);
        ans2 = -sqrt(disc) - b;
        ans2 = ans2 / (2 * a);
        *p1 = ans1;
        *p2 = ans2;
        return true;
    }
}


