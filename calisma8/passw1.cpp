//
// Created by alaz on 31.07.2024.
//

#include "passw1.h"

// Passw1.cpp
// The functions getPassword() and timediff()
// to read and examine a password.
// -----------------------------------------------------
#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
using namespace std;
static string secret = "ALAZ"; // Password
static long maxcount = 3, maxtime = 80; // Limits
bool getPassword() // Enters and checks a password.
{ // Return value: true, if password is ok.
    bool ok_flag = false; // For return value
    string word; // For input
    int count = 0, time = 0;
    timediff(); // To start the stop watch
    while( ok_flag != true &&
    ++count <= maxcount) // Number of attempts
    {
        cout << "\n\nInput the password: ";
        cin.sync(); // Clear input buffer
        cin >> setw(20) >> word;
        time += timediff();
        if( time >= maxtime ) {
            // Within time limit?
            //cout << "Time limit exceeded." << endl;
            break; // No!
        }
        if( word != secret) {
            cout << "Invalid password!" << endl;
        }
        else{
            cout << "Password is correct!" << endl;
            ok_flag = true; // Give permission
            }
    }
    return ok_flag; // Result
}
long timediff() // Returns the number of
{
    // seconds after the last call.
    static long sec = 0; // Time of last call.
    long oldsec = sec; // Saves previous time.
    time( &sec); // Reads new time.
    return (sec - oldsec); // Returns the difference.
}

void changePassword(string pass) {
    secret = pass;
}
