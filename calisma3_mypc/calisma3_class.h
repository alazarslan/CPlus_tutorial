//
// Created by alaz on 09.07.2024.
//

#ifndef CALISMA_3_H
#define CALISMA_3_H

class calismaClass {
public:
    /*
     * @brief: this function is the methodology of arithmetic operation "ln"
     * @param: the number to get the ln value of
     * @return: returns the ln value of the number
    */
    double ln_func(double x);

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
