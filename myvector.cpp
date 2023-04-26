#include <cassert>
//#include "myvector.h"
//using namespace std;

template <class T>
MyVector<T>::MyVector(size_type inSize, const value_type& inValue) {
    mSize = inSize;
    mCapacity = inSize;
    items = new value_type[inSize];

    for (size_type i = 0; i < mSize; i++) {
        items[i] = inValue;
    }
}
typedef std::size_t size_type;
typedef int value_type;


template <class T>
typename MyVector<T>::size_type MyVector<T>::size() const {
    //mSize is Private
    return mSize;
}


template <class T>
typename MyVector<T>::size_type MyVector<T>::capacity() const{
    //mCapacity is Private
    return mCapacity;
}


template <class T>
typename MyVector<T>::value_type MyVector<T>::at(size_type i) const{
    //size is defined
    assert(i >= 0 && i < size());
    return items[i];
}



template <class T>
void MyVector<T>::push_back(const value_type& inValue) {
    if (mSize < mCapacity) {
        items[mSize] = inValue;
        mSize++;
    }
    else {
        if (mCapacity == 0) {
            mCapacity = 1;
        }
        else {
            mCapacity *= 2;
        }
        value_type* temp = new value_type[mCapacity];
        for (size_type i = 0; i < mSize; i++) {
            temp[i] = items[i];
        }
        temp[mSize] = inValue;
        mSize++;
        delete[] items;
        items = temp;
    }
}