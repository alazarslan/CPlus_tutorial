//
// Created by alaz on 08.08.2024.
//

#include "YeniClass.h"
#include "Account.h"


void YeniClass::swap(string *ptr1, string *ptr2) {
    string temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}


void YeniClass::sirala(string arr[], int size) {
    string *countPtr, *changePtr;
    for (int i =0; i < size ;i++ ) {
        countPtr = &arr[i];
        changePtr = &arr[i];
        for (int j = i+1; j < size; j++) {
            if (changePtr->compare(arr[j]) > 0) {
                changePtr = &arr[j];
            }
        }
        if (countPtr != changePtr) {
            swap(countPtr,changePtr);
        }
    }
}

void YeniClass::arrayListFunc() {
    string arr[5], word;
    cout << "Enter " << size(arr) << " many words to fill the array: ";

    for (int i = 0; i < size(arr); i++) {
        cin >> word;
        arr[i] = word;
    }
    sirala(arr,5);

    for (int i = 0; i < size(arr); i++) {
        cout << arr[i] << endl;
    }
}


