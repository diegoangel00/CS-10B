//Arrays 
#include <iostream>
using namespace std;

const int ARRAY_SIZE = 100;

//Functions
void readNumbers(int list[ARRAY_SIZE],int &);
int findSmallest(const int list[ARRAY_SIZE],int);
void printNumbersExceptSmallest(const int list[ARRAY_SIZE],int, int);

int main() {
	int smallest;
	int numItems;
	int list[ARRAY_SIZE];

	readNumbers(list,numItems);
	smallest = findSmallest(list,numItems);
	printNumbersExceptSmallest(list,smallest,numItems);
	cout << endl;
}
void readNumbers(int list[ARRAY_SIZE],int& numItems) {
	int number;
	int counter = 0;
	cout << "Enter a number(negative number to quit):";
	cin >> number;
	while (number >= 0 && counter < ARRAY_SIZE) {
		list[counter] = number;
		counter++;
		if (counter < ARRAY_SIZE) {
			cout << "Enter a number(negative number to quit):";
			cin >> number;

		}
		else {
			cout << "The array is now full." << endl;
		}

	}
	numItems = counter;
	
}
int findSmallest(const int list[ARRAY_SIZE], int numItems) {
	int smallest = list[0];
	for (int i = 1; i < numItems; i++) {
		if (smallest > list[i])
			smallest = list[i];

	}


	return smallest;
}
void printNumbersExceptSmallest(const int list[ARRAY_SIZE],int smallest,int numItems) {
	int counter = 0;
	for (int i = 0; i < numItems; i++) {
		if (list[i] != smallest)
			cout << list[i] << " ";

	}
	cout << endl;

}