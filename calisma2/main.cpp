#include <iostream>
#include <climits> // Definition of INT_MIN, ...
using namespace std;

int gVar1; // Global variables, // global int variableye deger atamadiginda otomatik olarak 0 veriyo
int gVar2 = 2; // explicit initialization

const double pi = 3.141593;

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


    /****************************************************************************************/
    // ■ a decimal constant (base 10) begins with a decimal number other than zero, such
    //as 109 or 987650
    //■ an octal constant (base 8) begins with a leading 0, for example 077 or 01234567
    //■ a hexadecimal constant (base 16) begins with the character pair 0x or 0X, for
    //example 0x2A0 or 0X4b1C. Hexadecimal numbers can be capitalized or noncapitalized.

    //12L and 12l correspond to the type long
    //12U and 12u correspond to the type unsigned int
    //12UL and 12ul correspond to the type unsigned long
    cout << endl << "12L karsiligi: " << 12L << endl;
    cout << "12UL karsiligi: " << 12UL << endl;
    cout << endl << "52L karsiligi: " << 52L << endl;
    cout << "52UL karsiligi: " << 52UL << endl << endl;

    //A string constant is stored internally without the quotes but terminated with a null character, \0,
    //represented by a byte with a numerical value of 0 — that is, all the bits in this
    //byte are set to 0. Thus, a string occupies one byte more in memory than the number of
    //characters it contains. An empty string, "", therefore occupies a single byte
    string sifir = "0";
    cout << size(sifir); // kitapta size 2 olmalı demiş ama size outputta 1 veriyor?????
    cout << endl << "--------------------------------------------" << endl << endl;

    // escape sequenceslar
    cout << "Alaz\nAlaz " "alazzzz"; // \n alt satira geciyor
    cout << "\nThis is\t a string\n\t\t" "with \"many\" escape sequences!\n";
    // output:
    // This is  a string
    //   (2 tab)    with "many" escape sequences!
    // alt satir
    cout << endl << "--------------------------------------------" << endl << endl;

    /****************************************************************************************/
    char ch('A'); // Local variable being initialized
    // or: char ch = 'A';
    cout << "Value of gVar1: " << gVar1 << endl; // global int variableye deger atamadiginda otomatik olarak 0 veriyo
    // not: local variableye deger vermezsen undefined initial value oluyomus(alt satirda acikliyorum)
    int x; // int olunca 0 verdi, string ve charda bir şey çıkmadı.
    cout << x << endl;
    cout << "Value of gVar2: " << gVar2 << endl;
    cout << "Character in ch: " << ch << endl;
    int sum, number = 3; // Local variables with
    // and without initialization
    sum = number + 5;
    cout << "Value of sum: " << sum << endl;
    /****************************************************************************************/
    cout << endl << "--------------------------------------------" << endl << endl;

    /****************************************************************************************/
    double area, circuit, radius = 1.1;
    area = pi * radius * radius;
    circuit = 2 * pi * radius;
    cout << "\nTo Evaluate a Circle\n" << endl;
    cout << "Radius: " << radius << endl
         << "Circumference: " << circuit << endl
         << "Area: " << area << endl;
    // pi = pi + 2.0;
    // üst satırdaki kodu yazamıyorum çünkü pi'yi başlangıçta const variable olarak deklare ettik
    /****************************************************************************************/
    cout << endl << "--------------------------------------------" << endl << endl;

    // volatile keywordunde external eventlerden bahsetmiş fakat ne olduklarını anlamadım

    return 0;
}