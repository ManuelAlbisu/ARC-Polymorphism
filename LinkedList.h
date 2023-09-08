#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>

class LinkedList {
public:
    // Constructors
    LinkedList();
    ~LinkedList();

    // Additional methods
    void pushHead(LinkedList** head, int data);
    void insert(LinkedList* prevNode, int data);
    void insertBefore(LinkedList* nextNode, int data);
    void pushTail(LinkedList** head, int data);

private:
    int data;
    LinkedList* head;
    LinkedList* next;
    LinkedList* prev;
};

#endif // LINKEDLIST_H
