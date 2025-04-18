#include <iostream>
#include "LinkedList.hpp"

int main() {
    LinkedList list;

    // Insert some values
    list.addEndNode(26);
    list.addEndNode(20);
    list.addEndNode(3);
    list.addEndNode(465);

    // Print the list

    list.printList();


    return 0;
}