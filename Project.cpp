#include <iostream>

using namespace std;

int main() {

	//initializers
	int day;
	int month;
	int year;
	char split;
	bool magic;

	//output to user 
	cout << "Enter a date in the format month/day/2-digit-year: ";
	//input from user
	cin >> month;
	cin >> split;	//used for spliting month "/" day w/ any char
	cin >> day;
	cin >> split;	//used for spliting day "/" year w/ any char
	cin >> year;

	//checks in if statement whether or not it is a magic date, otherwise it is NOT
	if (month * day == year)
		cout << "That is a magic date!";
	else
		cout << "That is not a magic date!";

}