#ifndef INVITEM_H
#define INVITEM_H
#include <iostream>

class InventoryItem {
public:
    static const int MAX_INPUT_SIZE = 127;
    InventoryItem operator=(const InventoryItem& right);
    InventoryItem();
    ~InventoryItem();
    InventoryItem(const char* inDesc);
    InventoryItem(const InventoryItem& source);
    void setInfo(const char* inDesc, int inUnits);
    void setUnits(int inUnits);
    char& operator[](int index);  //return reference
    char operator[](int index) const;  //return char
    friend std::ostream& operator<<(std::ostream& out, const InventoryItem& printMe);
    friend std::istream& operator>>(std::istream & in, InventoryItem& target);
private:
    char* description;
    int units;
};

#endif