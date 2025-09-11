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
Node * LinkedList::headAccess(){ // gives temporary pointer to head
    Node * tempHead = head;
    return tempHead;
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

void LinkedList::clear() { // cleans the linkedlist
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

int LinkedList::changeFirstNodeWithValue(int oldValue, int newValue){
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


int LinkedList::deleteIndex(int index){
    //deletes node at given index passed through parameters
    //check if the index is less than 0 or if the list is empty, if so return 0.
    // check if index is 0, 
    // the other cases are all the same. .
    // if the index is the same as when we iterate through the function, connect previous node to the node after the given index.

    if (head ==  NULL || index < 0){
        return 0;
    }
    
    else if(index == 0){
        Node * temp = head;
        head = head->next;
        delete(temp);
        return 1;
    }
    else{
        int count = 1;
        Node * previousNode = head;
        Node * currentNode = head -> next;

        while(currentNode ){
            if (count == index){
                previousNode->next = currentNode->next;
                delete(currentNode);
                return 1;
            }else{
                previousNode = currentNode;
                currentNode = currentNode ->next;
                count++;

            }
        }

        return 0;

    }
    

    
    
}



int LinkedList::findLength(Node * head){
    int length = 0;
    Node * temporary_Head_Pointer = head;

    while (temporary_Head_Pointer != NULL)
    {
        length++;
        temporary_Head_Pointer = temporary_Head_Pointer-> next;
        
    }

    return length; // if head points to NULL there ar eno elements in the list, , does not enter whule , returning 0,
                    // if there is at least one node, (head does not point t0 null) enters while loop, 
                    // increments length by the number of elements and returns length after exiting the loop.

    
}
    

    

    