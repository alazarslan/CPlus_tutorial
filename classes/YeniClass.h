//
// Created by alaz on 08.08.2024.
//

#ifndef YENICLASS_H
#define YENICLASS_H

#include <string>
using namespace std;


class YeniClass {
public:
    /*
     * @brief: swap's the values that ptr1 and ptr2 points.
    */
    void swap(string* ptr1, string* ptr2);

    /*
     * @brief: fonksiyona gönderilen arrayin içindeki
     * stringleri ascii table'ye göre küçükten büyüğe
     * doğru sıralar.
    */
    void sirala(string arr[], int size);

    /*
     * @brief: sirala fonksiyonunun kullanımı
    */
    void arrayListFunc();
};



#endif //YENICLASS_H
