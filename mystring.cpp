//No documentation required for 11P
#pragma warning(disable:4996)
#include <iostream>
#include <cassert>
#include <cstring>
#include "mystring.h"


using namespace std;

namespace cs_mystring {
    MyString::MyString() {
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


    int MyString::length() const {
        return strlen(cstring);
    }


    MyString operator+(const MyString& f1, const MyString& f2) {

        MyString result = new char[MyString::MAX_INPUT_SIZE + 1];
        
        strcpy(result.cstring, f1.cstring);
        strcat(result.cstring, f2.cstring);

        return result;


    }


    bool operator<(const MyString& f1, const MyString& f2) {

        //return (f1.cstring < f2.cstring);
        return (strcmp(f1.cstring , f2.cstring) < 0);

    }


    bool operator>(const MyString& f1, const MyString& f2) {

        //return (f1.cstring > f2.cstring);
        return (strcmp(f1.cstring, f2.cstring) > 0);
    }

    bool operator<=(const MyString& f1, const MyString& f2) {

        //return (f1.cstring <= f2.cstring);
        return (strcmp(f1.cstring, f2.cstring) <= 0);
    }

    bool operator>=(const MyString& f1, const MyString& f2) {

        //return (f1.cstring >= f2.cstring);
        return (strcmp(f1.cstring, f2.cstring) >= 0);
    }

    bool operator !=(const MyString& f1, const MyString& f2) {
        return (strcmp(f1.cstring, f2.cstring) != 0);
        //return (f1.cstring != f2.cstring);

    }
    bool operator==(const MyString& f1, const MyString& f2) {

        //return (f1.cstring == f2.cstring);
        return (strcmp(f1.cstring, f2.cstring) == 0);

    }

    MyString MyString::operator+=(const MyString& f2)
    {
        *this = *this + f2;


        return *this;
    }


    void MyString::read(istream& in, char target) {
        
        char temp[MyString::MAX_INPUT_SIZE + 1];
        delete[] cstring;

        cstring = new char[MAX_INPUT_SIZE + 1];
        in.getline(temp, MyString::MAX_INPUT_SIZE, target);
        strcpy(cstring,temp );

    }

    ostream& operator<<(ostream& out, const MyString& source)
    {
        out << source.cstring;
        return out;
    }

    istream& operator>>(istream& in, MyString& target) {
        while (isspace(in.peek())) {
            in.ignore();
        }

        char temp[MyString::MAX_INPUT_SIZE + 1];
        //in.getline(temp, MyString::MAX_INPUT_SIZE, ':');

        delete[] target.cstring;
        target.cstring = new char[strlen(temp) + 1];
        strcpy(target.cstring, temp);
        in >> target.cstring;

        return in;

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


