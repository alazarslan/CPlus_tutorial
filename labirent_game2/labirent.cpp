//
// Created by alaz on 10.01.2025.
//

#include "labirent.h"

#include <iostream>

void labirent::deneme_func(int row, int col) {
    if (row == rowSize || row == -1 || col == -1 || col == colSize) {
        // row veya col sinira geldi demek, hicbir sey yapma
    }
    else if (labirent_matrix[row][col] == '*') { // pozisyon yildizsa
        kombinasyon_count++;
        // do nothing, recursion goes back
    }
    else if (labirent_matrix[row][col] == '-') { // pozisyon tireyse
        // do nothing, recursion goes back
    }
    else {
        labirent_matrix[row][col] = '-';
        if ( (row == end_row) && (col == end_col) ) {
            //save_to_results();
            labirent_matrix[row][col] = ' ';
            // fonksiyon bitti, recursion geri donucek
        }
        else {
            deneme_func(row, col+1); // sağa git
            deneme_func(row, col-1); // sola git
            deneme_func(row-1, col); // alta git
            deneme_func(row+1, col); // uste git
            labirent_matrix[row][col] = ' ';
        }
    }

}

void labirent::initialize_matrix(ifstream &file) {
    /*
    //file.open(file_name);
    file.open("basit_labirent.txt");
    if (!file.is_open()) {
        //cerr << "Error opening file " << file_name << endl;
        cerr << "Error opening file " << endl;
    }

    // double matrix olusturmak icin row ve col'u al.
    while (getline(file, line)) {
        if (col == 0) {
            col = line.length();
        }
        row++;
    }
    file.close();

    // double matrixi olustur.
    labirent_matrix = new char* [row];
    for (int i = 0; i < row; i++) {
        labirent_matrix[i] = new char[col];
    } */

    // dosyayi tekrar ac ve bu sefer edgeleri belirle ve matrixin icini doldur.
    file.open("labirent.txt");
    string line;
    int row = 0, col = 0;
    while (getline(file, line)) {
        for (int i = 0; i < line.size(); i++) { // i = col aslinda
            if (line[i] == '^') {
                end_row = row;
                end_col = i;
            }
            else if (line[i] == '!') {
                start_row = row;
                start_col = i;
            }
            labirent_matrix[row][i] = line[i];
            cout << labirent_matrix[row][i]; // output ile matrixi gostermek icin, debug
        }
        cout << endl;
        // gerekirse modifiye yap: eger yeni line yildizla baslamiyorsa while'ye break atalim.
        row++;
    }
    file.close();
}

void labirent::game_func(int row, int col) {
    if (labirent_matrix[row][col] == '*') { // pozisyon yildizsa
        kombinasyon_count++;
        // do nothing, recursion goes back
    }
    else if (labirent_matrix[row][col] == '-') { // pozisyon tireyse
        // do nothing, recursion goes back
    }
    else {
        labirent_matrix[row][col] = '-';
        if ( (row == end_row) && (col == end_col) ) {
            //save_to_results();
            labirent_matrix[row][col] = ' ';
            // fonksiyon bitti, recursion geri donucek
        }
        else { // cikis bulunmadiysa
            game_func(row, col+1); // sağa git
            game_func(row, col-1); // sola git
            game_func(row+1, col); // uste git
            game_func(row-1, col); // alta git
            labirent_matrix[row][col] = ' ';
            // fonksiyon bitti, recursion geri donucek
        }
    }
    // aha da labirent en basa dondu, oyun biter
}


void labirent::save_to_results() {
    char **tempMatrix;
    tempMatrix = new char* [rowSize];
    for (int i = 0; i < rowSize; i++) {
        tempMatrix[i] = new char[colSize];
    }
    copyMatrix(tempMatrix);
    results.push_back(tempMatrix);
}


int labirent::getStartRow() {
    return start_row;
}

int labirent::getStartCol() {
    return start_col;
}

void labirent::printMatrix() {
    for (int i = 0; i < rowSize; i++) {
        for (int j = 0; j < colSize; j++) {
            cout << labirent_matrix[i][j];
        }
        cout << endl;
    }
}

void labirent::printVectorMatrix() {
    char** myMatrix = results[0];
    for (int i = 0; i < rowSize; i++) {
        for (int j = 0; j < colSize; j++) {
            cout << myMatrix[i][j];
        }
        cout << endl;
    }
}

void labirent::copyMatrix(char **matrix) {
    for (int i = 0; i < rowSize; i++) {
        for (int j = 0; j < colSize; j++) {
            matrix[i][j] = labirent_matrix[i][j];
        }
    }
}



