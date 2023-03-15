#include "FeetInches.h"
#include <iostream>

using namespace std;


//said FeetInches was not declared fix, using namespace std;
FeetInches::FeetInches(int inFeet, int inInches) {
	feet = inFeet;
	inches = inInches;
	simplify();

}






void FeetInches::print() {
	cout << feet <<" feet, " << inches << " inches ";



}




// pre increment
FeetInches FeetInches::operator++() {
	feet++;

	//*this means a pointer to the calling object
	return *this;
}

//post increment 
FeetInches FeetInches::operator++(int) {
	//all the same way of doing it
	//Feetinches temp(feet, inches);
	FeetInches temp = *this;
	//FeetInches temp(*this);
	
	
	feet++;
	
	//*this means a pointer to the calling object
	return temp;
}





FeetInches FeetInches::operator+(const FeetInches& other) {
	FeetInches temp;
	temp.feet = feet + other.feet;
	temp.inches = inches + other.inches;
	temp.simplify();
	return temp;


}



FeetInches FeetInches::addedTo(const FeetInches& other) {
	FeetInches temp;
	temp.feet = feet + other.feet;
	temp.inches = inches + other.inches;
	return temp;


}



void FeetInches::simplify(){
	if(inches>=12){
		feet+= inches /12;
		inches %= 12;
	}
	else if{
		feet+= abs(inches) /12 + 1;
		inches = 12 - (abs(inches) % 12);				
	}
	
	
}


//<return type> <class-name>::<function-name>(parameters)




