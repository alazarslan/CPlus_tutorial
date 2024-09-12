#include <cstring>
#include <iostream>
#include <fstream>
#include "Account.h"
using namespace std;
char header[] = "* * * P I Z Z A P R O N T O * * *\n\n";

// Record structure:
struct Pizza { char name[32]; float price; };
const int MAXCNT = 10;

Pizza pizzaMenu[MAXCNT] =
{
    { "Pepperoni", 9.90F },
    { "White Pizza", 15.90F },
    { "Ham Pizza", 12.50F },
    { "Calzone", 14.90F }
};

int cnt = 4;
char pizzaFile[256] = "pizza.fle";
void addPizzaRec(const char *pizzaName, float pizzaPrice, Pizza menu[]) {
    for (int i = 0; i < MAXCNT; i++) {
        if (menu[i].price == 0.0 && std::strlen(menu[i].name) ==0) {
            strcpy(menu[i].name, pizzaName);
            menu[i].price = pizzaPrice;
            break;
        }
    }
}

// <<>>

int main() {
    cout << header << endl; // To write records.

    // To write data into the file:
    int exitCode = 0;
    ofstream outFile( pizzaFile, ios::out|ios::binary );
    if( !outFile)
    {
        cerr << "Error opening the file!" << endl;
        exitCode = 1;
    }
    else
    {
        for( int i = 0; i < cnt; ++i)
            if( !outFile.write( (char*)&pizzaMenu[i],
            sizeof(Pizza)) )
            { cerr << "Error writing!" << endl;
                exitCode = 2;
            }
    }
    if( exitCode == 0)
        cout << "\nData has been added to file "
        << pizzaFile << "\n" << endl;
    addPizzaRec("enes",3.00F, pizzaMenu);
    for (int i = 0; i < 10; i++) {
        if (pizzaMenu[i].price != 0)
            cout << pizzaMenu[i].name << "\t\t\t" << pizzaMenu[i].price << endl;
        else
            cout << "pizzaMenu[i].name" << "\t\t\t" << pizzaMenu[i].price << endl;
    }

    unsigned short x = 8675;
    char buffer[5] = "alaz";
    char ch = 'a';
    cout << buffer << endl;
    fstream outfile;
    outfile.open("file.dat", ios::out | ios::binary);
    //outfile << x;
    outfile.write(reinterpret_cast<char*>(&x),sizeof(unsigned short));
    outfile.close();

    outfile.open("file.dat", ios::in | ios::binary);
    if(outfile) {
        unsigned short y = 0;
        outfile.read(reinterpret_cast<char*>(&y),sizeof(unsigned short));
        outfile.close();
        cout << y << endl;
    }
    else
        cout << "ERROR!\n";

    Account accarr[5];
    Account accarr2[5];
    fstream accFile;

    accarr->accArr(5);
    accFile.open("account.dat", ios::out | ios::binary);
    for ( int i = 0; i < 5 ; i++)
        accarr[i].write(accFile);
    accFile.close();
    accFile.open("account.dat", ios::in | ios::binary);
    for ( int i = 0; i < 5; i++)
        accarr2[i].read(accFile);
    accFile.close();

    return exitCode;
}
