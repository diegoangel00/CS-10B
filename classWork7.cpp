#include <iostream>
using namespace std;

class Date {
public:
	void print();
	void read();
	void set(int inMonth, int inDay, int inYear);
	void increment();
	bool comesBefore(Date otherDate);
private:
	int day;
	int month;
	int year;
	int daysInMonth();
};

//specification
//scope resultion operator
void Date::print() {
	cout << month << "/" << day << "/" << year;
}

void Date::read() {
	char temp;
	
	cin>> month >> temp >> day >> temp >> year;

}
int Date::daysInMonth(){
	switch(month){
		case 2: 
			if(isLeapYear())
				return 29;
			else
				return 28;
			
		case 4:
			
		case 6:
			
		case 9: 
			
		case 11: return 30;
			
		default: return 31;
	}
	
}
void Date::increment(){
	day++;
	//past last day of the month then the month is updated and day is set to the 1st
	if(day > daysInMonth(month)){
		day = 1;
		month++;
		//past last month of the year then the year is updated and month is set to the 1st (january_
		if(month > 12){
			month = 1;
			year++;
		}
	}
		
}
bool Date::comesBefore(Date otherDate){
	if( year < otherDate.year)
		return true;
	if(year > otherDate.year)
		return false;
	if(month < otherDate.year)
		return true;
	if(month > otherDate.year)
		return false;
	return day < otherDate.year
		//return true;
	//return false;
	
}
void Date::set(int inMonth, int inDay, int inYear) {
	month = inMonth;
	day = inDay;
	year = inYear;
}


int main() {
	Date date1;
	Date date2;

	date1.set(4, 27, 1947);
	cout<<"date 1 should be 4/27/1947: ";
	date1.print();
	cout<<endl;
	cout<<"Enter a date month/day/year ";
	date2.read();
	cout<<" the date you entered was: ";
	date2.print();
	cout<<endl;
	
	if(date1.comesBefore(date2))
		cout<<"date 1 comes before date2."<<endl;
	else
		cout<<"date 1 does not comes before date2."<<endl;
}
