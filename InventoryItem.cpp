#include <iostream>
#include "InventoryItem.h"
#pragma warning(disable:4996);

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


InventoryItem::InventoryItem(const char* inDesc) {
    units = 0;
    description = new char[strlen(inDesc) + 1];
    strcpy(description, inDesc);
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