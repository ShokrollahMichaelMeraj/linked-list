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
    void addFrontNode(int value);
    int searchAndSwitch(int oldValue, int newValue);
    void clear();
    int deleteFirstNodeWithValue(int value);
    int changeFirsNodeWithValue(int oldValue, int newValue);
};



#endif