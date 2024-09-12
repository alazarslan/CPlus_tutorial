//
// Created by alaz on 10.09.2024.
//

#ifndef ALAZCLASS_H
#define ALAZCLASS_H

#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

class AlazClass {
public:
    /*
     * @brief: dosyanin icine kullanici tarafindan verilen input lineleri yazar
    */
    void writeFile(fstream& file, string fileName);

    /*
    * @brief: file icindeki verileri konsola yazdirir
    */
    bool displayToConsole(fstream& file, string fileName);

    /*
    * @brief: file'daki line sayisini sayar
    */
    int countLine(fstream& file, string fileName);

    /*
    * @brief: file'daki kelime sayisini sayar
    */
    int countWord(fstream& file, string fileName);

    /*
    * @brief: bir file'daki bilgileri baska bir fileye kopyalar
    */
    void copyFile(fstream& file1, fstream& file2, string fileName1, string fileName2);

    /*
    * @brief: file icinde istenen kelimeyi istenen bir kelimeyle degistirir
    */
    void find_and_replace_word(fstream& file, string fileName, string word, string word2);

    /*
    * @brief: girilen verileri file'nin sonuna ekler
    */
    void append_to_File(fstream& file, string fileName, string line);

    /*
    * @brief - @isSorted: vector alfabetik olarak kucukten buyuge sirali mi kontrol eder
    * @brief - @sortLines: filenin linelerini alfabetik olarak kucukten buyuge siralar
    */
    bool isSorted(const vector<string>& lines);
    void sortLines(fstream& file, string fileName);

    /*
    * @brief: girilen 2 filenin verilerini birlestirip yeni bir filenin icine koyar.
    */
    void mergeFiles(fstream& file1, fstream& file2, string fileName1, string fileName2);

    void findWord(fstream& file, string fileName, string word);

    int avgNum(fstream& file, string fileName);

};



#endif //ALAZCLASS_H
