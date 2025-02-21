#include <iostream>
#include <vector>
#include <fstream>
#include "stack.h"
using namespace std;

// Function to solve the N-Queens problem using a custom stack and board
void solve(stack<int> &_stack, Board &_board, vector<int> &queenPosVec, int queenNum) {
    ofstream oFile(to_string(queenNum)+"_solutions.txt"); // Create output file for solutions

    int row = 0, col = 0, solutionCount = 0; // Initialize row, column, and solution counter
    string temp_str, firstLine; // Strings to store each solution and header line
    _stack.push(row, col);      // Start by pushing the initial position (0,0) onto the stack

    // Main loop that continues while there are positions to explore
    while (!_stack.isEmpty()) {

        // Try placing a queen in each column of the current row
        bool loopFlag = true;
        while (loopFlag && col < _board.getSize()) {
            if (_board.isSafe(row, col)) { // Check if the position (row, col) is safe
                _board.BoardUpdate(row, col, 1); // Mark the board with a queen, update the cells queen can attack
                _stack.push(row, col); // Push the position onto the stack
                queenPosVec.push_back(col); // Record the column position of the queen
                row++; // Move to the next row

                // If all queens have been placed, save the solution
                if ( queenPosVec.size() == _board.getSize()) {
                    loopFlag = false; // Exit loop to backtrack
                    solutionCount++;  // Increment solution counter
                    temp_str += "Solution " + to_string(solutionCount) + ": [";

                    // Build the solution string with queen positions in each row
                    for (int i = 0; i < queenPosVec.size(); i++) {
                        temp_str += to_string(queenPosVec[i]) + ", ";
                    }

                    // Format the solution string to replace trailing comma and space character
                    temp_str[temp_str.length() - 2] = ']';  // changes the last ',' to ']'
                    temp_str[temp_str.length() - 1] = '\n'; // changes the last character to end line('\n') character
                }
                col = 0; // Reset column for next row
            }
            else {
                col++; // Move to the next column if the position is not safe
            }
        }

        // If no safe position is found in the current row, backtrack to the previous row
        row = _stack.topRow();               // Retrieve the row of the last placed queen
        col = _stack.topCol();               // Retrieve the column of the last placed queen
        _board.BoardUpdate(row, col, -1); // Remove the queen from the board
        _stack.pop();                        // Pop the last queen's position from the stack
        queenPosVec.pop_back();              // Remove the last column position from queenPosVec
        col++;                               // Move to the next column in the previous row
    }

    // Write the total number of solutions and all solutions to the file
    oFile << "Total solutions for N=" << queenNum << ": " << solutionCount << endl << endl;
    oFile << temp_str;
    oFile.close(); // Close the output file

}

int main() {
    int numOfQuuens;
    cout << "Enter the value of N for the N-Queens problem: ";
    cin >> numOfQuuens; // Get the number of queens (board size) from the user

    // Check for invalid input
    if (numOfQuuens <= 0) {
        cout << "Invalid input. Please enter a positive integer" << endl;
        return 0; // Exit the program if input is invalid
    }

    stack<int> stk;                                // Create a stack to store queen positions
    Board _board(numOfQuuens);                     // Create a board of the specified size
    vector<int> columns_of_queens;                 // Vector to store column positions of queens in each row
    solve(stk, _board, columns_of_queens, numOfQuuens); // Call solve function

    return 0;
}
