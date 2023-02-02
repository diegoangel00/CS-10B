#include <iostream>
using namespace std;


int power(int, int);
bool isLeapYear(int);

int main() {
	cout << power(2, 4) << endl;
	char ch;

	cout << "Enter a character: ";
	cin >> ch;
	if (isdigit(ch)) {
		cout << "You entered a digit." << endl;
	}
	
}

int power(int base, int power) {
	int result = 1;

	for (int i = 0; i < power; i++) {

		result *= base;

	}
	return result;
}

bool isLeapYear(int year) {
	x = 7;
	if (year % 400==0) {
		return true;
	}

	if (year % 100 == 0) {
		return false;
	}
	if (year % 4 == 0) {
		return true;
	}

	return false;
		
}