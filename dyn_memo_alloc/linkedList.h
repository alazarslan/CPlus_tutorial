//
// Created by alaz on 02.10.2024.
//

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
using namespace std;

struct Node {
    string name;
    int id;
    Node* next;
    Node* prev;
    Node();
    Node(string name, int id, Node* next = nullptr, Node* prev = nullptr);
};

class linkedList {
private:
    Node* head;
    Node* tail;
public:
    /*
     * @brief: Default constructor, boş bir linked list oluşturur.
    */
    linkedList();

    /*
     * @brief: Destructor, linked listi tamamen yok eder.
    */
    ~linkedList();

    /*
     * @brief: Linked listin boş mu dolu mu olduğunu kontrol etmek için bir fonksiyon
    */
    bool isEmpty() const;

    /*
     * @brief: Yeni bir node oluşturur ve bu nodeyi
     *         point eden bir pointer returnler
    */
    Node* createNode(string name, int id, Node* next = nullptr, Node* prev = nullptr);


    // @brief: Linked listin başına yeni bir node ekler.
    void insertToBegin(string name, int id);

    // @brief: Linked listin başına yeni bir node ekler.
    void insertToEnd(string name, int id);

    void insertByID(string name, int id);
};



#endif //LINKEDLIST_H
