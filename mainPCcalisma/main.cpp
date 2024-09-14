#include <iostream>
#include "myClass.h"
#include "Array.h"
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

    // < kullanımı
    bool denemeBool = obj1 < obj2;
    cout << "obj1 < obj2'nin sonucu (bool olarak): " << denemeBool << endl;

    // > kullanımı
    bool denemeBool2 = obj1 > obj2;
    cout << "obj1 > obj2'nin sonucu (bool olarak): " << denemeBool2 << endl;

    // << kullanımı
    cout << "cout << obj1 << tab << obj2 << endl; Outputu: " << obj1 << "\t" << obj2 << endl;

    // >> kullanımı
    myClass obj3;
    cout << "Obj3'e bir deger atayin:";
    cin >> obj3;
    cout << "Obj3'un valuesi: " << obj3 << endl;

    obj1 += obj2 += obj3;
    cout << obj1 << endl;

    Array obje(5);
    //obje[22] = 21;
    cout << "5 sayi giriniz: ";
    cin >> obje;
    cout << obje;
    return 0;
}
