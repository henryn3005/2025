#include "LinkedList.h"
#include <limits>
#include <iostream>

LinkedList::LinkedList() {
    head = nullptr;
}

LinkedList::LinkedList(int* array, int len) {
    for (int i = len - 1; i >= 0; i--){
        Node* newNode = new Node(array[i],head);
        head = newNode;
    }
}

LinkedList::~LinkedList() {
    while (head != nullptr) {
        deleteFromFront();
    }
}

Node* LinkedList::traverse(unsigned int index) {
    int position = 0;
    Node* current = head;

    while (current != nullptr && position < index){
        current = current->link;
        position++;
    }

    return current;
}

void LinkedList::deleteFromFront() {
    if (head == nullptr) {
        return;
    }

    Node* temp = head;
    head = head->link;
    delete temp;
}

void LinkedList::insertAtEnd(int newdata) {
    Node* newNode = new Node(newdata,nullptr);

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* current = head;

    while (current->link != nullptr) {
        current = current->link;
    }
    current->link = newNode;
}

void LinkedList::insertPosition(int pos, int newNum) {
    if (pos <= 1) {
        Node* newNode = new Node(newNum,head);
        head = newNode;
    }

    Node* traversed = traverse(pos);
    if (traversed == nullptr){
        insertAtEnd(newNum);
    }
    Node* newNode = new Node(newNum,traversed->link);
    traversed->link = newNode;
}

bool LinkedList::deletePosition(int pos) {
    Node* traversed = traverse(pos);
    if (traversed == nullptr){
        return false;
    }

    if (pos == 0){
        deleteFromFront();
        return true;
    }
    Node* beforetraversed = traverse(pos-1);

    beforetraversed->link = traversed->link;

    delete traversed;

    return true;
}

int LinkedList::get(int pos) {
    Node* get = traverse(pos);
    if (get == nullptr) {
        return std::numeric_limits < int >::max();
    }

    return get->data;
}

int LinkedList::search(int target) {
    int position = 0;
    Node* current = head;

    while (current != nullptr){
        if (current->data == target){
            return position;
        }
        current = current->link;
        position++;
    }

    return -1;
}

void LinkedList::printList() {
    if (head == nullptr) {
        return;
    }
    Node* current = head;

    std::cout << "[";

    while (current != nullptr) {
        std::cout << current->data;
        if (current->link != nullptr){
            std::cout << " ";
        }
        current = current->link;
    }
    std::cout << "]" << std::endl;
}
