// Created by Ismail Alaz Arslan on 25.10.2024.

#include "stack.h"

// Constructor for Board class to initialize an empty board of given size
Board::Board(int size) {
    size_board = size;
    myBoard = new int* [size_board];  // Allocate memory for the board's rows

    // Initialize each cell to 0, indicating an empty position
    for (int i = 0; i < size_board; i++) {
        myBoard[i] = new int[size_board];
        for (int j = 0; j < size_board; j++) {
            myBoard[i][j] = 0;
        }
    }
}

// Destructor for Board class to deallocate the memory used by the board
Board::~Board() {
    for (int i = 0; i < size_board; i++) {
        delete[] myBoard[i]; // Delete each row
    }
    delete[] myBoard;  // Delete the row pointers
    myBoard = nullptr; // Set pointer to null for safety
}

// Checks if a specific cell on the board is safe (0 means safe)
bool Board::isSafe(int r, int c) const {
    return myBoard[r][c] == 0;
}

// Updates the board by adjusting rows, columns, and diagonals based on the specified value (-1 or 1)
// -1 means backtracking
// A number greater or equal to one in the board means that cell is not safe.
bool Board::BoardUpdate(int row, int col, int val) {
    updateRow(row, val);                // Update the entire row
    updateCol(col, val);                // Update the entire column
    updateDiagonals(row, col, val); // Update both diagonals
}

// Helper function to update the main and reverse diagonals of a cell
void Board::updateDiagonals(int r, int c, int val) {

    bool mainFlag = true, rev_flag = false; // Flags to control traversal
    int temp_r = r, temp_c = c;             // Store initial positions to reset during loops

    // Loop to update the main diagonal (bottom-left to top-right and reverse)
    while (mainFlag) {
        if (rev_flag == false) { // Forward traversal from cell (r, c) to top-right
            if (c < size_board && r > -1) {
                myBoard[r][c] += val;
                r--; c++;
            }
            else { // Switch to reverse direction if out of bounds
                rev_flag = true;
                r = temp_r, c = temp_c;
            }
        }
        else { // Reverse traversal from cell (r, c) to bottom-left
            if (r < size_board && c > -1) {
                myBoard[r][c] += val;
                r++, c--;
            }
            else {
                r = temp_r, c= temp_c;
                mainFlag = false; // End loop when complete
            }
        }
    }
    mainFlag = true, rev_flag = false; // Resetting the flags

    // Loop to update the reverse diagonal (top-left to bottom-right and reverse)
    while (mainFlag) {
        if (rev_flag == false) { // Forward traversal from cell (r, c) to top-left
            if (c > -1 && r > -1) {
                myBoard[r][c] += val;
                r--; c--;
            }
            else { // Switch to reverse direction if out of bounds
                rev_flag = true;
                r = temp_r, c = temp_c;
            }
        }
        else { // Reverse traversal from cell (r, c) to bottom-right
            if (r < size_board && c < size_board) {
                myBoard[r][c] += val;
                r++, c++;
            }
            else {
                r = temp_r, c= temp_r;
                mainFlag = false; // End loop when complete
            }
        }
    }
}

// Updates all cells in a given row by adding a specified value (-1 or 1)
void Board::updateRow(int row, int val) {
    for (int i = 0; i < size_board; i++) {
        myBoard[row][i] += val;
    }
}

// Updates all cells in a given column by adding a specified value (-1 or 1)
void Board::updateCol(int col, int val) {
    for (int i = 0; i < size_board; i++) {
        myBoard[i][col] += val;
    }
}

// Returns the size of the board
int Board::getSize() const {
    return size_board;
}

