#ifndef DOCUMENTMANAGER_H
#define DOCUMENTMANAGER_H

#include <iostream>

#include "Patron.h"
#include "Document.h"

#include <unordered_map>
#include <unordered_set>

class DocumentManager {
    std::unordered_map<int, Document> documentcontainer;
    std::unordered_map<std::string, int> nametoID;
    std::unordered_map<int, Patron> patroncontainer;
    std::unordered_map<int, std::unordered_set<int>> borrowedcontainer;
    public:

    void addDocument(std::string name, int id, int license_limit);
    void addPatron(int patronID);
    int search(std::string name);
    bool borrowDocument(int docid, int patronID);
    void returnDocument(int docid, int patronID);
};

#endif