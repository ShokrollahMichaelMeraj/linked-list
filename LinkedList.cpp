#include <iostream>
#include "LinkedList.hpp"


// constructor
LinkedList::LinkedList() : head(nullptr){}

// destructor

LinkedList:: ~LinkedList() {
    Node* current_node = head; // point current node to the head of the list
    while(current_node){ //loop through the entire list
        Node* temporary_node = current_node; // point to same node as current
        current_node = current_node->next; // nove current to the next node
        delete temporary_node; // delete orginal node current pointed to
        // if works corrctly current should point to null pointer at the end. 

    }

}

// insert at the end




// print linked list