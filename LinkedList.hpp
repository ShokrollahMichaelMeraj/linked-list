#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

#include "Node.hpp"

class LinkedList
{
private:
  Node* head;
public:
    LinkedList();
    ~LinkedList();
    void addEndNode(int value);
    void printList();           
};



#endif