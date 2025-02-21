#include <iostream>
#include <iostream>
using namespace std;
int main() {

    string str1 = "Hello World";
    string str2 = "ABCDEFGHIJK";
    cout << str1.at(0) << "\t\t .at() fonksiyonu, girilen indexteki yeri verir. at(0) kullandik" << endl;
    cout << str1.length() << "\t\t .length() fonksiyonu, string uzunlugunu verir." << endl;
    cout << str1.size() << "\t\t .size() fonksiyonu, string uzunlugunu verir." << endl;
    cout << str1.max_size() << "\t\t .max_size() fonksiyonu, stringin max lengthi verir." << endl;
    cout << str1.empty() << "\t\t .empty() fonksiyonu, string empty mi check eder verir." << endl;

    // FONKSIYON append:
    // syntax: str1.append(str2, pos, num);
    // pos -> starting position, num -> number of characters to append
    // syntax2: str1.append(num, c);
    // num -> eklenecek karakterin sayisi, c -> eklenecek karakter. (char)


    cout << str1.append(str2) << "\t\t .append() fonksiyonu, parantez icine yazilanı .dan once yazilana ekler." << endl;
    str1 = "Hello World";
    str2 = "ABCDEFGHIJK";
    cout << str1.append(str2,3,5) << "\t\t burada pos -> 3 ve num -> 5 aldik. str1'in sonuna str2'nin 3.indexinden sonraki 5 characteri(3. index dahil) appendleyecek." << endl;
    str1 = "Hello World";
    str2 = "ABCDEFGHIJK";
    cout << str1.append(5,'!') << "\t\t num -> 5, c -> '!'. str1'in sonuna 5 adet ! ekler." << endl;

    //FONKSIYON substr:
    // syntax: str1.substr(pos, len);
    // pos -> str1'in bolunecek indexi, len -> yeni olusacak string uzunlugu

    str1 = "Hello World";
    str2 = "ABCDEFGHIJK";
    cout << str1.substr(2,3) << endl; // 2.index dahil sonraki 3 karakterli string
    string s1("Miss Summer");
    s1.insert(5, "Ashley ");
    cout << s1 << endl;

    cout << str1.insert(6, str2, 8, 3) <<endl;
    // FONKSIYON: insert()
    // str1.insert(pos1, str2, pos2, length)
    // str1'in pos1. indexine, str2nin pos2. indexinden başlayıp length uzunluğundaki karakterleri ekle.
    // str1.insert(pos1, str2)
    // str1'in pos1.indexine str2'yi ekle
    // str1.insert(pos, num, c)
    // str1'in pos. indexine num tane c karakteri ekle.


    // erase(0,5) -> 0.indexten itibaren 5 karakteri siler(0 dahil)
    // erase(3) -> 3.indexten itibaren tum karakterleri siler(3 dahil)
    // erase() -> tum karakterleri siler

    // str1.replace(pos1, n, str2, pos2,m)
    // Replaces 5 characters from 6th index of str1 with 5 characters from 4th of str2

    // find() ve rfind(), içlerine yazılan inputu stringde arayıp indexini veriyolar
    // [] operatörü ve .at() operatörü aynı.
    string s("winter-story");
    cout << s.erase(6) << endl;

    string s15("There they go again!"),
    s22("Bob and Bill");
    cout <<s15.replace(6, 4, s22);
    return 0;
}