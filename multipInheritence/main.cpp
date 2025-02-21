#include <iostream>
#include "Base.h"
int main() {
    MultiDerived *ptr = new MultiDerived();
    delete ptr;
    return 0;
}
