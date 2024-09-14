//
// Created by ALAZ on 14.09.2024.
//

#include "Array.h"

Array::Array() {
    size = 10;
    arrPtr = new int[10];
}

Array::Array(int num) {
    size = num;
    arrPtr = new int[num];
}

Array::Array(const Array &arr) {
    size = arr.size;
    arrPtr = new int[size];
}
