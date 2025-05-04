#include "LinkedList.h"
#include <limits>
#include <iostream>

LinkedList::LinkedList() {
    head = nullptr;
}

LinkedList::LinkedList(int* array, int len) {
    head = nullptr;
    if (len == 0) return;

    head = new Node(array[0], nullptr);
    Node* current = head;

    for (int i = 1; i < len; ++i) {
        Node* newNode = new Node(array[i], nullptr);
        current->setLink(newNode);
        current = newNode;
    }
}

LinkedList::~LinkedList() {
    while (head != nullptr) {
        deleteFromFront();
    }
}

Node* LinkedList::traverse(unsigned int index) {
    unsigned int position = 0;
    Node* current = head;

    while (current != nullptr && position < index){
        current = current->getLink();
        position++;
    }

    return current;
}

void LinkedList::deleteFromFront() {
    if (head == nullptr) {
        return;
    }

    Node* temp = head;
    head = head->getLink();
    delete temp;
}

void LinkedList::insertAtEnd(int newdata) {
    Node* newNode = new Node(newdata,nullptr);

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* current = head;

    while (current->getLink() != nullptr) {
        current = current->getLink();
    }
    current->setLink(newNode);
}

void LinkedList::insertPosition(int pos, int newNum) {
    if (pos <= 1 || head == nullptr) {
        Node* newNode = new Node(newNum,head);
        head = newNode;
        return;
    }

    Node* prev = traverse(pos - 2);
    Node* newNode;

    if (prev == nullptr || prev->getLink() == nullptr) {
        insertAtEnd(newNum);
        return;
    }

    newNode = new Node(newNum, prev->getLink());
    prev->setLink(newNode);
}

bool LinkedList::deletePosition(int pos) {
    if (pos < 1 || head == nullptr){
        return false;
    }

    if (pos == 1){
        deleteFromFront();
        return true;
    }
    Node* beforetraversed = traverse(pos - 2);
    if (beforetraversed == nullptr || beforetraversed->getLink() == nullptr) {
        return false;
    }

    Node* toDelete = beforetraversed->getLink();
    beforetraversed->setLink(toDelete->getLink());
    
    delete toDelete;

    return true;
}

int LinkedList::get(int pos) {

    if (pos < 1) {
        return std::numeric_limits<int>::max();
    }

    Node* current = traverse(pos - 1);
    if (current == nullptr) {
        return std::numeric_limits<int>::max();
    }

    return current->getData();
}

int LinkedList::search(int target) {
    int position = 1;
    Node* current = head;

    while (current != nullptr){
        if (current->getData() == target){
            return position;
        }
        current = current->getLink();
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
        std::cout << current->getData();
        if (current->getLink() != nullptr){
            std::cout << " ";
        }
        current = current->getLink();
    }
    std::cout << "]";
}
