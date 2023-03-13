//#pragma once
class FeetInches{
public:
	void print();
	FeetInches addedTo(const FeetInches& other);
	FeetInches(int inFeet = 0, int inInches = 0);
	FeetInches operator+(const FeetInches& other);
	FeetInches operator++();
private:
	int feet;
	int inches;
};