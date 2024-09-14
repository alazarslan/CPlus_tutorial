//
// Created by ALAZ on 14.09.2024.
//

#include "Array.h"
using namespace std;
Array::Array()
{
    size = 10;
    arrPtr = new int[10];
    for (int i = 0; i < size; i++)
    {
        arrPtr[i] = 0;
    }
}

Array::Array(int num)
{
    size = num;
    arrPtr = new int[num];
    for (int i = 0; i < size; i++)
    {
        arrPtr[i] = 0;
    }
}

Array::Array(const Array &arr)
{
    size = arr.size;
    arrPtr = new int[size];
    for (int i = 0; i < size; i++)
    {
        arrPtr[i] = arr.arrPtr[i];
    }
}

Array::~Array()
{
    delete[] arrPtr;
    arrPtr = nullptr;
}

int Array::getSize()
{
    return size;
}

bool Array::operator!=(const Array& arrObj)
{
    // eğer sizeleri eşit değilse zaten arrayler eşit olamaz
    if (size != arrObj.size)
        return true;

    // sizeleri eşitse indexlere bak
    for (int i = 0; i < size; i++)
    {
        if (arrPtr[i] != arrObj.arrPtr[i])
        {
            return true;
        }
    }

    // indexler de eşitse arrayler eşittir
    return false;
}

bool Array::operator==(const Array& arrObj)
{
    // eğer sizeleri eşit değilse zaten arrayler eşit olamaz
    if (size != arrObj.size)
        return false;

    // sizeleri eşitse indexlere bak
    for (int i = 0; i < size; i++)
    {
        if (arrPtr[i] != arrObj.arrPtr[i])
        {
            return false;
        }
    }

    // indexler de eşitse arrayler eşittir
    return true;
}

const Array& Array::operator=(const Array& arrObj)
{
    // Self assignment'ı engellemek için
    if (*this != arrObj)
    {
        // arraylerin sizeleri eşitse sadece sağdaki arrayin içeriğini soldaki arraye kopyala
        if (size == arrObj.size)
        {
            for (int i = 0; i < size; i++)
            {
                arrPtr[i] = arrObj.arrPtr[i];
            }
        }

        // arraylerin sizeleri eşit değilse sol arrayi sil, yeni bir array oluştur ve sağın içeriğini bu yeni arraye
        // kopyala
        else
        {
            delete []arrPtr;
            size = arrObj.size;
            arrPtr = new int[size];
            for (int i = 0; i < size; i++)
            {
                arrPtr[i] = arrObj.arrPtr[i];
            }
        }
    }

    return *this;
}

int& Array::operator[](const int& index)
{
    if (index < 0 || index > size - 1)
    {
        cerr << "Error! Index array sinirlerinin disinda!!!" << endl;
    }
    return arrPtr[index];
}


ostream& operator<<(ostream& os, const Array& arrObj)
{
    for (int i = 0; i < arrObj.size; i++)
    {
        os << "Array'in " << i <<". Index'teki degeri: " << arrObj.arrPtr[i] << endl;
    }
    return os;
}

istream& operator>>(istream& is, Array& arrObj)
{
    for (int i = 0; i < arrObj.size; i++)
    {
        is >> arrObj.arrPtr[i];
    }
    return is; // enables cin >> x >> y;
}