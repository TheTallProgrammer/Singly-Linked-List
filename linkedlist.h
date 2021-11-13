//
// Created by Logan on 11/13/2021.
//

#ifndef SIMPLE_LINKED_LIST_LINKEDLIST_H
#define SIMPLE_LINKED_LIST_LINKEDLIST_H

#include "data.h"
#include <iostream>

class LinkedList{

public:

    // Constructor/Destructor
    LinkedList();
    ~LinkedList();

    //Methods
    bool addNode(int, string*);
    bool deleteNode(int);
    bool getNode(int, Data*);
    void printList(bool = false);
    int getCount();
    bool clearList();
    bool exists(int);

private:

    // Pointer to the first node
    Node *head;

    // Private methods
    void initializeNode(int *, string*, Node*);
    bool checkOperation(Node *, Node *, Node *, int *);
    void insertHead(Node *);
    void insertMiddle(Node *, Node *, Node *);
    void insertTail(Node *, Node *);

}; // End of class LinkedList

#endif //SIMPLE_LINKED_LIST_LINKEDLIST_H
