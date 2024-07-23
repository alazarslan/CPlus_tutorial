//
// Created by alaz on 22.07.2024.
//
#include <iostream>
#include <string>
#include "calisma6_class.h"
using namespace std;
// <<>>

void calisma6_class::ch9prog1() {
    string prompt("Enter a line of text: ");
    string line(50, '*');                   // string with 50 '*'
    string text;
    cout << line << endl << prompt << endl;
    getline( cin, text);                   // reads a line of string
    cout << line << endl << "Your text is " << text.size()
    << " characters long!" << endl;

    string copy(text);
    string start(text,0,10);
    cout << "Your text:\n" << copy << endl;
    text = "1234567890";
    cout << line << endl << "The first 10 characters:\n" << start << endl
    << text << endl;
}

void calisma6_class::ch9prog2() {
    string prompt("Please enter some text!\n");
    string line(50, '-');

    prompt+="Terminate the input with an empty line.\n ";
    cout << line << '\n' << prompt << line << endl;
    string text, line_p;
    bool flag = true;
    while (flag) {
        getline(cin, line_p);     // reads a line of text
        if (line_p.length() == 0) {     // if the line is empty
            flag = false;            // Yes ->set flag to false to end the loop
        }
        else {
            text = line_p + '\n' + text; // inserts a new line at the beginning
        }
    }

    cout << line << '\n' << "Your lines of text in reverse order:"
    << '\n' << line << endl;
    cout << text << endl;
}

void calisma6_class::ch9codes1() {
    string sum, s1("sun"), s2("flower"), s3("seed");
    sum = s1 + s2;
    string s("Good morning ");
    cout << sum << endl << s1 + s2 + s3 << endl << s + "mister X" + '!' << endl;
}

void calisma6_class::ch9prog3() {
    string prompt = "Please enter two lines of text!\n", line(30, '-');
    string line1, line2, key = "y";
    while (key == "y" || key == "Y") {
        cout << line << '\n' << prompt << line << endl;
        getline( cin, line1); // Read the first
        getline( cin, line2); // and second line

        if( line1 == line2)
            cout << " Both lines are the same!" << endl;
        else {
            cout << "The smaller line is:\n\t";
            cout << (line1 < line2 ? line1 : line2) << endl;
            int len1 = line1.length(), len2 = line2.length();

            if( len1 == len2)
                cout << "Both lines have the same length! \n";
            else {
                cout << "The shorter line is:\n\t";
                cout << (len1 < len2 ? line1 : line2) << endl;
            }
        }
        cout << "\nRepeat? (y/n) ";
        do
            getline( cin, key);
        while( key != "y" && key != "Y" && key != "n" && key != "N");
    }
}

void calisma6_class::ch9codes2() {
    string s1("Miss Summer");
    s1.insert(5, "Ashley "); // Insert at position: 5
    cout << s1 << endl;
    string s("The summer-time");
    s.erase(4,7); // Start position: 4, Quantity: 7
    cout << s << endl;
    string s3("There they go again!"), s4("Bob and Bill");
    s3.replace(6, 4, s4);
    cout << s3 << endl;
    string s5("Here comes Mike!"), s6("my love?");
    s5.replace(11, 4, s6, 0, 7);
    cout << s5 << endl;
}

void calisma6_class::ch9ex1() {
    string s1 = "As time by ...", s2 = "goes";
    s1.insert(8, s2);
    cout << s1 << endl;
    s1.erase(14,4);
    cout << s1 << endl;
    s1.replace(3,4,"Bill");
    cout << s1 << endl;
}

void calisma6_class::ch9ex2() {
    string s, f_half, l_half, key;
    bool flag = true;
    while (flag) {
        cout << "Enter a word: ";
        cin >> s;
        int len = s.length();
        if (len % 2 == 1) {
            for (int i = 0; i < len / 2; i++)
                f_half += s[i];

            for (int j = len - 1; j > len / 2; j--)
                l_half += s[j];

            if (f_half == l_half) {
                cout << "Iword " << s << " is a palindrome." << endl;
            }
            else {
                cout << "Iword " << s << " is not a palindrome" << endl;
            }
        }
        else {
            for (int i = 0; i < len / 2; i++)
                f_half += s[i];

            for (int j = len - 1; j > len / 2 - 1; j--)
                l_half += s[j];
            if (f_half == l_half) {
                cout << "Eword " << s << " is a palindrome." << endl;
            }
            else {
                cout << "Eword " << s << " is not a palindrome" << endl;
            }
        }
        cout << "Repeat the game? y/n" << endl;
        cin >> key;
        if (key == "n" || key == "N") {
            flag = false;
        }
    }
}

void calisma6_class::ch9prog4() {
    string header(" **** Counts words ****\n"),
    prompt("Enter a text and terminate"
    " with a period and return:"),
    line( 60, '-'),
    text; // Empty string
    cout << header << endl << prompt << endl
    << line << endl;
    getline( cin, text, '.'); // Reads a text up to
    // the first '.'
    // Counts words and white space characters
    int i, // Index
    nSpace = 0, // Number of white spaces
    nWord = 0; // Number of words
    bool fSpace = true; // Flag for white space
    for( i = 0; i < text.length(); ++i)
    {
        if( isspace( text[i]) ) // white space?
        {
            ++nSpace; fSpace = true;
        }
        else if( fSpace) // At the beginning of a word?
        {
            ++nWord; fSpace = false;
        }
    }
    cout << line // Outputs the result.
    << "\nYour text contains (without periods)"
    << "\n characters: " << text.length()
    << "\n words: " << nWord
    << "\n white spaces: " << nSpace
    << endl;
}


