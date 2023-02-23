
#ifndef FRACTION_H
#define FRACTION_H
class Fraction
{
    public:
        //constructor
        Fraction();
        Fraction(int numerator, int denominator);

        //These fraction classes aren't changing their input so they can be const
        Fraction addedTo(Fraction) const;
        Fraction subtract(Fraction) const;
        Fraction multipliedBy(Fraction) const;
        Fraction dividedBy(Fraction) const;

        bool isEqualTo(Fraction);
        void simplify();
        void print() const;
    
    private:
        int numerator;
        int denominator;
};

#endif