#pragma once
#ifndef MYSTRING_H
#define MYSTRING_H
//No documentation required for 11P
#include <iostream>


namespace cs_mystring {
    class MyString {
    public:
        static const int MAX_INPUT_SIZE = 127;
        //constructor
        MyString();
        MyString(const char* inDesc);
        MyString(const MyString& right);
        ~MyString();

        void read(std::istream& in, char target);

        //assginment operator
        MyString operator=(const MyString& right);
        int length() const;

        //stream operator
        friend std::ostream& operator<<(std::ostream& out, const MyString& source);
        friend std::istream& operator>>(std::istream& in, MyString& target);


        MyString operator+=(const MyString& f2);
        
        friend MyString operator+(const MyString& f1, const MyString& f2);

        

        //boolean operators
        friend bool operator<(const MyString& f1, const MyString& f2);
        friend bool operator>(const MyString& f1, const MyString& f2);
        friend bool operator<=(const MyString& f1, const MyString& f2);
        friend bool operator>=(const MyString& f1, const MyString& f2);
        friend bool operator!=(const MyString& f1, const MyString& f2);
        friend bool operator==(const MyString& f1, const MyString& f2);

        char operator[](int index) const;
        char& operator[](int index);

    private:
        char* cstring;
    };
}
#endif