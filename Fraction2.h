#ifndef FRACTION2_H
#define FRACTION2_H

/*
        //constructor
        Fraction();
        pre: [no parameters]
        post: [assigns o inro num, and 1 into den (no division by zero]



        Fraction(int num, int den);
        pre: [any int value, an assertion is made so that den will never be 0]
        post: [assigns num into numerator, and den into deninator]



        //These fraction classes aren't changing their input so they can be const
        Fraction addedTo(const Fraction& f2) const;
        pre: [f2 must be a fraction variable being passed by name]
        post: [output is fraction variable of the simplest fraction, left in fractional form
                even if simplification to whole number is available]

        returns a simplified fraction variable





        Fraction subtract(const Fraction& f2) const;
        pre: [f2 must be a fraction variable being passed by name]
        post: [output is fraction variable of the simplest fraction, left in fractional form
                even if simplification to whole number is available]

        returns a simplified fraction variable





        Fraction multipliedBy(const Fraction& f2) const;
        pre: [f2 must be a fraction variable being passed by name]
        post: [output is fraction variable of the simplest fraction, left in fractional form
                even if simplification to whole number is available]

        returns a simplified fraction variable







        Fraction dividedBy(const Fraction& f2) const;
        pre: [f2 must be a fraction variable being passed by name]
        post: [output is fraction variable of the simplest fraction, left in fractional form
                even if simplification to whole number is available]

        returns a simplified fraction variable






        bool isEqualTo(const Fraction& f2);
        pre: [f2 must be a fraction variable being passed by name]
        post: [will return either flase or true
            depending on the evaluation of the passed and called fraction variables]

        returns a boolean variable


        void print() const
        pre: [pre condition here]
        post: [post condition here]
        no return, prints to the screen

*/


namespace cs_fraction {
    class Fraction
    {
    public:
        //constructor
        Fraction();
        Fraction(int num);
        Fraction(int num, int den);


        friend Fraction operator+(const Fraction& f1, const Fraction& f2);
        friend Fraction operator-(const Fraction& f1, const Fraction& f2);
        friend Fraction operator*(const Fraction& f1, const Fraction& f2);
        friend Fraction operator/(const Fraction& f1, const Fraction& f2);


        //taken from Feetinches
        friend bool operator<(const Fraction& f1, const Fraction& f2);
        friend bool operator>(const Fraction& f1, const Fraction& f2);
        friend bool operator<=(const Fraction& f1, const Fraction& f2);
        friend bool operator>=(const Fraction& f1, const Fraction& f2);
        friend bool operator!=(const Fraction& f1, const Fraction& f2);
        friend bool operator==(const Fraction& f1, const Fraction& f2);

        Fraction operator++(); //pre increment
        Fraction operator++(int); //post increment

        Fraction operator--(); //pre deincrement
        Fraction operator--(int); //post deincrement

        Fraction operator+=(const Fraction& f2);
        Fraction operator-=(const Fraction& f2);
        Fraction operator*=(const Fraction& f2);
        Fraction operator/=(const Fraction& f2);


        friend std::ostream& operator<<(std::ostream& out, const Fraction& target);
        friend std::istream& operator>>(std::istream& in, Fraction& target);

    private:
        /*[Called to simplify fractions variables, is called in the constructer
        * and also after certain public functions operate on the fractions
        * that are called and passed.
        * This is to ensure that all fractions can be simplified even after
        * they have been opearated on]*/
        void simplify();
        int numerator;
        int denominator;
    };
}
#endif