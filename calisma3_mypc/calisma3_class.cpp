//
// Created by alaz on 09.07.2024.
//

#include "calisma3_class.h"
#include <string>
//#include <sstream>
//#include <cstring>
//#include <cmath>
using namespace std;
double calismaClass::absolute(double num)
{
    return num * -1;
}

double calismaClass::ln_func(double x)
{
    double result = 0, calculation;

    /*
     * Normally, in the taylor series expansion of ln(x), n from 1 to infinity,
     * but because it cant go to infinity in program, n should go to a finite number,
     * after trying with n= 2,5,10 and 100 i decided that 100 is the best number for the calculation.
    */
    for (int n = 1; n <= 100; n++)
    {
        calculation = powerFuncUsingIntExponents(-1,n+1) * (powerFuncUsingIntExponents(x-1,n) / n);
        result += calculation;
    }
    return result;
}

double calismaClass::powerFuncUsingIntExponents(double base, int exponent)
{
    double result = 1;
    if (exponent > 0)
    {
        for (int i = 0; i < exponent; i++) {
            result = result * base;
        }
    }

    else if (exponent < 0)
    {
        exponent = absolute(exponent);
        for (int i = 0; i < exponent; i++)
        {
            result = result / base;
        }
    }
    return result;
}
