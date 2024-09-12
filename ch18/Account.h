//
// Created by alaz on 10.09.2024.
//

#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
using namespace std;

class Account {
private:
    string name;
    unsigned long nr;
    double balance;
public:
    // Sheltered members:
    // Account holder
    // Account number
    // State of the account
    //Public interface:
    // constructors, destructor:
    Account( const string& a_name = "X", unsigned long a_nr = 1111111L, double a_state = 0.0)
    { name = a_name; nr = a_nr; balance = a_state; }
    ~Account(){ }
    // Access methods:
    const string& getName() { return name; }
    bool setName( const string& s)
    {
        if( s.size() < 1)
            // No empty name
                return false;
        name = s;
        return true;
    }
    unsigned long getNr() { return nr; }
    void setNr( unsigned long n) { nr = n; }
    double getState() { return balance; }
    void setState(double x) { balance = x; }
    void display();

    ostream& write(ostream& os) const;
    istream& read(istream& is);

    void accArr(int size);
};



#endif //ACCOUNT_H
