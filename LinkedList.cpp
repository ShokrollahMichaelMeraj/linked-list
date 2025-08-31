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
        newNode->next = head; 
        head = newNode;
    }

}

int LinkedList::searchAndSwitch(int oldValue, int newValue){ // search for all instances of old value and switches it with new value
    Node* current = head;
    int identifier= 0;
    while(current){
        if(current->data==oldValue){
            current->data = newValue;
            identifier =1;
        }
        
        current = current->next;
        
    }
    return identifier;
}

void LinkedList::clear() {
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    head = nullptr; // reset the pointer
}



int LinkedList::deleteFirstNodeWithValue(int value){
    // delete the first node with the given value from parameters. 
    // send 1 if value exists and is changed,
    // send 0 if value does not exist after loopinhg through the list.
    

    // cases:
    if (head == NULL) {
        return 0; // Case 1: empty list
    }

    if(head!=NULL && head->data == value){
        Node* temp = head;
            head= head->next;
            delete(temp);
            return (1);
    }
    Node* previousNode = head;
    Node* currentNode = head->next;
        
    while (currentNode!=NULL ){//  if the list is emptey.
        
        if (currentNode->data == value ) // if the value exists but is not the first node
        {
            previousNode->next = currentNode->next;
            delete(currentNode);
            return(1);
            
        }else
        // iterate through the linked list, if the value does not exist, then we send an identifier 0. 
        {
            previousNode = previousNode->next;
            currentNode = currentNode->next;
        }
        
    }
    return(0);//return 0 if the value does not exist within the list.

}

int LinkedList::changeFirsNodeWithValue(int oldValue, int newValue){
    Node* current = head;
    while(current){
        if(current->data==oldValue){
            current->data = newValue;
            return 1;
        }
            current = current->next;
        
    
    }
    return 0;
}

    

    