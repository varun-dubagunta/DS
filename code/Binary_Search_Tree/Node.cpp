#include <iostream>
#include "Node.h"



Node::Node(): value(0), left(nullptr), right(nullptr){}

Node::Node(int value): value(value), left(nullptr), right(nullptr){}

int Node::getValue() const{
    return this->value;
}

void Node::setLeft(Node* newNode){
    this->left = newNode;
}

void Node::setRight(Node* newNode){
    this->right = newNode;
}

void Node::setValue(int value){
    this->value = value;
}

Node* Node::getLeft() const{
    return this->left;
}

Node* Node::getRight() const{
    return this->right;
}