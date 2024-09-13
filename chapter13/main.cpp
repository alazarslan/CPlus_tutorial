#include <iomanip>
#include <iostream>

#include "chapter13_class.h"
#include <iostream>
#include <vector>
using namespace std;
// <<>>

int lenFunc(char* sP) {
    int count = 0;
    while (*(sP + count) != '\0') {
        count++;
    }
    return count;
}

void swapByRef(int &x, int &y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
}

void swapByPtr(int *px, int *py) {
    int temp = *px;
    *px = *py;
    *py = temp;
}

void swapByPtr2(int **px, int **py) {
    int *temp = *px;
    *px = *py;
    *py = temp;
}

int main() {
    /*
    double area, circumference;
    chapter13_class *myVar = new chapter13_class();
    int *p, x = 9;
    //p = new int;
    p = &x;
    cout << "x: "<< x << endl << "&x: " << &x << endl;
    cout << "*p: "<<*p << endl << "p: " << p << endl << "&p: "<< &p << endl;
    int *p1 = new int;
    *p1 = x;

    cout << endl << "*p: "<<*p << endl << "p: " << p << endl << "&p: "<< &p << endl;
    cout << "*p: "<<*p << endl << "p: " << p << endl << "&p: "<< &p << endl;
    delete p1;
    delete myVar;
    */
    //delete p;
    //myVar->samp_Prog1();
    //myVar->samp_Prog2();
    //myVar->samp_Prog3();
    //myVar->samp_Prog4();
    //myVar->samp_Prog5();
    //myVar->samp_Prog6();
    //myVar->samp_Prog7();
    //myVar->circle(10,area,circumference);
    /*
    cout << "Area: " << area << "\nCircumference: " << circumference << endl;
    int x = 10, y = 15;
    int* px = &x;
    int* py = &y;
    cout << px << "\t" << *px << endl;
    cout << py << "\t" << *py<< endl;
    int* temp;
    temp = px;
    cout << temp << "\t" << *temp<< endl;
    px = py;
    py = temp;
    cout << px << "\t" << *px << endl;
    cout << py << "\t" << *py<< endl;
    */

    /*
    float *temp;
    float x = 15, y = 10;
    temp = &x;
    float* px = &x;
    float* py = &y;
    //cout << "temp'in adresi: " << temp << endl;
    //cout << "x'in adresi: " << x << endl;
    //cout << "temp'in YENI adresi: " << temp << endl;
    cout << "x: " << x << " y: " << y << endl;
    Oswap(*px,*py);
    cout << "x: " << x << " y: " << y << endl;
    delete px;
    */
    //int data[10];
    //int *point = new int[8];

    /*********************************************************************/

    /*
    int count = 0;
    int **ptr = new int*[10];
    for (int i = 0; i< 10; i++) {
        ptr[i] = new int[10];
        for (int j = 0; j < 10; j++) {
            ptr[i][j] = count;
            count++;
            cout << ptr[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < 10; i++) {
        delete ptr[i];
    }
    delete []ptr;
    */


    int x = 10, y = 15;
    int *px = &x;
    int *py = &y;
    swapByPtr2(&px, &py);
    int arr[3] = {0,5,10};
    int *myptr, **myptr2, *arrptr;
    //myptr = &x;
    myptr = arr;
    arrptr = &arr[0];
    //myptr2 = &myptr;

    /*
    char *chPTR = "this is a pointer";
    cout << "pointerin lengthi: " << lenFunc(chPTR) << endl;
    //chPTR[0] = 'B';
    if (chPTR[17] == '\0') {
        cout << "chPTR son indexi: " << chPTR[17] << endl;
    }
    else {
        cout << "son index başka bir şey!" << endl;
    }
    cout << "arr adres: " << myptr << endl;
    cout << "&arr[0] adres: " << arrptr << endl;
    cout << "x: " << x << " y: " << y << endl;
    swapByPtr2(&px,&py);
    cout << "x: " << x << " y: " << y << endl;
    */

    char cc = 'S';
    char* chP = &cc;
    char** chPP = &chP;
    cout << "*chPP: " << *chPP << endl;
    cout << "(void*)chPP: " << (void*)chPP << endl;
    char *oddOrEven = "Never odd or even" ;
    char *nthCharPtr = &oddOrEven[5];
    nthCharPtr -= 2;
    //cout << *nthCharPtr << endl;
    char **pointerPtr = &nthCharPtr;
    cout << "pointerPtr: "<<pointerPtr << endl;
    cout << "*pointerPtr: "<<*pointerPtr << endl;
    cout << "**pointerPtr: "<<**pointerPtr << endl;
    cout << "&pointerPtr: "<<&pointerPtr << endl;
    cout << "(void*)pointerPtr: "<<(void*)pointerPtr << endl;
    nthCharPtr += 1;
    cout << nthCharPtr - oddOrEven << endl << endl;


    x = 4, y = 5;
    int *a = &x, *b = a, **c = &b;
    cout << "Address of x: " << &x << endl;
    cout << "Address of y: " << &y << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Address of b: " << &b << endl;
    cout << "Address of c: " << &c << endl;
    cout << "**c: " << **c << endl;
    cout << "*c : " << *c << endl;
    cout << "c : " << c << endl;
    cout << "&c : " << &c << endl << endl;
    int* al = new int;
    *al = 15;
    delete al;

    /*
    for (int i = 0; i< 10; i++) {
        *(data + i) = i * 2;
    }
    //cout << "////////////////////" <<*(point) << endl;
    for (int i = 0; i< 10; i++) {
        *(point+i) = data[i];
        cout <<*(point+i) << endl;
    }
    */

    /*
    *(data + 3) = 33;
    int* ptrX = data;
    for (int i = 0; i< 10; i++) {
        cout << *(data+i) << endl;
    }
    cout << *(ptrX+3) << endl << endl;
    ptrX[1] = ptrX[2] + ptrX[3];
    for (int i = 0; i< 10; i++) {
        cout << *(data+i) << endl;
    }
    */
    return 0;
}

