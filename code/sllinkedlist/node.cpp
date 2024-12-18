#include <iostream>
#include "node.h"

    Node::Node(int value): value(value), next(nullptr){}
    
    int Node::getValue() const{
        return this->value;
    }
    bool Node::hasNext() const{
        return next != nullptr;
    }
    Node* Node::getNext() const{
        return next;
    }
    void Node::setNext(Node* newNode){
        this->next = newNode;
    }




