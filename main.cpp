#include "functions.h"
#include <iostream>

using namespace std;

void stackOperations() {
    Stack stack;
    int choice, data;

    while (true) {
        cout << "\n--- Stack Operations ---" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Print Stack" << endl;
        cout << "5. Clear Stack" << endl;
        cout << "6. Stack Size" << endl;
        cout << "7. Exit Stack Operations" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter data to push: ";
            cin >> data;
            stack.push(data);
        } else if (choice == 2) {
            stack.pop();
        } else if (choice == 3) {
            cout << "Top element is: " << stack.peek() << endl;
        } else if (choice == 4) {
            cout << "Stack: ";
            stack.printStack();
        } else if (choice == 5) {
            stack.clear();
            cout << "Stack cleared." << endl;
        } else if (choice == 6) {
            cout << "Stack size: " << stack.size() << endl;
        } else if (choice == 7) {
            return;  // Exit stack operations
        } else {
            cout << "Invalid choice, please try again." << endl;
        }
    }
}

void queueOperations() {
    Queue queue;
    int choice, data;

    while (true) {
        cout << "\n--- Queue Operations ---" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Print Queue" << endl;
        cout << "4. Queue Size" << endl;
        cout << "5. Exit Queue Operations" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter data to enqueue: ";
            cin >> data;
            queue.enqueue(data);
        } else if (choice == 2) {
            queue.dequeue();
        } else if (choice == 3) {
            cout << "Queue: ";
            queue.printQueue();
        } else if (choice == 4) {
            cout << "Queue size: " << queue.size() << endl;
        } else if (choice == 5) {
            return;  // Exit queue operations
        } else {
            cout << "Invalid choice, please try again." << endl;
        }
    }
}

int main() {
    int choice;

    while (true) {
        cout << "\n--- Main Menu ---" << endl;
        cout << "1. Stack Operations" << endl;
        cout << "2. Queue Operations" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            stackOperations();
        } else if (choice == 2) {
            queueOperations();
        } else if (choice == 3) {
            cout << "Exiting program..." << endl;
            return 0;
        } else {
            cout << "Invalid choice, please try again." << endl;
        }
    }

    return 0;
}
