#ifndef NODE_H
#define NODE_H


class Node {
    private:
    int data;
    Node* link;
    public:
    Node(int data, Node* link);

    int getData();
    Node* getLink();

    void setData(int value);
    void setLink(Node* next);
};

#endif