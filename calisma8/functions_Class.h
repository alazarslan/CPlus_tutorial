//
// Created by alaz on 26.07.2024.
//

#ifndef FUNCTIONS_CLASS_H
#define FUNCTIONS_CLASS_H



class functions_Class {
public:
    void ch10prog1(int, double);

    /*
     * @brief: // Computes the area of a rectangle.
     */

    void moveTo(int x = 0, int y = 0);

    void ch10prog2();

    inline double Max(double x, double y) {
        return (x > y) ? x : y;
    };

    inline char Max(char x, char y) {
        return (x > y) ? x : y;
    };

    void ch10code1();

    long sum(long var1, long var2, long var3 = 0, long var4 = 0);

    double area(double, double);

    long double factorialLoop(unsigned int n);

    long double factorialRecursive(unsigned int n);

    double pow(double base, int exp);
};



#endif //FUNCTIONS_CLASS_H
