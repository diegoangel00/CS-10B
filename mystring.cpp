//No documentation required for 11P
#pragma warning(disable:4996)
#include <iostream>
#include <cassert>
#include <cstring>
#include "mystring.h"


using namespace std;

namespace cs_mystring{
    MyString::MyString(){
        cstring = new char[1];
        strcpy(cstring, "");
    }

    MyString::MyString(const char* inDesc) {
        cstring = new char[strlen(inDesc) + 1];
        strcpy(cstring, inDesc);
    }
    MyString::MyString(const MyString& right) {
        cstring = new char[strlen(right.cstring) + 1];
        strcpy(cstring, right.cstring);
    }

    MyString::~MyString() {
        delete[] cstring;
    }


    MyString MyString::operator=(const MyString& right) {
        if (this != &right) {
            
            delete[] cstring;
            cstring = new char[strlen(right.cstring) + 1];
            strcpy(cstring, right.cstring);
        }
        return *this;


    }


    int MyString::length() const{
        return strlen(cstring);
    }



    bool operator<(const MyString& f1, const MyString& f2) {

        return (f1.cstring <  f2.cstring);

    }


    bool operator>(const MyString& f1, const MyString& f2) {


        return (f1.cstring > f2.cstring);
    }

    bool operator<=(const MyString& f1, const MyString& f2) {

        return (f1.cstring <= f2.cstring);

    }

    bool operator>=(const MyString& f1, const MyString& f2) {

        return (f1.cstring >= f2.cstring);

    }

    bool operator !=(const MyString& f1, const MyString& f2) {

        return (f1.cstring != f2.cstring);

    }
    bool operator==(const MyString& f1, const MyString& f2) {

        return (f1.cstring == f2.cstring);

    }





    ostream& operator<<(ostream& out, const MyString& source)
    {
        out << source.cstring;
        return out;
    }




    char MyString::operator[](int index) const
    {
        assert(index >= 0 && index < strlen(cstring));
        return cstring[index];
    }

    char& MyString::operator[](int index)
    {
        assert(index >= 0 && index < strlen(cstring));
        return cstring[index];
    }

}



