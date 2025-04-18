#include <iostream>
#include "LinkedList.hpp"
using namespace std;


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
void LinkedList::addEndNode(int value){
    Node* newNode = new Node(value);
    if (!head)
    {
        head = newNode;
        return;
    }else{
        //loop through untill we reach the end
        Node* temporary = head;
        while(temporary->next){ // keep going until temporary points to null pointer, if yes stop 
            temporary=temporary->next;
        }
        temporary->next= newNode; 
    }
    
}


// print linked list

void LinkedList::printList(){
    cout << "Linked List: "<< endl;
    Node* current = head;

    while (current){
        Node* temporary = current;
        current = current->next;
        cout << "Node(Value: " << temporary->data << " ) -> ";
    }
    cout  << "NULL" << endl;


}

void LinkedList::addFrontNode(int value){
    Node* newNode = new Node(value);
    if(!head){
        head = newNode;
        return;
    }else{
        Node* temporary = head->next;
        newNode->next = temporary->next;
        head->next = newNode;
    }

}