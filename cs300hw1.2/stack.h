// Created by Ismail Alaz Arslan on 25.10.2024.

#ifndef STACK_H
#define STACK_H
#include <iostream>
using namespace std;

// Template class for a stack that holds two values (row and column information) in each node
template <typename T>
class stack {
public:
    stack();  // Constructor to initialize the stack
    ~stack(); // Destructor to deallocate all nodes in the stack

    bool isEmpty();   // Checks if the stack is empty
    bool makeEmpty(); // Clears the stack

    void pop();                            // Removes the top element from the stack
    void push(const T& row, const T& col); // Adds a new element (row, col) to the stack
    T topRow() const;                      // Returns the row information of the top element
    T topCol() const;                      // Returns the column information of the top element

private:
    // A struct representing a single node in the stack
    struct Node {
        T row_info; // Holds row information for a single node
        T col_info; // Holds column information for a single node
        Node* next; // Pointer to the next node in the stack

        // Constructor to initialize a node with row, column, and next node
        Node( const T& r, const T& c, Node* p = nullptr)
            : row_info(r), col_info(c), next(p) {}
    };
    Node *topOfStack; // Pointer to the top node in the stack
};

// Constructor initializes the stack as empty
template<typename T>
stack<T>::stack() {
    topOfStack = nullptr;
}

// Destructor to clear the stack
template<typename T>
stack<T>::~stack() {
    while (topOfStack != nullptr) {
        pop();
    }
}

// Checks if the stack is empty by checking if topOfStack is nullptr
template<typename T>
bool stack<T>::isEmpty() {
    return topOfStack == nullptr;
}

// Removes the top node from the stack, outputting an error if stack is empty
template<typename T>
void stack<T>::pop() {
    if ( isEmpty() ) {
        cerr << "You're trying to pop from an empty stack!" << endl;
    }
    Node* temp = topOfStack;       // Temporary pointer to the current top
    topOfStack = topOfStack->next; // Move topOfStack to the next node
    delete temp;                   // Deallocate the removed node
}

// Adds a new node with row and column data to the top of the stack
template<typename T>
void stack<T>::push(const T &row, const T &col) {
    topOfStack = new Node(row, col, topOfStack);
}

// Returns the row information of the top element
template<typename T>
T stack<T>::topRow() const {
    return topOfStack->row_info;
}

// Returns the column information of the top element
template<typename T>
T stack<T>::topCol() const {
    return topOfStack->col_info;
}

// Class representing a board used for tracking positions
class Board {
private:
    int **myBoard;  // 2D array representing the board
    int size_board; // Size of the board

    void updateDiagonals(int row, int col, int val); // Helper to update board diagonals
    void updateRow(int row, int val);                // Helper to update a row on the board
    void updateCol(int col, int val);                // Helper to update a column on the board
public:
    Board(int size);    // Constructor to initialize a board of given size
    ~Board();           // Destructor to free allocated memory

    bool isSafe(int row, int col) const;         // Checks if a position is safe to place a queen
    bool BoardUpdate(int row, int col, int val); // Updates the board with a given value
    int getSize() const;                         // Returns the size of the board
};

#endif //STACK_H
