#include <iostream>
using namespace std;

int main() {
	// (1) declare a pointer
	int* intptr;
	int* intptr1;

	//(2) The "Addres of" operator

	int i;
	intptr = &i;

	//(3) The "Dereference" or "Indirection" operator

	*intptr = 47;

	cout << intptr << " " << i << " " << *intptr << endl;

	//(4) Assignment of Pointers

	intptr1 = intptr;


	//make intptr1 point to the same thing that intptr is pointing to.

	cout << intptr << " " << i << " " << *intptr << endl;
	
	*intptr = 15;
	
	cout << intptr << " " << i << " " << *intptr << endl;
	
	//(5) Pointers to Objects
	
	string* strptr1;
	string str1("hello");
	strptr1; = &str1;
	cout << *strptr1.substr(2,3) << endl;
	
	
	
}
