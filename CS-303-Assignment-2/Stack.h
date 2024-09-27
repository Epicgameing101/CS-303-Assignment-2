#pragma once
#include <vector>
using namespace std;

class Stack {
public:
    Stack();
    void push(int value);
    void pop();
    int top() const;
    bool empty() const;
    double average() const;
    void print() const;

private:
    vector<int> elements;  //storage for stack elements
};
