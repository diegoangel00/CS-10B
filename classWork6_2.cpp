
/*
#include <iostream>
#include <string>
using namespace std;


Date date1;
Date date1;

string myString;
myString = "california";
cout<< myString.substr(2, 5);

int main(){



}*/

class Date{
  public:
    void print();  
    void read();
    void set(int month, int day, int year);   //member function
  private: 
    int month;
    int day;
    int year;
  
};
//can't be used outside the class
encapsulation
