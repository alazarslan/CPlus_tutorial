#include <iostream>
#include <climits> // Definition of INT_MIN, ...
using namespace std;
int main()
{
    cout << "Range of types int and unsigned int"
         << endl << endl;
    cout << "Type Minimum Maximum"
         << endl
         << "--------------------------------------------"
         << endl;
    cout << "int " << INT_MIN << " " << INT_MAX << endl;
    cout << "unsigned int " << " 0 " << UINT_MAX << endl;

    cout << endl << "--------------------------------------------" << endl << endl;
    // char <= short <= int <= long
    cout << CHAR_MIN << " //////////// " << CHAR_MAX << endl << endl;

    cout << sizeof(int) << " " << sizeof(char) << " " << sizeof(double) << " " << sizeof(float) << " " << endl;
    // 43. sayfadaki tabloda 27UL 033UL vs yazıyo???????
    cout << endl << "--------------------------------------------" << endl << endl;

    /******************************************************************/
    // Örnek program

    // To display hexadecimal integer literals and
    // decimal integer literals.
    //

    // cout outputs integers as decimal integers:
    cout << "Value of 0xFF = " << 0xFF << " decimal" << endl; // Output: 255 decimal
    // The manipulator hex changes output to hexadecimal
    // format (dec changes to decimal format):
    cout << "Value of 27 = " << hex << 27 <<" hexadecimal" << endl; // Output: 1b hexadecimal
    cout << "Value of 155 = " << hex << 155 <<" hexadecimal" << endl;
    cout << "Value of 1984 = " << hex << 1984 <<" hexadecimal" << endl;
    /******************************************************************/
    return 0;
}