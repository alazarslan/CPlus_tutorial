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
    double copy_x = x;
    /*
     * ln(x)'s taylor series expansion only works when x is between 0 and 2. We know that ln(x) = - ln(1/x).
     * By using the equation on the top, I solved the issue.
     */
    if (copy_x > 2) {
        copy_x = 1 / copy_x;
    }
    double result = 0, calculation;

    /*
     * Normally, in the taylor series expansion of ln(x), n is goes from 1 to infinity,
     * but because it cant go to infinity in program, n should go to a finite number,
     * after trying with n= 2,5,10,100,500 and 1000 I decided that 500 is the best number for the calculation.
    */
    for (int n = 1; n <= 500; n++)
    {
        calculation = powerFuncUsingIntExponents(-1,n+1) * (powerFuncUsingIntExponents(copy_x-1,n) / n);
        result += calculation;
    }

    if (x > 2)
    {
        return -1 * result;
    }
    // If the given number x is between 0 and 2, no need to change the result.
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

double calismaClass::log_func(double base, double x)
{
    return ln_func(x) / ln_func(base);
}

double calismaClass::exp_func(double x)
{

    if (x > 1) {
        double half_exp = exp_func(x / 2);
        return half_exp * half_exp;
    }

    double nominator, result = 0;
    for (int k = 0; k < 14; k++)
    {
        int denominator = 1;
        nominator = powerFuncUsingIntExponents(x, k);
        int j = k;
        while (j > 1)
        {
            denominator = denominator * j;
            j--;
        }
        result = result + (nominator / denominator);
    }
    return result;
}

double calismaClass::power_func(double base, double exponent)
{
    double calc_1 = exponent * ln_func(base);
    return exp_func(calc_1);
}