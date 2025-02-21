#include <iostream>
using namespace std;

int *retPtr(int* ptr) {
    delete ptr;
    ptr = new int(15);
    return ptr;
}

int main() {
    /*
    int* ptr = new int;
    *ptr = 1;
    cout << *ptr << endl << endl;

    int *newPtr = retPtr(ptr);
    cout << "newPtr: " <<*newPtr << endl;
    cout << "oldPtr: " <<*ptr << endl;

    delete ptr;
    */
    for (int i = 1; i <= 10000; i++) {
        for (int j = 1; j <= 10000; j++) {

        }
    }
    return 0;
}
