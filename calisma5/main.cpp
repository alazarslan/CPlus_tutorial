#include <iostream>
#include <cmath>
#include "calisma5_class.h"
using namespace std;

#define CLS (cout << "\033[2J")
#define LOCATE(z,s) (cout << "\033[" << (z) << ';' << (s) << 'H')

int main() {
    calisma5_class *myVar = new calisma5_class;
    //myVar->ch7prog1();
    //myVar->ch7prog2();
    //myVar->ch7codes1();
    //myVar->ch7prog3();
    //myVar->ch7codes2();
    //myVar->ch7ex3();
    myVar->ch8prog1();

    return 0;
}
