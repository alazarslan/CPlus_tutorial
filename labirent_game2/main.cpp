#include <iostream>
#include <vector>
#include <fstream>
#include "labirent.h"
using namespace std;
int main() {
    ifstream file;
    string filename;
    cout << "Enter the file name:" << endl;
    //cin >> filename;

    string line;
    int row = 0, col = 0;
    //file.open(file_name);
    file.open("labirent.txt");
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
    file.clear();  // Clears any EOF or error flags
    file.seekg(0); // Resets the file stream to the beginning

    //labirent* labirent_oyunu = new labirent(row, col);
    //labirent_oyunu->initialize_matrix(file);
    //labirent_oyunu->game_func(labirent_oyunu->getStartRow(), labirent_oyunu->getStartCol());

    labirent lab_game(row, col);
    lab_game.initialize_matrix(file);
    int startRow = lab_game.getStartRow(), startCol = lab_game.getStartCol();
    lab_game.deneme_func(startRow, startCol);
    //lab_game.game_func(startRow, startCol);
    cout << endl << endl;
    lab_game.printMatrix();
    cout << endl << endl;
    //lab_game.printVectorMatrix();

    abc = new int[5];
    return 0;
}
