#include <iostream>
using namespace std;

void printVertical(int num);


//tail recursion

int main() {
	printVertical(9746);
}


void printVertical(int num) {
	if (num < 10) {
		cout << num << endl;
	}
	else {
		printVertical(num / 10);
		cout << num % 10 << endl;
	}


	
}