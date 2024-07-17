//
// Created by alaz on 16.07.2024.
//

#include <iostream>
#include <iomanip>
#include "calisma4_class.h"
using namespace std;

void calisma4_class::ch3ex3() {
    string s("I have learned something new again!"), line1, line2;
    cout << s.length() << " this len " << endl;
    getline(cin, line1);
    getline(cin, line2);
    line1 += "*" + line2;
    cout << line1;
}

// tam degil
void calisma4_class::turev() {
    string turev("x^3");
    int b;
    string islem = "15x^3+7x^2+3x^1+1", dereceler;
    for (int i = 0; i < islem.length(); i++) {
        if (islem[i] == '^') {
            b = i;
            while (islem[b+1] != '+' && islem[b+1] != '-') {
                dereceler += islem[b+1];
                b++;
            }
            dereceler += '-';
        }
    }
    cout << dereceler << endl;
}

void calisma4_class::ch4codes1() {
    cout << "This is a standard output message." << endl;
    // cerr unbuffered, yani normalde direkt error mesajını vermesi lazım
    // ama bende vermedi, flush kullanınca veriyor
    // edit: kullanmadan verdi.
    cerr << "This is an error message." << endl;
    //cerr.flush(); // Ensure immediate output for cerr

    // clog buffered, yani flush kullanana kadar veya tampon(buffer) dolana kadar
    // mesajları biriktiriyor, flush kullandığında ya da buffer dolunca çıktı veriyor.
    clog << "This is a log message." << endl;
    //clog.flush(); // Ensure immediate output for clog
}

void calisma4_class::ch4codes2() {
    cout << showpos << 123; // +123
    //cout.setf(ios::showpos);      üstteki ile aynı
    //cout << 123;

    cout << 22; // +22 outputlayacak çünkü 1 kere showpos kullanınca
    // iptal olana kadar sayıların yanına (+) koyuyor.
    cout << -22; // -22 çıkıyor, yani showpos sembol koymadığının yanına (+) koyuyor.
    cout << noshowpos << 123 << endl << endl; // 123
    //cout.unsetf( ios::showpos); // üsttekinin aynısı
    //cout << 123;
                    // noshowpos kullanana kadar sembolsüz yazılan sayıların
                    // yanına (+) konuluyor, noshowpos bunu iptal ediyor.


    // Reads integral decimal values and
    // generates octal, decimal, and hexadecimal output.
    int number;
    cout << "Enter an integer:";
    //cin >> number;
    number = 15;
    cout << uppercase << "octal \t decimal \t hexadecimal \n" << oct << number
    << "      \t" << dec << number << "      \t" << hex << number << endl << endl;
    cout << nouppercase; // uppercase yazıp işin bittikten sonra nouppercase yaz!!!
                         // yoksa hexadecimalleri büyük harf yazmaya devam ediyor hep!

    cout << hex << 11; // output: b
    cout << hex << uppercase << 11 << nouppercase; // output: B
    cout << "\n\n";

    cout << dec << showpos << 11 << noshowpos<<"\n\n"; // output: +11 ama noshowpos dediğim için
                                                       // sonrakiler +'sız yazılacak.

    // hex yazdıktan sonra dec yazmazsan, sayiların default outputu hexadecimal seklinde oluyo
    // o yüzden hex'li bir sayi yazdıktan sonra dec'li bir sayı daha yaz.
    cout << dec << -1 << "\t" << hex << -1 << "\t" << dec << 120 << "\n\n";
    int sayi = 15;
    cout << sayi << endl;

    double x = 12.0;
    cout.precision(2); // cout << setprecision(2); de aynısı, ama iomanip library çağırılmalı
    cout << " By default:   " << x << endl;
    cout << " showpoint:    " << showpoint << x << endl; // sayinin sonuna nokta koyar
    cout << " fixed:    " << fixed << x << endl; // precision kaçsa noktadan snra o kadar sayi olur
    cout << " scientific:   " << scientific << x << endl; // sayinin sonuna e+ ekler

    cout << fixed << 15.23 << endl;
    cout << 1234567.8 << "\n\n";

    cout << '-' << setw(6) << 'X' << '-'; // setw -> boşluk bırakıyo
    cout << fixed << setprecision(2) << setw(10) << 123.4 << endl << "12345678910" << endl;

    /*
     * flush haberleşmede kullanılıyomuş, örneğin haberleşme bittiğinde flush yapılması lazım
     * dosya ile bir şeyler yaptın, işin bitince kapatmadan önce flush yapmak gerekiyomuş
     * genelde looplar programlar yazdığım şeyler bir bufferda birikiyor, flush yaparak
     * bu biriken şeyleri boşaltıyorum, flush optimizasyon için kullanılıyor
     * flush kullanılmazsa program çalışabilir ama doğru çalışmayabilir
    */

    cout << setfill('*') << setw(7) << 12 << endl;
    cout.width(10); cout.fill('x');
    cout << left << -123 << endl;
    cout.width(10); cout.fill('x');
    cout << right << -123 << endl;
    cout.width(10); cout.fill('x');
    cout << internal << -123 << endl;

}

void calisma4_class::ch4prog1() {
    int number = ' ';
    cout << "The white space code is as follows: " << number << endl;
    char ch;
    string prompt = "\nPlease enter a character followed by " " <return>: ";
    cout << prompt;
    cin >> ch;
    number = ch;
    // ch karakter, number o karakterin ascii karşılığını kaydediyo
    cout << "The character " << ch << " has code" << number << endl;
    cout << uppercase << "        octal  decimal  hexadecimal\n"
    << oct << setw(8) << number << dec << setw(8) << number << hex << setw(8) << number
    << endl;
}

void calisma4_class::ch4codes3() {
    int code = '0';
    cout << code << endl; // Output: 48 (ASCII karsiligi)
    string s("spring flowers ");
    cout << left << setfill('?') << setw(20) << s << endl;
    // output: spring flowers?????? (20 buyuklugu)

    bool ok = true;
    cout << ok << endl                              //Output: 1
    << boolalpha << ok << endl << noboolalpha;     //Output: true

    /********************************************************************/
    string label;
    double price;

    cout << "\nPlease enter an article label: ";
    // Input the label (15 characters maximum):
    cin >> setw(5); // or: cin.width(16);
    cin >> label;

    cin.sync(); // Clears the buffer and resets
    cin.clear(); // any error flags that may be set

    cout << "\nEnter the price of the article: ";
    cin >> price; // Input the price
    // Controlling output:
    cout << fixed << setprecision(6)
    << "\nArticle:"
    << "\n Label: " << label
    << "\n Price: " << price << endl;
    // ... The program to be continued
}

void calisma4_class::ch4codes4() {
    int number = 0;
    cout << "\nEnter a hexadecimal number: " << endl;
    cin >> hex >> number; // Input hex-number
    cout << "Your decimal input: " << number << endl;

    double x1 = 0.0, x2 = 0.0;
    cout << "\nNow enter two floating-point values: " << endl;

    cout << "1. number: ";
    cin >> x1; // Read first number
    cout << "2. number: ";
    cin >> x2; // Read second number
    cout << fixed << setprecision(2) << "\nThe sum of both numbers: "
    << setw(10) << x1 + x2 << endl;
    cout << "\nThe product of both numbers: "
    << setw(10) << x1 * x2 << endl << endl;

    string word, rest;
    cout << "\nPlease enter a sentence with several words!" << "\nEnd with <!> and <return>."
    << endl;
    cin >> word;                         // Read the first word
    getline( cin, rest, '!'); // and the remaining text
                                        // up to the character !
    cout << "\nThe first word: " << word << "\nRemaining text: " << rest << endl;
}

void calisma4_class::ch4ex1() {
    /*
     * 12
     * 12.
     * 12.00
     * 1.20e+01
     */
}

void calisma4_class::ch5codes1() {
    double x, y;
/*
    cout << "\nEnter two floating-point values: ";
    cin >> x >> y;
    cout << "The average of the two numbers is: "
    << (x + y)/2.0 << endl << endl;
*/
    int i(2), j(8);
    cout << i++ << endl; // Output: 2
    cout << i << endl; // Output: 3
    //out << j-- << endl; // Output: 8
    //cout << --j << endl; // Output: 6
    cout << ++j << "  " << j << endl << endl;

    float val(5.0);
    cout << val++ - 7.0 / 2.0 << endl;
    val = 5.0;
    cout << ++val - 7.0 / 2.0 << endl;
}

void calisma4_class::ch5prog1() {
    float x, y;
    cout << "\n Please enter a starting value: ";
    cin >> x;
    cout << "\n Please enter the increment value: ";
    cin >> y;
    x += y;
    cout << "\n And now multiplication! ";
    cout << "\n Please enter a factor: ";
    cin >> y;
    x *= y;
    cout << "\n Finally division.";
    cout << "\n Please supply a divisor: ";
    cin >> y;
    x /= y;
    cout << "\n And this is " << "your current lucky number: "
                                        // without digits after
                                        // the decimal point:
    << fixed << setprecision(0)
    << x << endl;
}

void calisma4_class::ch5codes2() {
    int result, length = 4, limit = 3;
    result = length + 1 == limit;       // once len+1, sonra len+1 ile limit karsilastir, en son result'a yazdır
    result = 0, length = 4, limit = 3;
    (result = length + 1) == limit;     // once result = len +1, sonra karsilastirma
}

void calisma4_class::ch5ex1() {
    3 / 10; // 0
    11 % 4; // 3
    15 / 2.0; // 7.5
    3 + 4 % 5; // 4
    3 * 7 % 4; // (3 * 7) % 4 = 21 % 4 = 1
    7 % 4 * 3; // 9

    int x, i = -2;
    x = -4 * i++ - 6 % 4;
    // (-4 * -2) - (6 % 4) = 8 - 2 = 6, i=-1 en son
    cout << x;

    int y = 7;
    bool var1 = y < 10 && y >= -1;      //true
    bool var2 = !y && y >= 3;           // false and true = false
    bool var3 = y++ == 8 || y == 7;     // false or false = false ( 7 == 8 or 8 == 7)
    cout << var1 << endl << var2 << endl << var3 << endl;

    cout << boolalpha; // Outputs boolean values
                       // as true or false
    bool res = false;
    y = 5;
    res = 7 || (y = 0);
    cout << "Result of (7 || (y = 0)): " << res << endl;
    cout << "Value of y: " << y << endl;
    int a, b, c;
    a = b = c = 0;
    res = ++a || ++b && ++c; //
    cout << '\n'
    << " res = " << res
    << ", a = " << a
    << ", b = " << b
    << ", c = " << c << endl;

    a = b = c = 0;
    res = ++a && ++b || ++c;
    cout << " res = " << res
    << ", a = " << a
    << ", b = " << b
    << ", c = " << c << endl;
}

void calisma4_class::ch6codes1() {
    int x, count = 0;
    float sum = 0.0;
    cout << "Please enter some integers:\n"
    "(Break with any letter)" << endl;
    while( cin >> x )
    {
        sum += x;
        ++count;
    }
    cout << "The average of the numbers: "
    << sum / count << endl;
}

void calisma4_class::ch6prog1() {
    double rate = 1.15; // Exchange rate:
                        // one Euro to one Dollar
    cout << fixed << setprecision(2);
    cout << "\tEuro \tDollar\n";
    for( int euro = 1; euro <= 5; ++euro)
        cout << "\t " << euro << "\t " << euro*rate << endl;
    cout << endl;

    long euro, maxEuro; // Amount in Euros
    rate;               // Exchange rate Euro <-> $
    cout << "\n* * * TABLE OF EXCHANGE " << " Euro – US-$ * * *\n\n";
    cout << "\nPlease give the rate of exchange: " " one Euro in US-$: ";
    cin >> rate;
    cout << "\nPlease enter the maximum euro: ";
    cin >> maxEuro;
    // --- Outputs the table ---
    // Titles of columns:
    cout << '\n' << setw(12) << "Euro" << setw(20) << "US-$"
    << "\t\tRate: " << rate << endl;
    // Formatting US-$:
    cout << fixed << setprecision(2) << endl;
    long lower, upper, // Lower and upper limit
    step;               // Step width

    // The outer loop determines the actual
    // lower limit and the step width:
    for( lower=1, step=1; lower <= maxEuro; step*= 10, lower = 2*step)
            // The inner loop outputs a "block":
            for(euro = lower, upper = step*10; euro <= upper && euro <= maxEuro; euro+=step)
                cout << setw(12) << euro << setw(20) << euro*rate << endl;
}

void calisma4_class::ch6codes2() {
    int x, i, limit;
    for( i=0, limit=8; i < limit; i += 2)
        x = i * i, cout << setw(10) << x;
    int a, b;
    x = (a = 3, b = 5, a * b);

    const long delay = 10000000L;
    int tic;
    cout << "\nHow often should the tone be output? ";
    cin >> tic;
    do
    {
        for( long i = 0; i < delay; ++i )   // burası gecikme yaratmak için,
                                            // i delay olana kadar artırılıyor
            ;
        cout << "Now the tone!\a" << endl;
    }
    while( --tic > 0 );
    cout << "End of the acoustic interlude!\n";
}

void calisma4_class::ch6prog2() {
    float x, y, min;
    cout << "Enter two different numbers:\n";
    if( cin >> x && cin >> y) // If both inputs are
    {                         // valid, compute
        if( x < y )           // the lesser.
            min = x;
        else
            min = y;
        cout << "\nThe smaller number is: " << min << endl;
    }
    else
        cout << "\nInvalid Input!" << endl << endl;

    int n;
    cout << "Enter a number: ";
    cin >> n;
    if( n > 0 )
        if( n%2 == 1 )
            cout << " Positive odd number "<< endl;
        else
            cout << "Positive even number"<< endl;

    cout << "Ikinci if else blogu yukleniyor..."<< endl;
    if( n > 0 )
    { if( n%2 == 1 )
        cout << " Positive odd number \n";
    }
    else
        cout << " Negative number or zero\n";

    cout << "Speed limit programi basliyor..." << endl;

    float limit, speed, toofast;
    cout << "\nSpeed limit: ";
    cin >> limit;
    cout << "\nSpeed: ";
    cin >> speed;
    if( (toofast = speed - limit ) < 10)
        cout << "You were lucky!" << endl;
    else if( toofast < 20)
        cout << "Fine payable: 40,-. Dollars" << endl;
    else if( toofast < 30)
        cout << "Fine payable: 80,-. Dollars" << endl;
    else
        cout << "Hand over your driver's license!" << endl;
}

void calisma4_class::ch6prog3() {
    float x, y;
    cout << "Type two different numbers:\n";
    if( !(cin >> x && cin >> y) ) // If the input was
    {                             // invalid.
        cout << "\nInvalid input!" << endl;
    }
    else
    {
        cout << "\nThe greater value is: "
        << (x > y ? x : y) << endl;     // If-else'nin farklı bir versiyonu
                                    // ifade (x > y) dogruysa return x, yanlissa return y.
    }
}

void calisma4_class::ch6prog4() {
    cout << "Char-Dec-Hexa program basliyor: " << endl;
    int ac = 32; // To begin with ASCII Code 32
                // without control characters.
    while(true)
    { cout << "\nCharacter Decimal Hexadecimal\n\n";
        int upper;
        for( upper =ac + 2; ac < upper && ac < 256; ++ac)
            cout << " " << (char)ac // as character
            << setw(10) << dec << ac
            << setw(10) << hex << ac << endl;
        if( upper >= 256) break;
        cout <<"\nGo on -> <return>,Stop -> <q>+<return>";
        char answer;
        cin.get(answer);
        if( answer == 'q' || answer == 'Q' )
            break;
        cin.sync(); // Clear input buffer
    }
}

void calisma4_class::ch6ex1() {
    long euro, maxEuro; // Amount in Euros
    double rate;        // Exchange rate Euro <-> $
    cout << "\n* * * TABLE OF EXCHANGE "
    << " Euro – US-$ * * *\n\n";
    cout << "\nPlease give the rate of exchange: "
    " one Euro in US-$: ";
    cin >> rate;
    cout << "\nPlease enter the maximum euro: ";
    cin >> maxEuro;
    // --- Outputs the table ---
    // Titles of columns:
    cout << '\n' << setw(12) << "Euro" << setw(20) << "US-$" << "\t\tRate: " << rate << endl;
    // Formatting US-$:
    cout << fixed << setprecision(2) << endl;
    long lower, upper, // Lower and upper limit
    step;               // Step width
    // The outer loop determines the actual
    // lower limit and the step width:

    lower = 1, step = 1;
    while (lower <= maxEuro) {
        euro = lower, upper = step*10;
        while (euro <= upper && euro <= maxEuro) {
            cout << setw(12) << euro << setw(20) << euro*rate << endl;
            euro += step;
        }
        step *= 10, lower = 2*step;
    }
}







