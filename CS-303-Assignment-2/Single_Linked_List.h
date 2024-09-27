#pragma once
#include <iostream>
using namespace std;

template <typename Item_Type>
class Single_Linked_List {
private:
    struct Node {
        Item_Type data;
        Node* next;
        Node(const Item_Type& data) : data(data), next(nullptr) {}
    };
    Node* head;
    Node* tail; // New member for tail
    size_t num_items; // New member for size

public:
    Single_Linked_List();
    ~Single_Linked_List();
    void push_front(const Item_Type& item);
    void push_back(const Item_Type& item);
    void pop_front();
    void pop_back();
    Item_Type front() const;
    Item_Type back() const;
    bool empty() const;
    void insert(size_t index, const Item_Type& item);
    bool remove(size_t index);
    size_t find(const Item_Type& item) const;
    size_t size() const;
    void print() const;
};