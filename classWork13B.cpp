// file myvector-client.cpp

#include <iostream>
#include "myvector.h"
using namespace std;

void print(MyVector<int>& printMe);

int main() {
    MyVector<int> v;
    MyVector<int>::size_type currentSize;

    for (int i = 0; i < 20; i++) {
        v.push_back(i);

        currentSize = v.size();
        cout << "size: " << currentSize << " capacity: " << v.capacity() << endl;
    }

    print(v);
}

void print(MyVector<int>& printMe) {
    //tries to run this code, when it fails catch is used
    try {
        for (int i = 0; i < printMe.size(); i++) {
            cout << printMe.at(i) << " ";
            if (i == 20) {
                cout << printMe.at(50) << endl;
            }
        }
        cout << endl;
        cout <<"now print printMe.at(50) " << printMe.at(50) << endl;
    }/*
    catch (string e) {
        cout << "ERROR: MyVector index out of range." << endl;
    }*/
    catch (MyVector<int>::outOfRangeError e) {
        cout << "ERROR: MyVector index out of range " << endl;
    }
}
