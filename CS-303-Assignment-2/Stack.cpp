#include "Stack.h"
#include <iostream>
using namespace std;

Stack::Stack() {}

void Stack::push(int value) {
    elements.push_back(value);
}

void Stack::pop() {
    if (empty()) {
        cout << "Stack is empty" << endl;
        return;
    }
    elements.pop_back();
}

int Stack::top() const {
    if (empty()) {
        cout << "Stack is empty" << endl;
        return -1;
    }
    return elements.back();
}

bool Stack::empty() const {
    return elements.empty();
}

double Stack::average() const {
    if (empty()) return 0.0;
    double sum = 0;
    for (int value : elements) {
        sum += value;
    }
    return sum / elements.size();
}

void Stack::print() const {
    if (empty()) {
        cout << "Stack is empty." << endl;
        return;
    }

    cout << "Stack elements (from bottom to top): ";
    for (int value : elements) {
        cout << value << " ";
    }
    cout << endl;
}
