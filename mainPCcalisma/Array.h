//
// Created by ALAZ on 14.09.2024.
//

#ifndef MAINPCCALISMA_ARRAY_H
#define MAINPCCALISMA_ARRAY_H


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
    int operator[](const int &index);


};

#endif //MAINPCCALISMA_ARRAY_H
