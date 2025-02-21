//
// Created by alaz on 17.09.2024.
//

#ifndef CHILDCLASS_H
#define CHILDCLASS_H
#include "parentClass.h"
#include "class3.h"
class childClass : public parentClass, public class3 {
public:
    childClass();
    ~childClass();
    void show();
};

#endif //CHILDCLASS_H
