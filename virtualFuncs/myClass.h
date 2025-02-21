//
// Created by alaz on 09.10.2024.
//

#ifndef MYCLASS_H
#define MYCLASS_H
#include <string>


class myClass {
private:
    int data;
public:
    myClass() : data(0) {};
    virtual void yazdir();
    virtual void takimim() = 0;
};

class myClass2 : public myClass {
private:
    std::string word;
public:
    myClass2() : word("hamsi") {};
    void takimim() override;
};

#endif //MYCLASS_H
