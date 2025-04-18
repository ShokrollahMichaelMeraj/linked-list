#include <iostream>
#include "LinkedList.hpp"
#include <cstdlib>   // for rand() and srand()
#include <ctime>     // for time()

int main() {

    srand(time(0));
    LinkedList list;

    // Insert some values
    // list.addEndNode(26);
    // list.addEndNode(20);
    // list.addEndNode(3);
    // list.addEndNode(465);

    

    // list.addFrontNode(26);

    //insert random values
    for (int i = 0; i < rand() % 100; i++)
    {
        list.addEndNode(rand() % 100);
    }
    

    // Print the list

    list.printList();


    return 0;
}