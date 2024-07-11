//
// Created by alaz on 09.07.2024.
//

#ifndef CALISMA_3_H
#define CALISMA_3_H

class calismaClass {
public:
    /*
     * @brief: this function is the methodology of arithmetic operation "ln",
     * it does not give the exact true answer but the result is nearly the true.
     * @param: the number inside ln function (x)
     * @return: returns the ln value of the number
    */
    double ln_func(double x);

    /*
     * @brief: this function is the methodology of arithmetic operation "log",
     * it does not give the exact true answer but the result is nearly the true.
     * @param1: base of log
     * @param2: the number inside log function (x)
     * @return: returns the log value of the number
    */
    double log_func(double base, double x);

    /*
     * @brief: this function is the methodology of arithmetic operation "e^x",
     * it does not give the exact true answer but the result is nearly the true.
     * @param: exponent of e, x of e^x
     * @return: returns the e^x's value
    */
    double exp_func(double x);

    /*
     * @brief: this function is the power function
     * it does not give the exact true answer whenever the exponent is a float, but the result is nearly the true.
     * it gives the correct value when the exponent is an integer
     * @param1: base number, x of x^y
     * @param2: exponent number, y of x^y
     * @return: returns the base^exponent's value
    */
    double power_func(double base, double exponent);

    /*
     * @brief: this function is the sin(x) function
     * it does not give the exact correct answer, but the result is nearly the correct.
     * @param: number inside the function
     * @return: returns the sin(x)'s value
    */
    double sin_func(double x);

    /*
     * @brief: this function is the cos(x) function
     * it does not give the exact correct answer, but the result is nearly the correct.
     * @param: number inside the function
     * @return: returns the cos(x)'s value
    */
    double cos_func(double x);

    /*
     * @brief: this function is the root function
     * it does not give the exact correct result, but the result is nearly the true.
     * @param1: inside the root
     * @param2: root's degree
     * @return: returns the root by degree
    */
    double root_func(double inside, double root_degree);

    /*
     * @brief: this function is the arctan function
     * it works between -0.8 and 0.8, but after those points function doesn't work properly.
     * It is due to taylor series expansion, and I couldn't find a solution to this problem.
     * @param1: number inside the function
     * @return: returns the arctan value
    */
    double arctan_func(double x);

    /*
     * @brief: this function is the tan function
     * it does not give the exact correct result, but the result is nearly the true.
     * @param1: number inside the function
     * @return: returns the tan value
    */
    double tan_func(double x);

    /*
     * @brief: this function is the cosh(hyperbolic cosine) function
     * it does not give the exact correct result, but the result is nearly true.
     * @param1: number inside the function
     * @return: returns the cosh value
    */
    double cosh_func(double x);

    /*
     * @brief: functions below are the sample programs and exercises given in the book.
    */
    void sample_program1();

    void sample_program2();

    void sample_program3();

    void exercise1();

    void exercise2();

private:
    /*
     * @brief: this function gets the absolute value of the given number
     * @param: the number to get the absolute value of
     * @return: returns the absolute value of the number
    */
    double absolute (double num);

    /*
     * @brief: this function is the methodology of arithmetic operation "power", but only works when the exponent is an integer
     *         I made this function to use inside ln_func
     * @param1: base of arithmetic operation
     * @param2: exponent of arithmetic operation
     * @return: returns the power value
    */
    double powerFuncUsingIntExponents (double base, int exponent);
};

#endif //CALISMA_3_H
