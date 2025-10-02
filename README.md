# LinkedList (C++)

A clean, efficient C++ implementation of a singly linked list with comprehensive functionality, suitable for educational purposes and integration into larger projects.

---
## Overview

This project provides a robust  **singly linked list** implementation in C++ with a focus on memory safety, proper resource management, and comprehensive functionality. It serves as both a learning resource and a reusable data structure component.

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

```
├── LinkedList.hpp          # LinkedList class declaration
├── LinkedList.cpp          # LinkedList method implementations
├── node.hpp                # Node structure definition
├── main.cpp                # Demonstration program
├── TestLinkedList.cpp      # Comprehensive test suite
├── Makefile                # Build configuration
└── README.md               # Project documentation
```
## Tech Stack

- Language: C++17
- uild System: Make
- Testing: Custom assertion-based testing framework
- Memory Management: Manual memory management with RAII principles-

## Getting Started

### Prerequisites
- A C++ compiler: **clang++** or **g++**
- **make**
- (macOS) Install Xcode Command Line Tools: `xcode-select --install`
- (Ubuntu/Debian) `sudo apt-get install build-essential`
- (Windows) Use **WSL** (recommended) or MinGW
- 
---

### 1) Clone the repository
```bash
# HTTPS
git https://github.com/ShokrollahMichaelMeraj/linked-list
cd <YOUR_REPO>

# Or SSH (if you’ve set up keys)
# git https://github.com/ShokrollahMichaelMeraj/linked-list
# cd <YOUR_REPO>
```
### 2) Run





# Roadmap & Ongoing Development

# Planned Features

- Interactive Menu: Terminal-based interface for ease user interaction.
- Enhanced Search: Improved search with better feedback
- Sorting Algorithm: Implementation of merge sort for linked lists
- Additional Data Structures: Stack and queue implementations using the existing architecture
- Conversion Utilities: Function to convert linked list to array

# Current Development Focus

- Improving error handling and edge case management
- Adding more comprehensive documentation
- Performance optimization for large lists

# Contributing
- Coming Soon !

# License

- This project is licensed under the MIT License - see the LICENSE file for details.

# Contact

- Shokrollah Michael Meraj - mmeraj@sfu.ca

- Project Link: https://github.com/ShokrollahMichaelMeraj/linked-list






