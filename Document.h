#ifndef DOCUMENT_H
#define DOCUMENT_H

#include <iostream>

class Document {
    std::string name;
    int id;
    int license_limit;
    public:
    Document();
    Document(std::string name, int id, int license_limit);

    //get n set
    std::string get_name();
    void set_name(std::string name);
    int get_docID();
    void set_docID(int docID);
    int get_license_limit();
    void set_license_limit(int license_limit);
};

#endif