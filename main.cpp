#include <iostream>
#include "LinkedList.hpp"
#include <cstdlib>   // for rand() and srand()
#include <ctime>     // for time()
using namespace std;
using std::cout;


int main() {

    srand(time(0));
    LinkedList list;

    cout << "length is: " << list.findLength(list.headAccess()) << "\n";

    int output = list.deleteIndex(0);
    std::cout << output<<"\n";


    list.printList();

    
    

    

    for(int index = 0; index <= 10; index++ ){
        
        list.addEndNode(index);
        cout << "length is: " << list.findLength(list.headAccess()) << "\n";


    }


    list.printList();

    cout << "length is: " << list.findLength(list.headAccess()) << "\n";


    int* array = list.convertToArray(list.headAccess());
    int size = list.findLength(list.headAccess());
    list.printArrayList(array, size);


    int * emptyarray;
    list.printArrayList(emptyarray,0);



    




    // int length =list.findLength(list.headAccess());
    // cout<< "length of given list is: "<< length<<"\n";


    // list.deleteIndex(10);

    // list.printList();

    // list.deleteIndex(0);



    // list.printList();

    // list.deleteIndex(5);

    // list.printList();




    // list.deleteFirstNodeWithValue(5);

    // list.printList();

    // list.deleteFirstNodeWithValue(0);

    // list.printList();

    // list.deleteFirstNodeWithValue(10);

    // list.printList();

    // list.clear();

    // LinkedList alist;

    // for(int index = 0; index <= 10 ; index++){
   

    //         alist.addEndNode(index);
           

      
    //         alist.addEndNode(index);
    

    // }

    // alist.printList();

    // alist.deleteFirstNodeWithValue(0);

    // alist.printList();

    // alist.deleteFirstNodeWithValue(5);

    // alist.printList();

    // alist.deleteFirstNodeWithValue(10);

    // alist.printList();

    // alist.clear();









    // list.addEndNode(2);
    // list.addEndNode(6);
    // list.printList();

    // list.addFrontNode(26);
    // list.printList();

    // list.clear();

    // list.printList();

    // for(int index = 0; index < rand() % 100; index++ ){
    //     if(index == 5){
    //         list.addEndNode(126);
    //     }else{
    //         list.addEndNode(rand() % 100);
    //     }
        
        
    // }
    // list.printList();

    // list.addFrontNode(26);

    // list.printList();

    // list.searchAndSwitch(26,1260);

    // list.printList();

    // list.searchAndSwitch(126,26000000);


    // list.searchAndSwitch(26,1260);
    
    // list.printList();

    list.clear();



    return 0;
}


