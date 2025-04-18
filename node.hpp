#ifndef NODE_HPP
#define NODE_HPP

struct Node
{
   int data; //value
   Node* next; //pointer to next node

   Node(int value) : data(value), next(nullptr){}
};





#endif
