//
// Created by alaz on 08.08.2024.
//

#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <string>
using namespace std;

class Account {
private:
    string name;
    unsigned long nr;
    double state;

public:
    Account( const string&, unsigned long, double );
    Account( const string& );
    bool init(const string&, unsigned long, double);
    inline void display();
    string getName() const;

};



#endif //ACCOUNT_H
