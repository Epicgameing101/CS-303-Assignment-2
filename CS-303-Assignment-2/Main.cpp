#include <iostream>
#include "Single_Linked_List.h"
#include "Stack.h"

using namespace std;

// Function declarations for menu operations
void list_operations();
void stack_operations();

int main() {
    int choice;
    bool running = true;

    while (running) {
        cout << "\nMenu: \n";
        cout << "1. Interact with List\n";
        cout << "2. Interact with Stack\n";
        cout << "3. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;

        switch (choice) {
        case 1:
            list_operations(); // Call function to handle list operations
            break;
        case 2:
            stack_operations(); // Call function to handle stack operations
            break;
        case 3:
            running = false; // Exit the loop
            cout << "Exiting program.\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}

// Function to handle singly linked list operations
void list_operations() {
    Single_Linked_List<int> list;
    int choice, value;
    size_t index;
    bool list_running = true;

    while (list_running) {
        cout << "\nList Operations:\n";
        cout << "1. Push Back\n";
        cout << "2. Push Front\n";
        cout << "3. Pop Back\n";
        cout << "4. Pop Front\n";
        cout << "5. Insert at Index\n";
        cout << "6. Remove by Index\n";
        cout << "7. Find Value\n";
        cout << "8. Print List\n";
        cout << "9. Back to Menu\n";
        cout << "Choose an option: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value to push back: ";
            cin >> value;
            list.push_back(value);
            break;
        case 2:
            cout << "Enter value to push front: ";
            cin >> value;
            list.push_front(value);
            break;
        case 3:
            list.pop_back();
            break;
        case 4:
            list.pop_front();
            break;
        case 5:
            cout << "Enter index and value to insert: ";
            cin >> index >> value;
            list.insert(index, value);
            break;
        case 6:
            cout << "Enter index to remove: ";
            cin >> index;
            if (list.remove(index)) {
                cout << "Removed item at index " << index << endl;
            }
            else {
                cout << "No item found at index " << index << endl;
            }
            break;
        case 7:
            cout << "Enter value to find: ";
            cin >> value;
            index = list.find(value);
            if (index != list.size()) {
                cout << "Found value at index " << index << endl;
            }
            else {
                cout << "Value not found.\n";
            }
            break;
        case 8:
            list.print();
            break;
        case 9:
            list_running = false;
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    }
}

// Function to handle stack operations
void stack_operations() {
    Stack stack;
    int choice, value;

    bool stack_running = true;

    while (stack_running) {
        cout << "\nStack Operations:\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Top\n";
        cout << "4. Print Stack\n";
        cout << "5. Average of Stack\n";
        cout << "6. Back to Menu\n";
        cout << "Choose an option: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value to push: ";
            cin >> value;
            stack.push(value);
            break;
        case 2:
            stack.pop();
            break;
        case 3:
            if (!stack.empty()) {
                cout << "Top of stack: " << stack.top() << endl;
            }
            else {
                cout << "Stack is empty.\n";
            }
            break;
        case 4:
            stack.print();
            break;
        case 5:
            cout << "Average of stack: " << stack.average() << endl;
            break;
        case 6:
            stack_running = false;
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    }
}
