#include "LinkedList.h"

// Linked list class constructor
LinkedList::LinkedList() {

}

// Linked list class destructor
LinkedList::~LinkedList() {
    
}

void LinkedList::pushHead(LinkedList** head, int newData) {
    // Allocates a new node
    LinkedList* newNode = new LinkedList();

    // Inserts required data in new node
    newNode->data = newData;

    // Points next node to the current head and the previous node to null
    newNode->next = (*head);
    newNode->prev = NULL;

    // Changes previous of head node to new node
    if ((*head) != NULL)
        (*head)->prev = newNode;

    // Points head to the new node
    (*head) = newNode;
}

void LinkedList::insert(LinkedList* prevNode, int newData) {
    // Checks if the previous node given points to NULL;
    if (prevNode == NULL) {
        std::cout << "Warning! " << "Previous node cannot be NULL." << std::endl;
        return;
    }

    // Allocates a new node
    LinkedList* newNode = new LinkedList();

    // Inserts required data in new node
    newNode->data = newData;

    // Sets next of new node to next of previous node
    newNode->next = prevNode->next;

    // Sets next of previous node to the new node
    prevNode->next = newNode;

    // Sets previous node to next previous of new node
    newNode->prev = prevNode;

    // Change previous of the new nodes next node to new node
    if (newNode->next != NULL) {
        newNode->next->prev = newNode;
    }
}

void LinkedList::insertBefore(LinkedList* nextNode, int newData) {
    // Checks if the next node given points to NULL;
    if (nextNode == NULL) {
        std::cout << "Warning!" << "Next node cannot be null." << std::endl;
        return;
    }

    // Allocates a new node
    LinkedList* newNode = new LinkedList();

    // Inserts required data in new node
    newNode->data = newData;

    // Sets previous of new node to previous of next node
    newNode->prev = nextNode->prev;

    // Sets previous of the next node as the new node
    nextNode->prev = newNode;

    // Sets next of the new node to the next node
    newNode->next = nextNode;

    // Change next of the new nodes previous node to new node
    if (newNode->prev != NULL)
        newNode->prev->next = newNode;
    else
        head = newNode;
}

void LinkedList::pushTail(LinkedList** head, int newData) {
    // Allocates a new node
    LinkedList* newNode = new LinkedList();

    // End of doubly linked list
    LinkedList* tail = *head;

    // Inserts required data in new node
    newNode->data = newData;

    // New node will be the final node so it's set to NULL
    newNode->next = NULL;

    // If the linked list is empty, then the new node becomes the head
    if (*head == NULL) {
        newNode->prev = NULL;
        *head = newNode;
        return;
    }

    // Traverses to the last node
    while (tail->next != NULL)
        tail = tail->next;

    // Sets next of last node to the new node
    tail->next = newNode;

    // Sets the previous of the new node to the last node
    newNode->prev = tail;

    return;
}
