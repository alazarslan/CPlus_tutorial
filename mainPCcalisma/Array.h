//
// Created by ALAZ on 14.09.2024.
//

#ifndef MAINPCCALISMA_ARRAY_H
#define MAINPCCALISMA_ARRAY_H

#include <iostream>


class Array {
private:
    int size;
    int* arrPtr;
public:
    // Default constructor
    Array();

    // Parametric constructor
    Array(int num);

    // Deep copy constructor
    Array(const Array& arr);

    // Destructor
    ~Array();

    // Getter
    int getSize();

    // != operator
    bool operator!=(const Array& arrObj);

    // == operator
    bool operator==(const Array& arrObj);

    // = (Assignment) operator
    // return type const Array& olunca compiler (arr1 = arr2) = arr3 işleminin yapılması engelliyor
    // return type Array& olsaydı (arr1 = arr2) = arr3 işlemi uygulanabilirdi
    const Array& operator=(const Array& arrObj);

    // [] (Subscript) operator
    // return type int& olmasının sebebi "array[3] = 5;" yazabilmek,
    // yani assignment yapmak.
    // return type int olsaydı sadece okumaya izin verilecekti,
    // "array[3] = 5" gibi bir ifade kullanmak error verecekti.
    int& operator[](const int &index);

    friend std::ostream& operator<<(std::ostream& os, const Array& arrObj);
    friend std::istream& operator>>(std::istream& is, Array& arrObj);
};

std::ostream& operator<<(std::ostream& os, const Array& arrObj);

std::istream& operator>>(std::istream& is, Array& arrObj);

#endif //MAINPCCALISMA_ARRAY_H
