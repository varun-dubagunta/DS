#ifndef NODE_H
#define NODE_H

class Node{
    private:
        int value;
        Node* left;
        Node* right;

    public:
        Node(int value){}
        Node(){}
        
        void setLeft(Node* newNode);
        void setRight(Node* newNode);
        Node* getLeft() const;
        Node* getRight() const;
        int getValue() const; //getters and setters
        


};
#endif