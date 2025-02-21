//
// Created by alaz on 02.10.2024.
//

#include "linkedList.h"

Node::Node() {
    name = "Default name";
    id = 0;
    next = nullptr;
    prev = nullptr;
}

Node::Node(string nodeName, int nodeID, Node* nodeNext, Node* nodePrev) {
    name = nodeName;
    id = nodeID;
    next = nodeNext;
    prev = nodePrev;
}

linkedList::linkedList() {
    head = nullptr;
    tail = nullptr;
}

linkedList::~linkedList() {
    if (!isEmpty()) {
        Node* temp = nullptr;
        Node* currPtr = head;
        while (currPtr->next != nullptr) {
            temp = currPtr;                 //
            currPtr = currPtr->next;        // head'in point ettiği nodeyi silip
            head = currPtr;                 // head'i bir sonraki node yap
            delete temp;                    //
            currPtr->prev = nullptr;
        }
        delete currPtr;
        head = nullptr;
        tail = nullptr;
    }
}

bool linkedList::isEmpty() const {
    return head == nullptr;
}

Node *linkedList::createNode(string name, int id, Node *next, Node *prev) {
    Node* ptrNode = new Node(name, id, next, prev);
    return ptrNode;
}

void linkedList::insertToBegin(string name, int id) {
    Node* temp = createNode(name, id, nullptr, nullptr);
    if (isEmpty())
    {
        head = temp;
    }

    else
    {
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void linkedList::insertToEnd(string name, int id) {
    Node* temp = createNode(name, id, nullptr, nullptr);
    if (isEmpty())
    {
        head = temp;
    }

    else
    {
        Node* currNode = head;
        while (currNode->next != nullptr) {
            currNode = currNode->next;
        }
        currNode->next = temp;
        temp->prev = currNode;
    }
}

void linkedList::insertByID(string name, int id) {

    // Linked list boşsa yeni node oluştur ve head ile tail'i o node yap.
    if (isEmpty())
    {
        Node* temp = createNode(name, id, nullptr, nullptr);
        head = temp;
        tail = temp;
    }

    // Linked list boş değilse:
    else
    {
        Node* currNode = head;

        // currNode(head)'in id'si elimizdeki datanın id'sinden büyükse
        // bu datayı linked listin başına koy.
        if (currNode->id >= id)
        {
            insertToBegin(name, id);
        }

        // currNode(head)'in idsi elimizdeki datanın idsinden daha küçükse:
        else
        {
            // currNode'yi istediğimiz nodeye
            while (currNode->next != nullptr && currNode->id < id) {
                currNode = currNode->next;
            }

            if (currNode->next == nullptr) {
                insertToEnd(name, id);
            }

            else
            {
                Node* temp = createNode(name, id, nullptr, nullptr);
                currNode->next->prev = temp;
                temp->next = currNode->next;
                currNode->next = temp;
                temp->prev = currNode;
            }

        }

    }
}


