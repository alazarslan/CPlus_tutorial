#include <iostream>
#include "YeniClass.h"
#include "Account.h"
#include "Demo.h"
#include "Article.h"
using namespace std;
Demo globalObject("the global object",0);
// <<>>

int main() {
    YeniClass *myVar = new YeniClass;
    //myVar->arrayListFunc();
    //myVar->sampleProg();
    delete myVar;

    /*
    Account giro("Cheers, Mary", 1234567, -1200.99 ),
    save("Lucky, Luke");
    //Account depot; // Error: no default constructor
    // defined.
    giro.display(); // To output
    save.display();
    Account temp("Funny, Susy", 7777777, 1000000.0);
    save = temp; // ok: Assignment of
    // objects possible.
    save.display();
    // Or by the presently available method init():
    save.init("Lucky, Luke", 7654321, 1000000.0);
    save.display();
    */

    /*
    cout << "The first statement in main()." << endl;
    Demo firstLocalObject("the 1. local object",1);
    {
        Demo secLocalObject("the 2. local object",2);
        static Demo staticObject("the static object",3);
        cout << "\nLast statement within the inner block"
        << endl;
    }
    cout << "Last statement in main()." << endl;

    const Account a("alaz");
    cout << "merhaba\n" <<a.getName() << endl;
    */

    Article localArticle(1, "alaz article", 15.99);
    cout << "-------------------------\nbu local article:";
    localArticle.print();
    Article yeniArticle(localArticle);
    cout << "-------------------------\nbu yeni article:";
    return 0;
}
