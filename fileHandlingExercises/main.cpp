#include <iostream>
#include <fstream>

#include "AlazClass.h"
// <<>>
using namespace std;

bool sorted(const vector<string> &lines) {
    int res;
    string line1, line2;
    for (int i = 0; i < lines.size() - 1; i++) {
        line1 = lines[i];
        line2 = lines[i + 1];
        res = line1.compare(line2);
        if (res > 0) { // i. line j. lineden alfabetik olarak daha buyuk degilse
            return false;
        }
    }
    return true;
}

int main() {
    AlazClass *alazObj;
    //vector <string> lines = {"demir","alaz","baran","cem"};
    //cout << sorted(lines) << endl;
    fstream file;
    fstream copyFile;
    string fileName = "newFile.txt";
    string copyFileName = "copyFile.txt";
    alazObj->writeFile(file, fileName);
    if (alazObj->displayToConsole(file, fileName) == false) {
        cerr << "Unable to open the file!!" << endl;
        return 0;
    }

    cout << alazObj->countLine(file, fileName) << endl;

    cout << alazObj->countWord(file, fileName) << endl;

    alazObj->copyFile(file, copyFile, fileName, copyFileName);

    //alazObj->find_and_replace_word(copyFile, copyFileName, "kovalera", "alaz");

    alazObj->sortLines(copyFile, copyFileName);

    alazObj->displayToConsole(copyFile, copyFileName);

    alazObj->mergeFiles(file, copyFile, fileName, copyFileName);

    alazObj->findWord(file, fileName, "alaz");
    return 0;
}
