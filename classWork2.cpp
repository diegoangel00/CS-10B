#include <iostream>

using namespace std;

int main() {

	//prints out the smallest number of entered values 
	int num;
	int smallest;

	cout << "Enter a number (negative to quit): ";
	cin >> num;

	smallest = num;	//initial smallest

	while (num >= 0) {
		if (num < smallest)
			smallest = num;
		cout << "Enter a number (negative to quit): ";
		cin >> num;
	}
	cout << smallest;




	//*******************************************************************//
	//counter controlled loop - cout "Hello" 10 times 
	/*
	int counter = 0;	//initialization
	while (counter < 10) {	//comparison
		cout << "Hello" << endl;
		counter++;	//update
	}

	int sumSoFar = 0;
	int maxNum;

	cout << "Enter the number you want to add up to: ";
	cin >> maxNum;
	
	for (int i = 0; i <= maxNum; i++) {
		//cout << "Hello" << endl; //prints Hello maxNum of times
		sumSoFar +=i;  //counts the current values

	}
	cout << sumSoFar;




	/* 
	* while loop
	int hours = 0;
	int payCheck;
	int payRate;



	while (hours >= 0) {
		cout << "Enter hours worked(negative number to quit): ";
		cin >> hours;
		//if negative loops end
		if (hours < 0)
			break;

		cout << "Enter rate of pay: ";
		cin >> payRate;

		if (hours <= 40)
			payCheck = hours * payRate;

		else
			payCheck = 40 * payRate + (hours - 40) * payRate * 1.5;

		cout << "the amount of the paycheck is " << payCheck << " dollars." << endl;
	}*/



}