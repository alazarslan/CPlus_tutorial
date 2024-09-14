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
    Array();
    Array(int num);
    Array(const Array& arr);
};


#endif //MAINPCCALISMA_ARRAY_H
