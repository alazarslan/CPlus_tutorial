//
// Created by alaz on 10.09.2024.
//

#include "Account.h"

// write() outputs an account into the given stream os.
// Returns: The given stream.
ostream& Account::write(ostream& os) const
{
    os << name << '\0';
    // To write a string
    os.write((char*)&nr, sizeof(nr) );
    os.write((char*)&balance, sizeof(balance) );
    return os;
}
// read() is the opposite function of write().
// read() inputs an account from the stream is
// and writes it into the members of the current object
istream& Account::read(istream& is)
{
    getline( is, name, '\0');
    // Read a string
    is.read( (char*)&nr, sizeof(nr) );
    is.read( (char*)&balance, sizeof(balance));
    return is;
}

void Account::accArr(int size) {
    Account tempArr[] = {{"alaz", 109, 15},
                                {"aziz", 347,100.61},
                                {"icardi",99,10},
                                {"osimhen",45,6},
                                {"mertens",10,3.8}
    };
    for (int i = 0; i < size; i++) {
        this[i] = tempArr[i];
    }
}