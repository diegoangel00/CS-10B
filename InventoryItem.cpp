#include <cassert>
#include <iostream>
#include "InventoryItem.h"
#pragma warning(disable:4996)

using namespace std;


InventoryItem::InventoryItem(const InventoryItem& source) {
    units = source.units;
    description = new char[strlen(source.description) + 1];
    strcpy(description, source.description);
}


InventoryItem::InventoryItem() {
    units = 0;
    description = new char[1];
    strcpy(description, "");
}


InventoryItem::~InventoryItem() {
    delete[] description;
}


InventoryItem::InventoryItem(const char* inDesc) {
    units = 0;
    description = new char[strlen(inDesc) + 1];
    strcpy(description, inDesc);
}

char& InventoryItem::operator[](int index) {
    assert(index >= 0 && index < strlen(description));
    return description[index];
}

char InventoryItem::operator[](int index) const {
    assert(index >= 0 && index < strlen(description));
    return description[index];
    
}

void InventoryItem::setInfo(const char* inDesc, int inUnits) {
    units = inUnits;
    delete[] description;
    description = new char[strlen(inDesc) + 1];
    strcpy(description, inDesc);
}
void InventoryItem::setUnits(int inUnits) {
    units = inUnits;
}

ostream& operator<<(ostream& out, const InventoryItem& source){
    out << source.units << " " << source.description;
    return out;
}

istream& operator>>(istream& in, InventoryItem& target) {

    while (isspace(in.peek())) {
        in.ignore();
    }


    char temp[128];// max desciprtion size

    in.getline(temp, 127, ':');
    delete[] target.description;
    target.description = new char[strlen(temp) + 1];
    strcpy(target.description, temp);
    in >> target.units;

    return in;
}


InventoryItem InventoryItem::operator=(const InventoryItem& right) {
    if (this != &right) {
        units = right.units; 

        //deallocate old memmory
        delete[] description;
        description = new char[strlen(right.description) + 1];
        strcpy(description, right.description);
    }

    return *this;
}
