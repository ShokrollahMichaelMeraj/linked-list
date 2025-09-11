#include <iostream>
#include "LinkedList.hpp"
#include <cassert>


int main(){
    LinkedList list;

    // Test 1: delete from empty list
    assert(list.deleteFirstNodeWithValue(10) == 0);

    assert(list.findLength(list.headAccess())==0); //  return length = 0 on empty list.

    
    list.addEndNode(1);
    list.addEndNode(2);
    list.addEndNode(3); //creates list head -> 1 -> 2 -> 3 -> NULL

    assert(list.findLength(list.headAccess())== 3); // return length equals to 3, since there are 3 nodes.

    // Test 2: changing node with given value which exists

    assert(list.changeFirstNodeWithValue(2,9)==1); 
    // Should return 1, list shoudl be changed : head -> 1 -> 9 -> 3 -> NULL


    // Test 3: change the value of a value that does not exist

    assert(list.changeFirstNodeWithValue(4,20)==0);
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

    assert(list.deleteFirstNodeWithValue(3)==1);// dlete last value in the list, shoudl create a empty list.


    assert(list.deleteFirstNodeWithValue(1)==0); // should pass and retun 0, since list is empty. 

    

    assert(list.deleteIndex(0)==0); // will pass and return zero since list is still empty.



    list.addFrontNode(2); 
  
    list.addFrontNode(1);

    list.addFrontNode(0);

    list.addEndNode(4);

    list.addEndNode(5); //should be  head -> 0 ->1 -> 2 -> 3 -> 4 -> 5 -> NULL

   


    assert(list.deleteIndex(-1)==0); // check to see if returns 0 if given index is smaller then 0

    assert(list.deleteIndex(5)==0); // pass and return 0 if index is bigger than the number of nodes.

    assert(list.deleteIndex(4)==1); // pass and return 1  if dleting the last node works.

    assert(list.deleteIndex(0)==1); // pass and return 1 if deleting the first node works

    assert(list.deleteIndex(1)==1); // pass and return 1 if dleeting middle node works.
    
    







    std::cout << "All test are successful"<<"/n";


    return 0;
}

