//
// Created by alaz on 08.10.2024.
//

#include "floatArr.h"

#include <iostream>

floatArr::floatArr(int n) {
    curr_size = 0;
    max_size = n;
    arrPtr = new float[max_size];
}

floatArr::floatArr(int n, float val) {
    curr_size = max_size = n;
    arrPtr = new float[max_size];
    for (int i = 0; i < max_size; i++) {
        arrPtr[i] = val;
    }
}

floatArr::floatArr(const floatArr &arr) {
    curr_size = arr.curr_size;
    max_size = arr.max_size;
    arrPtr = new float[max_size];
    for (int i = 0; i < max_size; i++) {
        arrPtr[i] = arr.arrPtr[i];
    }
}

floatArr::~floatArr() {
    delete[] arrPtr;
    arrPtr = nullptr;
}

//burayı tekrar incele
float & floatArr::operator[](int i) {
    if (i < 0 || i >= curr_size) {
        std::cerr << "\n class FloatArr: Out of range! ";
        exit(1);
    }
    return arrPtr[i];
}

float floatArr::operator[](int i) const {
    if (i < 0 || i >= curr_size) {
        std::cerr << "\n class FloatArr: Out of range! ";
        exit(1);
    }
    return arrPtr[i];
}

bool floatArr::append(float val) {
   
}



