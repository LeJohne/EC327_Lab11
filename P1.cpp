//include headers and libraries
// main.cpp

#include "Library.h"
#include <iostream>

int main() {
    Library library;
    string command, bookName;

    while (true) {
        cin >> command;
        if (command == "a") {
            cin >> bookName;
            if (!library.addBook(bookName)) {
                cout << "Cannot add book: " << bookName << endl;
            }
        } else if (command == "r") {
            cin >> bookName;
            if (!library.removeBook(bookName)) {
                cout << "Cannot remove book: " << bookName << endl;
            }
        } else if (command == "p") {
            library.print();
        } else if (command == "q") {
            break;
        }
    }

    return 0;
}
