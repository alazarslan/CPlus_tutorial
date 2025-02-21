//
// Created by alaz on 17.09.2024.
//

#ifndef PARENTCLASS_H
#define PARENTCLASS_H
#include <iostream>
#include <ostream>
#include "class3.h"

class parentClass : public class3{
public:
    parentClass();
    ~parentClass();
    virtual inline void show() = 0;
};



#endif //DENEME_H
