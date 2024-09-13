#include <iostream>
#include "myClass.h"
using namespace std;
int main() {

    // Unary & kullanımı
    myClass obj1(4), obj2(10);
    myClass* ptr = &obj1;
    cout << &obj1 << "\t\t" << ptr<< endl;

    // Binary & kullanımı
    cout << "Bitwise AND: " << (obj1 & obj2) << endl; // nasıl çalıştığını bilmiyorum

    // Unary * kullanımı (dereference)
    cout << "Dereferencelenmis value: " << *obj1 << endl;

    // Binary * kullanımı (çarpma)
    myClass multipObj = obj1 * obj2;
    cout << "Iki objenin carpiminin dereferencelenmis valuesi: "<< *(obj1 * obj2) << endl;

    // Unary + kullanımı
    myClass c = +obj1;  // Aynı değeri geri döner
    cout << "Unary +: " << c.value << endl;

    // Binary + kullanımı
    myClass res = obj1 + obj2;
    cout << "Toplama sonucu: " << res.value << endl;

    // Unary - kullanımı
    myClass negative = -multipObj;
    cout << "Unary- : " << negative.value << endl;

    // Binary - kullanımı
    myClass sonucEksi = multipObj - obj1;
    cout << "Cikarma sonucu: " << sonucEksi.value << endl;

    return 0;
}
