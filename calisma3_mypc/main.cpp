#include <iostream>
#include "calisma3_class.h"

using namespace std;

int main() {
    calismaClass myVar;
    cout << myVar.ln_func(0.2)<< endl;
    cout << myVar.exp_func(12) << endl;
    cout << myVar.power_func(2,2) << endl;
    cout << myVar.sin_func(180) << " bu sin" << endl;
    cout << myVar.cos_func(720) << endl;
    cout << myVar.root_func(99,3) << endl;
    cout << myVar.arctan_func(3) << endl;
    cout << myVar.tan_func(180) << endl;
    myVar.sample_program1();
    //myVar.sample_program2();
    //myVar.sample_program3();
    //myVar.exercise1();
    cout << myVar.cosh_func(0) << endl;
    return 0;
}
