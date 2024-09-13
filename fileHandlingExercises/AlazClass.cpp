//
// Created by alaz on 10.09.2024.
//

#include "AlazClass.h"


void AlazClass::writeFile(fstream &file, string fileName) {
    file.open(fileName, ios::out);
    string line;
    bool flag = true;
    while (flag) {
        cout << "Enter a line of text: ";
        getline(cin, line);
        if (line == "exit")
            flag = false;

        else {
            file << line << endl;
        }
    }
    file.close();
}

bool AlazClass::displayToConsole(fstream &file, string fileName) {
    file.open(fileName, ios::in);
    if (file) {
        string line;
        while (getline(file, line)) {
            cout << line << endl;
        }
    }
    else {
        file.close();
        return false;
    }
    file.close();
    return true;
}

int AlazClass::countLine(fstream& file, string fileName) {
    file.open(fileName, ios::in);
    int count = 0;
    string line;
    if (file) {
        while (getline(file, line)) {
            count++;
        }
    }
    else {
        cerr  << "Error opening file " << fileName << endl;
        file.close();
        return -1;
    }
    file.close();
    return count;
}

int AlazClass::countWord(fstream &file, string fileName) {
    file.open(fileName, ios::in);
    int count = 0;
    string word;
    if (file) {
        while (file >> word) {
            count++;
        }
    }
    else {
        cerr  << "Error opening file " << fileName << endl;
        file.close();
        return -1;
    }
    file.close();
    return count;
}

void AlazClass::copyFile(fstream &file1, fstream &file2, string fileName1, string fileName2) {
    file1.open(fileName1, ios::in);
    file2.open(fileName2, ios::out);
    string line;
    while (getline(file1, line)) {
        file2 << line << endl;
    }
    file2.close();
    file1.close();
}

void AlazClass::find_and_replace_word(fstream &file, string fileName, string word, string word2)
{
    file.open(fileName, ios::in);
    vector<string> strVec;
    string line;
    int pos;
    bool flag = true;
    while (getline(file, line)) {
        pos = line.find(word);
        if (pos != string::npos && flag) {
            line.replace(pos, word.length(), word2);
            flag = false;
        }
        strVec.push_back(line);
    }
    file.close();

    file.open(fileName, ios::out | ios::trunc);
    for (int i = 0; i < strVec.size(); i++) {
        file << strVec[i] << endl;
    }
    file.close();
}

void AlazClass::append_to_File(fstream &file, string fileName, string line) {
    file.open(fileName, ios::out | ios::app);
    file << line << endl;
    file.close();
}

bool AlazClass::isSorted(const vector<string> &lines) {
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

void AlazClass::sortLines(fstream &file, string fileName) {
    vector <string> strVec;
    string line, tempLine;
    file.open(fileName, ios::in);
    while (getline(file,line)) {
        strVec.push_back(line);
    }
    file.close();

    while (!isSorted(strVec)) {
        for (int i = 0; i < strVec.size() - 1; i++) {
            if (strVec[i].compare(strVec[i + 1]) > 0) {
                tempLine = strVec[i];
                strVec[i] = strVec[i + 1];
                strVec[i + 1] = tempLine;
            }
        }
    }

    file.open(fileName, ios::out);
    for (int i = 0; i < strVec.size(); i++) {
        file << strVec[i] << endl;
    }
    file.close();
}

void AlazClass::mergeFiles(fstream &file1, fstream &file2, string fileName1, string fileName2) {
    vector <string> strVec;
    file1.open(fileName1, ios::in);
    file2.open(fileName2, ios::in);
    string line;

    while (getline(file1, line)) {
        strVec.push_back(line);
    }
    file1.close();
    while (getline(file2, line)) {
        strVec.push_back(line);
    }
    file2.close();

    fstream newFile;
    newFile.open("mergedFile.txt", ios::out);
    for (int i = 0; i < strVec.size(); i++) {
        newFile << strVec[i] << endl;
    }
    newFile.close();
}


void AlazClass::findWord(fstream &file, string fileName, string word)
{
    file.open(fileName, ios::in);
    vector<int> indexVec;
    int index = 0;
    string line;
    int pos;
    while (getline(file, line)) {
        index++;
        pos = line.find(word);
        if (pos != string::npos) {
            indexVec.push_back(index);
        }
    }
    file.close();

    for (int i = 0; i < indexVec.size(); i++) {
        cout << "The word \"" << word << "\" has found in line " << indexVec[i] << "." << endl;
    }
}

int AlazClass::avgNum(fstream &file, string fileName) {
    
}


