#include <iostream>
#include <cassert>
using namespace std;

#include "Fraction.h"

//assert()


Fraction::Fraction() {

    numerator = 0;
    //denominator can't be set 0 
    denominator = 1;

}





Fraction::Fraction(int num, int den) {
    //assert was provided but makes sure that the denominator is no 0 when asked as an input
    //otherwise stores the input numerator and denominator , num and den in respected places
    assert(den != 0);
    numerator = num;
    denominator = den;
    simplify();
}






void Fraction::simplify() {
    //the goal of this function is to simplify a fraction that is passed to it

    for (int i = 1; i <= numerator; i++) {
        //checks if a number can divide numerator and denominator without leaving a remainder
        if ((numerator % i == 0) && (denominator % i == 0)) {

            //divides both numerator and deonominator by their common factor and assignes it into original Fraction
            numerator = numerator / i;
            denominator = denominator / i;

            i = 1; //if there is a number that is divisible then reset and continue going 
        }
    }
}






Fraction Fraction::addedTo(const Fraction& f2) const{
    // Goal is to add the current Fraction called and the Fraction that was passed to it
    // finds greatest common denominator and adds numerators
    // Outputs the simplified result, does not deal with negatives
    // NEEDS simplify()

    Fraction result;
    //stores the numerator 
    result.numerator = numerator * f2.denominator + denominator * f2.numerator;
    //stores the denominator
    result.denominator = denominator * f2.denominator;
    //simplifies the fraction before returning 
    result.simplify();

    return result;
}





Fraction Fraction::subtract(const Fraction& f2) const {
    // Goal is to subtract the current Fraction called and the Fraction that was passed to it
    // finds greatest common denominator and subtracts numerators
    // Outputs the simplified result, does not deal with negatives
    // NEEDS simplify()

    Fraction result;
    //stores the numerator 
    result.numerator = numerator * f2.denominator - denominator * f2.numerator;
    //stores the denominator
    result.denominator = denominator * f2.denominator;
    //simplifies the fraction before returning 
    result.simplify();

    return result;
}





Fraction Fraction::multipliedBy(const Fraction& f2) const{
    // Goal is to multiply the current Fraction called and the Fraction that was passed to it
    // Outputs the simplified result, does not deal with negatives
    // NEEDS simplify()

    Fraction result;
    //stores the numerator 
    result.numerator = numerator * f2.numerator;
    //stores the denominator
    result.denominator = denominator * f2.denominator;
    //simplifies the fraction before returning 
    result.simplify();

    return result;
}





Fraction Fraction::dividedBy(const Fraction& f2) const{
    // Goal is to divide the current Fraction called and the Fraction that was passed to it
    // Outputs the simplified result 
    // NEEDS simplify()

    Fraction result;
    //stores the numerator 
    result.numerator = numerator * f2.denominator;
    //stores the denominator
    result.denominator = denominator * f2.numerator;
    //simplifies the fraction before returning 
    result.simplify();

    return result;
}




bool Fraction::isEqualTo(const Fraction& f2) {
    // Goal is to check if the current Fraction called and the Fraction that was passed to it are the same
    // Outputs the simplified result 
    // NEEDS simplify()
    //checks if fractions are the same without simplification
    if (numerator * f2.denominator == denominator * f2.numerator) {
        return true;

    }
    return false;
}

void Fraction::print() const{

    //prints the unsimplified Fraction
    cout << numerator << "/" << denominator;
}


//output
/*
The result starts off at 0/1
The product of 9/8 and 2/3 is 3/4
The quotient of 9/8 and 2/3 is 27/16
The sum of 9/8 and 2/3 is 43/24
The difference of 9/8 and 2/3 is 11/24
The two Fractions are not equal.
The product of 3/2 and 2/3 is 1/1
*/