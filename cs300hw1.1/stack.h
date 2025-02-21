#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <vector>

template <typename T>
class Stack {
private:
        std::vector<T> stack;

public:
    Stack() = default;

    // Push element to the top of the stack
    void push(const T& value) {
        stack.push_back(value);
    }

    // Remove and return the top element of the stack
    void pop() {
        if (!stack.empty()) {
            stack.pop_back();
        }
    }

    // Access the top element of the stack
    T& top() {
        return stack.back();
    }

    // Check if the stack is empty
    bool isEmpty() const {
        return stack.empty();
    }

    // Return the size of the stack
    int size() const {
        return stack.size();
    }
};

#endif
