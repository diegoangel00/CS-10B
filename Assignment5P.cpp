#include <iostream>
using namespace std;

// Class declaration goes here.

class Fraction
{
    public:
        void set(int numerator, int denominator);
        Fraction addedTo(Fraction);
        Fraction subtract(Fraction);
        Fraction multipliedBy(Fraction);
        Fraction dividedBy(Fraction);
        bool isEqualTo(Fraction);
        void print();
    private:
        int numerator;
        int denominator;
};


// Implementation of class member functions goes here.

void Fraction::set(int num, int den) {
    numerator = num;
    denominator = den;
}




Fraction Fraction::addedTo(Fraction f2) {
    Fraction result;
    //stores the numerator 
    result.numerator = numerator * f2.denominator + denominator * f2.numerator;
    //stores the denominator
    result.denominator = denominator * f2.denominator;

    return result;
}




Fraction Fraction::subtract(Fraction f2) {
    Fraction result;
    //stores the numerator 
    result.numerator = numerator * f2.denominator - denominator * f2.numerator;
    //stores the denominator
    result.denominator = denominator * f2.denominator;

    return result;
}





Fraction Fraction::multipliedBy(Fraction f2) {
    Fraction result;
    //stores the numerator 
    result.numerator = numerator * f2.numerator;
    //stores the denominator
    result.denominator = denominator * f2.denominator;

    return result;
}





Fraction Fraction::dividedBy(Fraction f2){
    Fraction result;
    //stores the numerator 
    result.numerator = numerator * f2.denominator;
    //stores the denominator
    result.denominator = denominator * f2.numerator;

    return result;
}




bool Fraction::isEqualTo(Fraction f2){
    //Fraction num;
    //checks if fractions are the same without simplification
    if (numerator * f2.denominator == denominator * f2.numerator) {
        return true;

    }
    return false;
}




void Fraction::print() {

    //prints the unsimplified Fraction
    cout << numerator << "/" << denominator;
}











int main()
{
    Fraction f1;
    Fraction f2;
    Fraction result;

    f1.set(9, 8);
    f2.set(2, 3);

    cout << "The product of ";
    f1.print();
    cout << " and ";
    f2.print();
    cout << " is ";
    result = f1.multipliedBy(f2);
    result.print();
    cout << endl;

    cout << "The quotient of ";
    f1.print();
    cout << " and ";
    f2.print();
    cout << " is ";
    result = f1.dividedBy(f2);
    result.print();
    cout << endl;

    cout << "The sum of ";
    f1.print();
    cout << " and ";
    f2.print();
    cout << " is ";
    result = f1.addedTo(f2);
    result.print();
    cout << endl;

    cout << "The difference of ";
    f1.print();
    cout << " and ";
    f2.print();
    cout << " is ";
    result = f1.subtract(f2);
    result.print();
    cout << endl;

    if (f1.isEqualTo(f2)) {
        cout << "The two Fractions are equal." << endl;
    }
    else {
        cout << "The two Fractions are not equal." << endl;
    }
}

//Output from program
/*
The product of 9/8 and 2/3 is 18/24
The quotient of 9/8 and 2/3 is 27/16
The sum of 9/8 and 2/3 is 43/24
The difference of 9/8 and 2/3 is 11/24
The two Fractions are not equal.
*/