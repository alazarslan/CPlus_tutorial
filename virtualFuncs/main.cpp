#include <iostream>
#include "myClass.h"
using namespace std;
int main() {
    /*
    myClass* basePtr = new myClass();
    basePtr->yazdir();
    cout << endl;
    delete basePtr;
    */
    myClass* basePtr = new myClass2();
    basePtr->yazdir();
    cout << endl;
    delete basePtr;
    myClass2 obj2;
    obj2.yazdir();

    return 0;
}
