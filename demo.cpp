
// main.cpp
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>
#include "LinkedList.hpp"

using std::cout;
using std::cerr;
using std::endl;
using std::string;
using std::vector;

static void printBanner() {
    cout << "LinkedList CLI\n"
            "Type 'help' for commands, 'exit' to quit.\n";
}

static void printHelp() {
    cout <<
R"(Usage:
  linkedlist [--help]
  linkedlist              # starts interactive prompt (REPL)

Commands (inside REPL):
  help
      Show this help message.

  print
      Print the list and then NULL.

  length
      Print the number of nodes (uses findLength(headAccess())).

  add-front <value>
      Insert a node at the head.  O(1)
      Example: add-front 10

  add-end <value>
      Insert a node at the tail.  O(n)
      Example: add-end 42

  change-first <oldValue> <newValue>
      Change ONLY the first occurrence of oldValue to newValue.
      Prints 1 on success, 0 if not found.  O(n)

  search-switch <oldValue> <newValue>
      Change ALL occurrences of oldValue to newValue.
      Prints 1 if any node changed, else 0.  O(n)

  delete-first <value>
      Delete the first node with matching value.
      Prints 1 on success, 0 if not found.  O(n)

  delete-index <idx>
      Delete the node at 0-based index <idx>.
      Prints 1 on success, 0 if invalid/out of range.  O(n)

  clear
      Delete all nodes.  O(n)

  exit | quit
      Leave the program.
)";
}

static vector<string> tokenize(const string& line) {
    std::istringstream iss(line);
    vector<string> out;
    string t;
    while (iss >> t) out.push_back(t);
    return out;
}

static string lower(string s) {
    std::transform(s.begin(), s.end(), s.begin(),
                   [](unsigned char c){ return std::tolower(c); });
    return s;
}

static bool parseInt(const string& s, int& out) {
    std::istringstream iss(s);
    iss >> out;
    return !iss.fail() && iss.eof();
}

int main(int argc, char** argv) {
    // one-shot help
    if (argc > 1) {
        string arg = argv[1];
        if (arg == "--help" || arg == "-h" || arg == "help") {
            printHelp();
            return 0;
        } else {
            cerr << "Unknown argument: " << arg << "\n\n";
            printHelp();
            return 1;
        }
    }

    LinkedList list;
    printBanner();

    string line;
    while (true) {
        cout << "LL> ";
        if (!std::getline(std::cin, line)) break; // EOF (Ctrl+D)
        auto args = tokenize(line);
        if (args.empty()) continue;

        string cmd = lower(args[0]);

        if (cmd == "exit" || cmd == "quit") {
            cout << "Goodbye!\n";
            break;
        }
        if (cmd == "help" || cmd == "--help" || cmd == "-h") {
            printHelp();
            continue;
        }
        if (cmd == "print") {
            list.printList();
            continue;
        }
        if (cmd == "length") {
            cout << "Length: " << list.findLength(list.headAccess()) << endl;
            continue;
        }
        if (cmd == "add-front") {
            if (args.size() != 2) { cerr << "Usage: add-front <value>\n"; continue; }
            int v; if (!parseInt(args[1], v)) { cerr << "add-front: <value> must be an integer\n"; continue; }
            list.addFrontNode(v);
            list.printList();
            continue;
        }
        if (cmd == "add-end") {
            if (args.size() != 2) { cerr << "Usage: add-end <value>\n"; continue; }
            int v; if (!parseInt(args[1], v)) { cerr << "add-end: <value> must be an integer\n"; continue; }
            list.addEndNode(v);
            list.printList();
            continue;
        }
        if (cmd == "change-first") {
            if (args.size() != 3) { cerr << "Usage: change-first <oldValue> <newValue>\n"; continue; }
            int ov, nv;
            if (!parseInt(args[1], ov) || !parseInt(args[2], nv)) { cerr << "change-first: args must be integers\n"; continue; }
            cout << list.changeFirstNodeWithValue(ov, nv) << endl;
            list.printList();
            continue;
        }
        if (cmd == "search-switch") {
            if (args.size() != 3) { cerr << "Usage: search-switch <oldValue> <newValue>\n"; continue; }
            int ov, nv;
            if (!parseInt(args[1], ov) || !parseInt(args[2], nv)) { cerr << "search-switch: args must be integers\n"; continue; }
            cout << list.searchAndSwitch(ov, nv) << endl;
            list.printList();
            continue;
        }
        if (cmd == "delete-first") {
            if (args.size() != 2) { cerr << "Usage: delete-first <value>\n"; continue; }
            int v; if (!parseInt(args[1], v)) { cerr << "delete-first: <value> must be an integer\n"; continue; }
            cout << list.deleteFirstNodeWithValue(v) << endl;
            list.printList();
            continue;
        }
        if (cmd == "delete-index") {
            if (args.size() != 2) { cerr << "Usage: delete-index <idx>\n"; continue; }
            int idx; if (!parseInt(args[1], idx)) { cerr << "delete-index: <idx> must be an integer\n"; continue; }
            cout << list.deleteIndex(idx) << endl;
            list.printList();
            continue;
        }
        if (cmd == "clear") {
            list.clear();
            list.printList();
            continue;
        }

        cerr << "Unknown command: " << args[0] << ". Type 'help' for a list of commands.\n";
    }

    return 0;
}


