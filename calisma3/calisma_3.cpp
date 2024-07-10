//
// Created by alaz on 09.07.2024.
//

#include "calisma_3.h"
#include <string>
#include <sstream>
//#include <cstring>
#include <cmath>
using namespace std;
double calismaClass::absolute(double num)
{
    return num * -1;
}
/*
double calismaClass::pow(double base, double power)
{
    double result = 1;
    //<
    if (power > 0)
    {
        for (int i = 0; i < power; i++) {
            result = result * base;
        }
    }

    else if (power < 0)
    {
        power = abs(power);
        for (int i = 0; i < power; i++)
        {
            result = result / base;
        }
    }
    return result;
}
*/
double calismaClass::power(double base, double power)
{
    //string numToString = to_string(power);
    ostringstream s;
    s << power;
    string numToString = s.str();
    int pos = numToString.find('.');
    string right_of_dot = numToString.substr(pos+1);
    string left_of_dot = numToString.substr(0,pos);
    string num_without_dot = left_of_dot + right_of_dot;
    int nominator = stoi(num_without_dot);
    int denominator = 10*right_of_dot.length();

    int i = 2;
    while (i < denominator) {
        if (nominator % i == 0 && denominator % i == 0) {
            nominator = nominator / i;
            denominator = denominator / i;
            i = 2; // to restart the while loop, the numbers can be divided to the same i
        }
        else {
            i++;
        }
    }

    double result = 1;
    for (int j = 0; j < nominator; j++) {
        result = result * base;
    }
    return sqrt(result, denominator);
}


/*double calismaClass::sqrt(double inside, double root_power) {
    for (int i = 2; i < inside; i++) {
        
    }
}*/
