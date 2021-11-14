//
// Created by Logan on 11/13/2021.
//

#include "linkedlist.h"

LinkedList::LinkedList() {
    head = nullptr, tail = nullptr;
    count = 0;
} // End of constructor

LinkedList::~LinkedList(){

} // End of destructor

//Methods
bool LinkedList::addNode(int id, string *data){
    bool didAdd = false;

    return didAdd;
} // End of addNode

bool LinkedList::deleteNode(int id){
    bool didDelete = false;
    return didDelete;
} // End of deleteNode

bool LinkedList::getNode(int id, Data* newStruct){
    bool gotNode = false;
    return gotNode;
} // End of getNode

void LinkedList::printList(bool backward){
    Node *position = head;
    int count = 1;
    if(!backward && position!= nullptr) {
        while (position != nullptr) {
            std::cout << "\t" << count << ": " << position->data.id << " : " << position->data.data << std::endl;
            position = position->next;
            count += 1;
        }
    }
} // End of printList

int LinkedList::getCount(){return count;} // End of getCount

bool LinkedList::clearList(){
    bool didClear = false;
    Node *position;
    while(head!=nullptr){
        position = head;
        head = head->next;
        delete position;
        didClear = true;
    }
    return didClear;
} // End of clearList

bool LinkedList::exists(int id){
    Node *position = head;
    bool doesExist = false;
    while(position!=nullptr){
        if(id == position->data.id){
            doesExist = true;
        }
        position = position->next;
    }
    return doesExist;
} // End of exists


// Private methods
void LinkedList::initializeNode(int *id, string *data, Node *newNode){

} // End of initializeNode

bool LinkedList::checkOperation(Node *position, Node *newNode, int *id){
    bool didAdd = false;
    return didAdd;
} // End of checkOperation

void LinkedList::insertHead(Node *newNode){

} // End of inserthead

void LinkedList::insertMiddle(Node *position, Node *newNode){

} // End of insertMiddle

void LinkedList::insertTail(Node *position, Node *newNode){

} // End of insertTail