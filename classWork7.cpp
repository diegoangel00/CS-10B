#include <iostream>
using namespace std;

class Date {
public:
	void print();
	void read();
	void set(int month, int day, int year);
private:
	int day;
	int month;
	int year;




};

//specification
//scope resultion operator
void Date::print() {
	cout << month << "/" << day << "/" << year;
}

void Date::read() {
	

}
void Date::set(int month, int day, int year) {

}


int main() {
	Date date1;
	Date date2;

	date1.set(4, 27, 1947);




}
