#ifndef NODE_H
#define NODE_H

#include <iostream>
class Node{
    private:
    int value;
    Node* next;

    public:
    Node(int value);
    int getValue() const;
    bool hasNext() const;
    Node* getNext() const;
    void setNext(Node* newNode);

};
#endif