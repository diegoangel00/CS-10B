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
	//cout << *strptr1.substr(2,3) << endl;
	// "->" means dereference and select
	//cout << strptr1->substr(2,3) << endl;
	
	//cout << (*strptr).substr(2, 3) << endl;
	//cout << (*strptr).substr(2, 3) << endl;
	
	string* strptr2;
	string* strptr3;
	
	string str2("there")
	string str3("penelope")
		
	strptr2 = &str2;
	strptr3 = &str3;
	
	//array of pointers to strings w/ initialization
	string* array[10] = {strptr1, strptr2, strptr3};
	
	//below only populates the first 3 entries with values
	//int array[10] = {4, 7, 9};
	
}
