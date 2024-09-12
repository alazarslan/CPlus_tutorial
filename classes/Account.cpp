//
// Created by alaz on 08.08.2024.
//

#include "Account.h"
#include <iostream>
#include <iomanip>
using namespace std;
// <<>>

Account::Account(const string & a_name, unsigned long a_nr, double a_state) {
    nr = a_nr;
    name = a_name;
    state = a_state;
}

Account::Account(const string & a_name) {
    name = a_name;
    nr = 1111111; state = 0.0;
}



bool Account::init(const string & i_name, unsigned long i_nr, double i_balance)
{
    if (i_name.size() < 1)
    {      // No empty name
        return false;
    }
    name = i_name;
    nr = i_nr;
    state = i_balance;
    return true;
}

void Account::display() {
    cout << fixed << setprecision(2)
    << "--------------------------------------\n"
    << "Account holder: " << name << '\n'
    << "Account number: " << nr << '\n'
    << "Account balance: " << state << '\n'
    << "--------------------------------------\n"
    << endl;
}

string Account::getName() const {
    return name;
}

