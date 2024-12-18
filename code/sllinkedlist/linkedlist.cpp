#include <iostream>
#include "node.h"


int main(){
    Node node(3);
    Node* n2 = new Node(5);
    node.setNext(n2);

    std::cout<<node.getNext()->getValue()<<std::endl;
    delete n2;
    return 0;
}