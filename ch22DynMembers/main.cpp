#include <iostream>
#include "floatArr.h"
using namespace std;
int main() {
    floatArr arr1(10,1.0);
    cout << arr1[0] << endl;
    arr1[0] = 5;
    cout << arr1[0] << endl;
    return 0;
}
