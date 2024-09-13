//
// Created by alaz on 05.08.2024.
//

#ifndef CHAPTER13_CLASS_H
#define CHAPTER13_CLASS_H



class chapter13_class {
public:
    /*
     * @brief: Demonstrates the definition and use of references.
    */
    void samp_Prog1();

    /*
    * @brief: Demonstrating functions with parameters of reference type.
    */
    void samp_Prog2();

    /*
    * @brief: Demonstrates the use of return values with reference type.
    */
    void samp_Prog3();

    /*
    * @brief: Expressions with reference type exemplified by string assignments.
    */
    void samp_Prog4();

    /*
    * @brief: Prints the values and addresses of variables.
    */
    void samp_Prog5();

    /*
    * @brief: Simple program using indirection operator (*)
    */
    void samp_Prog6();

    /*
    * @brief: Definition and call of function swap().
    * Demonstrates the use of pointers as parameters.
    */
    void samp_Prog7();

    /*
    * @brief: Calculates circumference and area of a circle.
    */
    void circle(const double& radius, double& area, double& circumference);

    bool quadEquation(double a, double b, double c, double* p1, double* p2);
};



#endif //CHAPTER13_CLASS_H
