
#include <iostream>
#include <cassert>
#include "fraction2.h"

using namespace std;

//assert()

namespace cs_fraction {
    Fraction::Fraction() {

        numerator = 0;
        simplify();
    }

    Fraction::Fraction(int num) {
        numerator = num;
        simplify();
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

        //if denominator is negative it multiplies it by -1 and changes the numerator to the opposite sign
        if (denominator < 0) {
            denominator = denominator * -1;
            numerator = numerator * -1;
        }

        if (numerator == 0) {
            denominator = 1;
        }


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


    // pre increment
    Fraction Fraction::operator++() {
        numerator++;

        //*this means a pointer to the calling object
        return *this;
    }

    //post increment 
    Fraction Fraction::operator++(int) {
        //all the same way of doing it
        //Feetinches temp(feet, inches);
        Fraction temp = *this;
        //FeetInches temp(*this);


        numerator++;

        //*this means a pointer to the calling object
        return temp;
    }

    // pre deincrement
    Fraction Fraction::operator--() {
        numerator--;

        //*this means a pointer to the calling object
        return *this;
    }

    //post deincrement 
    Fraction Fraction::operator--(int) {
        //all the same way of doing it
        //Feetinches temp(feet, inches);
        Fraction temp = *this;
        //FeetInches temp(*this);


        numerator--;

        //*this means a pointer to the calling object
        return temp;
    }



    Fraction operator+(const Fraction& f1, const Fraction& f2) {
        // Goal is to add the current Fraction called and the Fraction that was passed to it
        // finds greatest common denominator and adds numerators
        // Outputs the simplified result, does not deal with negatives
        // NEEDS simplify()

        Fraction result;
        //stores the numerator 
        result.numerator = f1.numerator * f2.denominator + f1.denominator * f2.numerator;
        //stores the denominator
        result.denominator = f1.denominator * f2.denominator;
        //simplifies the fraction before returning 
        result.simplify();

        return result;


    }











    Fraction operator-(const Fraction& f1, const Fraction& f2) {
        // Goal is to subtract the current Fraction called and the Fraction that was passed to it
    // finds greatest common denominator and subtracts numerators
    // Outputs the simplified result, does not deal with negatives
    // NEEDS simplify()

        Fraction result(f1.numerator * f2.denominator - f1.denominator * f2.numerator, f1.denominator * f2.denominator);
        //stores the numerator 
        //result.numerator = f1.numerator * f2.denominator - f1.denominator * f2.numerator;
        //stores the denominator
        //result.denominator = f1.denominator * f2.denominator;
        //simplifies the fraction before returning 
        result.simplify();

        return result;

    }

    Fraction operator*(const Fraction& f1, const Fraction& f2) {
        // Goal is to multiply the current Fraction called and the Fraction that was passed to it
        // Outputs the simplified result, does not deal with negatives
        // NEEDS simplify()

        Fraction result(f1.numerator * f2.numerator, f1.denominator * f2.denominator);
        //stores the numerator 
       // result.numerator = f1.numerator * f2.numerator;
        //stores the denominator
        //result.denominator = f1.denominator * f2.denominator;
        //simplifies the fraction before returning 
        //result.simplify();

        return result;

    }





    Fraction operator/(const Fraction& f1, const Fraction& f2) {
        // Goal is to divide the current Fraction called and the Fraction that was passed to it
        // Outputs the simplified result 
        // NEEDS simplify()

        Fraction result(f1.numerator * f2.denominator, f1.denominator * f2.numerator);

        //stores the numerator 
        //result.numerator = f1.numerator * f2.denominator;
        //stores the denominator
        //result.denominator = f1.denominator * f2.numerator;
        //simplifies the fraction before returning 
        //result.simplify();

        return result;

    }


    bool operator<(const Fraction& f1, const Fraction& f2) {

        return (f1.numerator * f2.denominator < f1.denominator* f2.numerator);

    }


    bool operator>(const Fraction& f1, const Fraction& f2) {
        Fraction leftNumerator;
        Fraction rightNumerator;
        //stores the numerator 
        //result.numerator = numerator * f2.denominator + denominator * f2.numerator;
        leftNumerator = f1.numerator * f2.denominator;
        rightNumerator = f1.denominator * f2.numerator;

        return (f1.numerator * f2.denominator > f1.denominator * f2.numerator);
    }

    bool operator<=(const Fraction& f1, const Fraction& f2) {

        return (f1.numerator * f2.denominator <= f1.denominator * f2.numerator);

    }

    bool operator>=(const Fraction& f1, const Fraction& f2) {

        return (f1.numerator * f2.denominator >= f1.denominator * f2.numerator);

    }

    bool operator !=(const Fraction& f1, const Fraction& f2) {

        return !(f1.numerator * f2.denominator == f1.denominator * f2.numerator);

    }
    bool operator==(const Fraction& f1, const Fraction& f2) {
        Fraction leftNumerator;
        Fraction rightNumerator;
        //stores the numerator 
        //result.numerator = numerator * f2.denominator + denominator * f2.numerator;

        //
        leftNumerator = f1.numerator * f2.denominator;
        rightNumerator = f1.denominator * f2.numerator;
        //simplifies the fraction before returning 
        leftNumerator.simplify();
        rightNumerator.simplify();
        return (f1.numerator * f2.denominator == f1.denominator * f2.numerator);



    }

    Fraction Fraction::operator+=(const Fraction& f2)
    {
        *this = *this + f2;

        // or:
        //feet += right.feet;
        //inches += right.inches;
        simplify();

        return *this;
    }
    Fraction Fraction::operator-=(const Fraction& f2)
    {
        *this = *this - f2;

        // or:
        //feet += right.feet;
        //inches += right.inches;
        simplify();

        return *this;
    }
    Fraction Fraction::operator*=(const Fraction& f2)
    {
        *this = *this * f2;

        // or:
        //feet += right.feet;
        //inches += right.inches;
        simplify();

        return *this;
    }
    Fraction Fraction::operator/=(const Fraction& f2)
    {
        *this = *this / f2;

        // or:
        //feet += right.feet;
        //inches += right.inches;
        simplify();

        return *this;
    }


    ostream& operator<<(ostream& out, const Fraction& target){
        if(target.denominator == 1)
            out << target.numerator;
        else
            out << target.numerator << "/" << target.denominator;
        return out;
    }
    
    istream& operator>>(istream& in, Fraction& target) {
        int temp;
        in >> temp;
        if (in.peek() == '+') {
            target.
            in.ignore();
        }
        else if (in.peek() == '/') {
            in.ignore();
        }
        else {
            
        }

        return in;
        
    }

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

