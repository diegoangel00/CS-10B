#include <iostream>
using namespace std;

//prototype
void init(int* x);

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
	
	// make the first entry the value of the union between [1] and [2]
	*array[0] = *array[1] + *array[2];
	
	// 12.2.8 Array name without [] is a pointer constant, declaring and array is a constant address, a ptr can be changed
	int array2[10];
	int* ptr;
	
	ptr = array2;
	
	array[3] = 7;
	ptr[2] = 6;
	
	cout<< ptr[3] <<endl;
	cout<< array2[2] <<endl;
	
	//x is a pointer, to a pointer of a string
	string** x = array;
	
	//
	//*x[2];
	//print out location of [2]
	cout<< array[2] <<endl;
	
	//print out value at location [2]
	cout<< *array[2] <<endl;
	
	//returns memory address at array[2]
	//useful for comparing addresses of different locations (if they are next to each other)
	cout<< *(array + 2) <<endl;
	
	//returns value at address of array [2]
	cout<< **(array + 2) <<endl;
	
	init(ptr);
	for(int i = 0; i< 10; i++){
		cout<< array2[i] << " ";
	}
	cout << endl;
}
//also could be written as
//void init(int x[]){
void init(int* x){
	for(int i = 0; i< 10; i++){
		//ptr arythmatic
		// or *(x+i) = i;
		x[i] = i;
	}
	
}
