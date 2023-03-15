//#pragma once
class FeetInches{
public:
	void print();
	FeetInches addedTo(const FeetInches& other);
	FeetInches(int inFeet = 0, int inInches = 0);
	FeetInches operator+(const FeetInches& other);
	FeetInches operator++(); //pre increment
	FeetInches operator++(int); //post increment
private:
	int feet;
	int inches;
};
