# LinkedList (C++)

A simple, ongoing, educational **singly linked list** implementation in C++ with basic operations, a small demo (`main.cpp`), and assertion-based tests (`TestLinkedList.cpp`).

---

## Features

- Construct / destroy list (proper node cleanup)
- List Head access through the headAccess function
- Insert at **front** and **end**
- Find Length of Linked List.
- Print list: Loops through nodes and prints given linked list.
- **Search & replace**:
  - `searchAndSwitch(oldValue, newValue)` → replaces **all** occurrences of oldValue with newValue.
  - `changeFirsNodeWithValue(oldValue, newValue)` → replaces **first** occurrence (note: function name intentionally matches current code)
- **Delete**:
  - `deleteFirstNodeWithValue(value)` → delete first matching node
  - `deleteIndex(index)` → delete node at 0-based index
- `clear()` → remove all nodes

---

## Project Structure

`├── LinkedList.hpp 
`├── LinkedList.cpp
`├── node.hpp 
`├── main.cpp # demo/driver
`├── TestLinkedList.cpp # assertions-based tests
`├── Makefile 
`└── README.md


## How Ro Run:

- 

## Ongoing Development List:

- add menu:
    - should be abel to run commands from the terminal, such as create or destroy the linked list, add node, and print
- add search: 
    - if does not find it it will say it doenst exist

- add sort:
    - inplement Merge sort.
- add data structues using existing architecture:
  - Stack and queue implementation. 
- Other:
  - turn list into array. 




