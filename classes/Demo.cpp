//
// Created by alaz on 26.08.2024.
//

#include "Demo.h"

Demo::Demo(const string & str, int sayi) {
    name = str;
    num = sayi;
    cout << "I am the constructor of "<< name << '\n'
    << "This is the " << num << ". object!\n";
}

Demo::~Demo() {
    cout << "I am the destructor of " << name << '\n'
    << "The " << num << ". object "
    << "will be destroyed " << endl;
}

