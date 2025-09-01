#include <iostream>
#include "LinkedList.hpp"
#include <cassert>


int main(){
    LinkedList list;

    // Test 1: delete from empty list
    assert(list.deleteFirstNodeWithValue(10) == 0);
    
    list.addEndNode(1);
    list.addEndNode(2);
    list.addEndNode(3); //creates list head -> 1 -> 2 -> 3 -> NULL

    // Test 2: changing node with given value which exists

    assert(list.changeFirsNodeWithValue(2,9)==1); 
    // Should return 1, list shoudl be changed : head -> 1 -> 9 -> 3 -> NULL


    // Test 3: change the value of a value that does not exist

    assert(list.changeFirsNodeWithValue(4,20)==0);
    // Should return 0, list doe not have the value 4 so it would not change anything. 


    // Test 4: change the 
    assert(list.searchAndSwitch(1,26)==1);
    // return 1 if there is a value that has been switched. the list shoudl be head -> 26 -> 9 -> 3 -> NULL


    assert(list.searchAndSwitch(1,2)==0); 
    // should pass since there no node with value 1

   

    assert(list.deleteFirstNodeWithValue(9)==1); 
    //returns 1 if successful, 9 exists on the second node.. the list shoudl be: head -> 26 -> 3 -> NULL
    // deleting node that is not the first node.
    

    assert(list.deleteFirstNodeWithValue(39)==0);
    // there is no 37 value, so it shoudl return 0 and pass

    assert(list.deleteFirstNodeWithValue(26)==1);
    // case for deleting first node 
    // node exists in first position. 
    // the return should be 1
    // the resulting list shoudl be head -> 3 -> NULL


    std::cout << "All test are successful";


    return 0;
}

