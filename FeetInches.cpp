#include "FeetInches.h"
#include <iostream>

using namespace std;


//said FeetInches was not declared fix, using namespace std;
FeetInches::FeetInches(int inFeet, int inInches) {
	feet = inFeet;
	inches = inInches;

}






void FeetInches::print() {
	cout << feet <<" feet, " << inches << " inches ";



}





FeetInches FeetInches::operator++() {
	feet++;

	//*this means a pointer to the calling object
	return *this;
}





FeetInches FeetInches::operator+(const FeetInches& other) {
	FeetInches temp;
	temp.feet = feet + other.feet;
	temp.inches = inches + other.inches;
	return temp;


}



FeetInches FeetInches::addedTo(const FeetInches& other) {
	FeetInches temp;
	temp.feet = feet + other.feet;
	temp.inches = inches + other.inches;
	return temp;


}



//<return type> <class-name>::<function-name>(parameters)




