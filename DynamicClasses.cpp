#include <iostream>
#include "InventoryItem.h"
using namespace std;

int main()
{
    InventoryItem item1;
    InventoryItem item2("hammer");

    cout << "item1 is " << item1 << endl;
    cout << "item2 is " << item2 << endl;

    item1.setInfo("screwdriver", 5);
    item2.setUnits(9);

    cout << "item1 is " << item1 << endl;
    cout << "item2 is " << item2 << endl << endl;


    InventoryItem item3(item1);
    cout << "item3 is " << item1 << endl;
    item3.setInfo("lawn mower", 29);
    cout << "item3 is " << item2 << endl;
    cout << "but, item1 is still " << item1 << endl << endl;


    item1 = item2;
    cout << "after item1 = item2, " << endl;
    cout << "item1 is " << item1 << endl;
    cout << "item2 is " << item2 << endl << endl;

    item2.setInfo("sump pump", 14);
    cout << "after item2.setInfo(\"sump pump\", 14), " << endl;
    cout << "item1 is " << item1 << endl;
    cout << "item2 is " << item2 << endl << endl;

    item1 = item1;
    cout << "after item1 = item1, " << endl;
    cout << "item1 is " << item1 << endl;
    cout << "item1 is " << item1 << endl << endl;

    //Overloading Square Brackets
    cout << item1[1] << item1[2] << item1[3] << endl;
    item1[1] = 'c';
    item1[2] = 'i';
    item1[3] = 's';
    cout << item1[1] << item1[2] << item1[3] << endl;

    InventoryItem item4("chair");
    cout << item4[1];
    item4[1] = 'z';
    cout << item4[1]<<endl;


}


void f(InventoryItem item1) {
    item1.setInfo("pizza", 67);
}
