#include <iostream>
#include "calisma3_class.h"
#include <cmath>
#include <string>
#include <sstream>
using namespace std;
int main() {
    calismaClass myVar;
    /*
    cout << "Custom made ln(0.2): " << myVar.ln_func(0.2)  << " --- The real value of ln(0.2) is: -1,609437" << endl;
    cout << "Custom made ln(0.5): " << myVar.ln_func(0.5)  << " --- The real value of ln(0.5) is: -0,69314" << endl;
    cout << "Custom made ln(1.5): " << myVar.ln_func(1.5)  << " ---The real value of ln(1.5) is: 0,40546" << endl;
    cout << "Custom made ln(2): " << myVar.ln_func(2)  << " --- The real value of ln(2) is: 0,69314" << endl;
    cout << "Custom made ln(2.5): " << myVar.ln_func(2.5)  << " --- The real value of ln(2.5) is: 0,91629" << endl;
    cout << "Custom made ln(5): " << myVar.ln_func(5)  << " --- The real value of ln(5) is: 1,60943" << endl;
    cout << "Custom made ln(10): " << myVar.ln_func(10)  << " --- The real value of ln(10) is: 2,30258" << endl;
    cout << myVar.log_func(3.3, 15);
    */
    cout << myVar.exp_func(12);
    return 0;
}
