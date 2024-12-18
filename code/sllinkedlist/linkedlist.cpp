#include <iostream>
#include "node.h"

class Linkedlist{
    private:
    Node* head;

    public:
    Linkedlist(Node* head): head(head){} //constructor with params

    Linkedlist(): head(nullptr){} //default constructor
    
    ~Linkedlist(){
        Node* temp = head;
        while(temp!= nullptr){
            Node* temp2 = temp;
            temp = temp->getNext();
            delete temp2;
        }

    }
    Node* getHead() const{
        return head;
    }
    bool isEmpty(){
        return head == nullptr;
    }

    void append(Node* newNode){ //TODO: append function that takes node as parameter
         if(isEmpty()){
            head = newNode;
            return;
        }

        Node* temp = this->head;

        while(temp->hasNext()){
            temp = temp->getNext();
        }
        temp->setNext(newNode);
    }
    void append(int value){ //TODO: append function that takes a value as a parameter
       
        Node* newNode = new Node(value);

         if(isEmpty()){
            head = newNode;
            return;
        }

        Node* temp = this->head;
        while(temp->hasNext()){
            temp = temp->getNext();
        }
        temp->setNext(newNode);

    }

    void insert(int pos, Node* newNode){ //TODO: insert Node pos iterations away from head
        if(isEmpty()){
            this->head = newNode;
            return;
        }

        Node* temp = this->head;
        
        int n = 0;
        while(n<pos){
            temp = temp->getNext();
            n++;
        }
        newNode->setNext(temp->getNext());
        temp->setNext(newNode);
    }

    void insert(unsigned int pos, int value){ //TODO: insert Node pos iterations away from head given value of node
        Node* newNode = new Node(value);
        
        if(isEmpty()){
            this->head = newNode;
            return;
        }

        Node* temp = this->head;
        int n = 0;
        while(n<pos){
            temp = temp->getNext();
            n++;
        }
        newNode->setNext(temp->getNext());
        temp->setNext(newNode);
    }
    

};

int main(){
    
}