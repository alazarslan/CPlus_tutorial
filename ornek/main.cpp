#include <iostream>
#include "childClass.h"

using namespace std;


int main() {

    //parentClass parent{};
    childClass child{};
    //parentClass *ptr;
    //ptr = &parent;
    childClass *ptr;
    //ptr->show();
    cout << endl;
    ptr = &child;
    ptr->show();

    return 0;
}
