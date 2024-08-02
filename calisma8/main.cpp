#include <iostream>
#include <chrono>
#include <ctime>
#include <iomanip>

#include "functions_Class.h"
#include "passw1.h"

// <<>>
int main()
{
    functions_Class *myVar = new functions_Class;
    //cout << myVar->factorialRecursive(6) << endl;
    //cout << myVar->pow(5.1132,2) << endl;
    //myVar->moveTo(3);
    //myVar->ch10prog2();
    //cout << myVar->sum(3,5,100,42);
    //myVar->ch10code1();
    char key;
    string newPass;
    bool flag = true;
    int count = 0;
    string x = "Alaz+me";
    while (flag) {
        cout << "Enter the keyword: " << endl;
        cin >> key;
        if (key == 'E') {
            cout << "The program is terminating..." << endl;
            flag = false;
        }
        else if (key == 'B') {
            if (getPassword() == true) {
                cout << "Enter the new password: ";
                cin >> newPass;
                changePassword(newPass);
                flag = false;
            }
            else {
                count++;
                if (count == 3) {
                    cout << "You have reached the try limit for password. Try again later!"
                    << endl;
                    break;
                }
                cout << "Password is not correct! Please try again." << endl;
            }
        }
    }
    return 0;
}