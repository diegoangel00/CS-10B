#include <iostream>
#include <ctime>
#include <cstdlib>
#include "OrderedPair.h"
#include "OrderedPair.cpp"
using namespace std;
using namespace cs_pairs;





int main() {
    int num1, num2;
    OrderedPair<int> myList[10];

    srand(static_cast<unsigned>(time(0)));
    cout << "default value: ";
    myList[0].print();
    cout << endl;

    for (int i = 0; i < 10; i++) {
        myList[i].setFirst(rand() % 50);
        myList[i].setSecond(rand() % 50 + 50);
    }

    myList[2] = myList[0] + myList[1];

    if (myList[0] < myList[1]) {
        myList[0].print();
        cout << " is less than ";
        myList[1].print();
        cout << endl;
    }

    for (int i = 0; i < 10; i++) {
        myList[i].print();
        cout << endl;
    }

    cout << "Enter two numbers to use in an OrderedPair.  Make sure they are different numbers: ";
    cin >> num1 >> num2;
    OrderedPair<int> x;

    /* use this before you've implemented the exception handling in the class:
    */

    //x.setFirst(num1);
    //x.setSecond(num2);

    // use this after you've implemented the exception handling in the class:
    try {
        x.setFirst(num1);
        x.setSecond(num2);
    } catch (OrderedPair<int>::DuplicateMemberError e) {
        cout << "Error, you attempted to set both members of the OrderedPair to the same number."
             << endl;
        x.setFirst(OrderedPair<int>::DEFAULT_VALUE);
        x.setSecond(OrderedPair<int>::DEFAULT_VALUE);
    }
    

    cout << "The resulting OrderedPair: ";
    x.print();
    cout << endl;
}