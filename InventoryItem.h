#ifndef INVITEM_H
#define INVITEM_H
#include <iostream>

class InventoryItem {
public:
    InventoryItem operator=(const InventoryItem& right);
    InventoryItem();
    InventoryItem(const char* inDesc);
    InventoryItem(const InventoryItem& source);
    void setInfo(const char* inDesc, int inUnits);
    void setUnits(int inUnits);
    friend std::ostream& operator<<(std::ostream& out, const InventoryItem& printMe);
private:
    char* description;
    int units;
};

#endif