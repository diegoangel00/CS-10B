#include <iostream>
using namespace std;

int power(int base, int exponent);
int findSmallest(int list[], int numItem);
int findSmallest(int list[], int lo, int hi);

int main() {
	int result;
	int base, exponent;
	base = 2;
	exponent = 3;
	result = power(base, exponent);
	cout << base << " raised to the " << exponent << " is: " << result << endl;

	int list[] = { 4,6,2,9,5,9,7,3 };
	int size = 8;

	cout << "The smallest item is: " << findSmallest(list, size) << endl;
	cout << "The smallest item between "<< 2 << " and " << size-1 << " is: " << findSmallest(list, 2,6) << endl;


}


int findSmallest(int list[], int lo, int hi) {
	if (lo == hi) {
		return list[0];
	}
	else {
		return min(list[lo],
			findSmallest(list, lo + 1, hi));
	}

}

int findSmallest(int list[], int numItem) {
	if (numItem == 1) {
		return list[0];
	}
	else {
		return min(list[numItem - 1],
			findSmallest(list, numItem - 1));
	}

}

//recursion
int power(int base, int exponent) {
	
	if (exponent == 0) {
		return 1;
	}
	else {
		return base * power(base, exponent - 1 );
	}
}