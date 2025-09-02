#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

#include "Node.hpp"

class LinkedList
{
private:
  Node* head;
public:
    LinkedList(); // constructor
    ~LinkedList(); // destructor
    void addEndNode(int value); // adds a node with given value to the end of the list
    void printList(); // iterates through and prints the valuesof each node in order  
    void addFrontNode(int value); // adds a node with given value to the front of the node
    int searchAndSwitch(int oldValue, int newValue); // changes all occurences of oldvalue to the new value
    void clear(); // clears out the entire list.
    int deleteFirstNodeWithValue(int value); // deletes the node with first occurence of the given value
    int changeFirstNodeWithValue(int oldValue, int newValue); // changes the first occurence of the old value node with newValue.
    int deleteIndex(int index); // deletes node at specific index. 
};



#endif