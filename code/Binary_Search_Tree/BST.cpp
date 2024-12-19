#include <iostream>
#include "Node.h"



class BST{

    private:
    Node* head;

    public:
    bool isLeaf(Node* node) const{
        return node->getLeft() ==nullptr && node->getRight()==nullptr;
    }
    void insert(Node* node){
        if(this->head == nullptr){
            this->head = node;
            return;
        }
        Node* temp = head;
        while(!isLeaf(temp)){
        if(temp->getValue() > node->getValue()){
            temp = temp->getLeft();
        }

        else if(temp->getValue() < node->getValue()){
            temp = temp->getRight();
        }
        else{
            return;} }
        if(node->getValue()>temp->getValue()){
            temp->setRight(node);
        }
        if(node->getValue() < temp->getValue()){
            temp->setLeft(node);
        }

        
    }

    Node* find(int value) const{
        Node* temp = head;
        while(temp != nullptr){
            if(value < temp->getValue() ){
                temp = temp->getLeft();
            }
            else if(value > temp->getValue()){
                temp = temp->getRight();
            }
            else{
                return temp;
            }
            return nullptr;
        }
    

    }

    void deleteNode(int value){
        Node* target = find(value);
        if(isLeaf(target)){
            delete target;
            return;
        }
        else if(target->getLeft() == nullptr){
             Node* temp = target->getRight();
             target->setValue(temp->getValue());
             delete temp;
             return;
        }

        Node* iter = target->getRight();

        while(iter->getLeft() != nullptr){
            iter = iter->getLeft();
        }
        if(isLeaf(iter)){
            target->setValue(iter->getValue());
            delete iter;
            return;
        }
        else{
            target->setValue(iter->getValue());
            Node* temp = iter->getRight();

            iter->setRight(temp->getRight());
            iter->setLeft(temp->getLeft());
            iter->setValue(temp->getValue());
            delete temp;
        }
        
        

    }


};