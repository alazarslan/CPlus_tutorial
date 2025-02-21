//
// Created by alaz on 10.01.2025.
//

#ifndef LABIRENT_H
#define LABIRENT_H

#include <fstream>
#include <vector>
using namespace std;

class labirent {
private:
    char **labirent_matrix;
    int start_row, start_col;
    int end_row, end_col;
    int kombinasyon_count = 0;
    vector<char**> results;
public:
    labirent(int row_size, int col_size): start_row(-1), start_col(-1), end_row(-1), end_col(-1) {
        // double matrixi olustur.
        labirent_matrix = new char* [row_size];
        for (int i = 0; i < row_size; i++) {
            labirent_matrix[i] = new char[col_size];
        }
    }
    void initialize_matrix(ifstream &file);
    void game_func(int row, int col);
    void save_to_results();
    int getStartRow();
    int getStartCol();
};



#endif //LABIRENT_H
