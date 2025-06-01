#include "DocumentManager.h"

void DocumentManager::addDocument(std::string name, int id, int license_limit) {
    Document newdoc(name, id, license_limit);
    documentcontainer[id] = newdoc;
    nametoID[name] = id;
}

void DocumentManager::addPatron(int patronID) {
    Patron newpatron(patronID);
    patroncontainer[patronID] = newpatron;
}

int DocumentManager::search(std::string name) {

    if (auto search = nametoID.find(name); search != nametoID.end()) {
        return search->second;
    } else {
        return 0;
    }
}

bool DocumentManager::borrowDocument(int docid, int patronID) {

    if (documentcontainer.find(docid) == documentcontainer.end()) {
        return false;
    }

    if (patroncontainer.find(patronID) == patroncontainer.end()) {
        return false;
    }

    if (borrowedcontainer[patronID].count(docid)) {
        return false;
    }


    int borrowedcount = 0;

    for (auto i : borrowedcontainer) {
        if (i.second.count(docid)) {
            borrowedcount++;
        }
    }

    if (borrowedcount >= documentcontainer[docid].get_license_limit()) {
        return  false;
    }

    borrowedcontainer[patronID].insert(docid);
        
    return true;
}

void DocumentManager::returnDocument(int docid, int patronID) {
    if (auto search = documentcontainer.find(docid); search != documentcontainer.end()) {
        if (auto search2 = patroncontainer.find(patronID); search2 != patroncontainer.end()) {
            borrowedcontainer[patronID].erase(docid);
        }
    }
}