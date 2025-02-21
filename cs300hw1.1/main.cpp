#include <iostream>
#include <fstream>
#include <vector>
#include "stack.h"
using namespace std;
// Function to update the safe matrix when placing or removing a queen
void updateSafeMatrix(std::vector<std::vector<int>>& safeMatrix, int row, int col, int N, int delta) {
    // Update the row and column
    for (int i = 0; i < N; ++i) {
        safeMatrix[row][i] += delta; // row attack
        safeMatrix[i][col] += delta; // column attack
    }

    // Update diagonals
    for (int i = 0; i < N; ++i) {
        int diag1 = col - (row - i); // Top-left to bottom-right diagonal
        int diag2 = col + (row - i); // Top-right to bottom-left diagonal
        if (diag1 >= 0 && diag1 < N) {
            safeMatrix[i][diag1] += delta;
        }
        if (diag2 >= 0 && diag2 < N) {
            safeMatrix[i][diag2] += delta;
        }
    }

    // Set the current position
    safeMatrix[row][col] -= delta; // Don't count the queen herself
}

// Function to check if the current position is safe using the safe matrix
bool isSafe(const std::vector<std::vector<int>>& safeMatrix, int row, int col) {
    return safeMatrix[row][col] == 0;
}

void saveSolutions(const std::vector<std::vector<int>>& solutions, int N) {
    std::ofstream outFile(std::to_string(N) + "_solutions.txt");

    outFile << "Total solutions for N=" << N << ": " << solutions.size() << std::endl;
    for (size_t i = 0; i < solutions.size(); ++i) {
        outFile << "Solution " << i + 1 << ": [";
        for (size_t j = 0; j < solutions[i].size(); ++j) {
            outFile << solutions[i][j];
            if (j < solutions[i].size() - 1) {
                outFile << ", ";
            }
        }
        outFile << "]" << std::endl;
    }

    outFile.close();
}

void solveNQueens(int N) {
    Stack<std::pair<int, int>> stack; // Stack to hold row and column states
    std::vector<int> queens(N, -1);   // Holds the column positions for queens
    std::vector<std::vector<int>> solutions;
    std::vector<std::vector<int>> safeMatrix(N, std::vector<int>(N, 0)); // Safe matrix initialization
    int row = 0, col = 0;

    while (true) {
        while (row < N && col < N) {
            if (isSafe(safeMatrix, row, col)) {
                stack.push({row, col});
                queens[row] = col;
                updateSafeMatrix(safeMatrix, row, col, N, 1); // Mark attacked positions
                ++row;
                col = 0;
            } else {
                ++col;
            }
        }

        if (row == N) {
            // Found a valid solution
            solutions.push_back(queens);
        }

        // Backtrack
        if (stack.isEmpty()) break; // If stack is empty, we've explored all possibilities

        auto [prevRow, prevCol] = stack.top();
        stack.pop();
        updateSafeMatrix(safeMatrix, prevRow, prevCol, N, -1); // Unmark attacked positions
        row = prevRow;
        col = prevCol + 1;
        queens[row] = -1; // Reset the row
    }   

    saveSolutions(solutions, N);
}

int main() {
    int N;

    std::cout << "Enter the value of N for the N-Queens problem: ";
    std::cin >> N;

    if (N <= 0) {
        std::cout << "Invalid input. Please enter a positive integer." << std::endl;
        return 1;
    }

    solveNQueens(N);

    std::cout << "Solutions have been saved to '" << N << "_solutions.txt'" << std::endl;

    int n = 2;
    int m = 2;
    vector<vector<int>> vec( n , vector<int> (m, 0));

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << vec[i][j] << " ";
        }
        cout<< endl;
    }
    return 0;
}
