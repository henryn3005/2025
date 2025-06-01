#include "Document.h"

Document::Document() : name(""), id(-1), license_limit(-1) {}

Document::Document(std::string name, int id, int license_limit) : name(name), id(id), license_limit(license_limit) {}

std::string Document::get_name() { 
    return name; 
}
void Document::set_name(std::string name) { 
    this->name = name;
}
int Document::get_docID() {
    return id; 
}
void Document::set_docID(int docID) { 
    this->id = docID; 
}
int Document::get_license_limit() { 
    return license_limit; 
}
void Document::set_license_limit(int license_limit) {
    this->license_limit = license_limit; 
}