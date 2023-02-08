#include <iostream>

using namespace std;


void readNumbers(int list[], int &);
void reverseOrder(int list[], int);
int indexOfSmallest(const int list[], int, int);
void sort(int list[], int);
void printNumber(const int list[], int);

const int ARRAY_SIZE=10;

int main() {
	int numItems;
	int list[ARRAY_SIZE];

	readNumbers(list, numItems);
    sort(list, numItems);
	reverseOrder(list, numItems);
	printNumber(list, numItems);
}

void readNumbers(int list[], int& numItems)
{
    int number, count;

    cout << "Enter a number (negative number to quit): ";
    cin >> number;

    count = 0;
    while ((number >= 0) && (count < ARRAY_SIZE)) {
        list[count] = number;
        count++;
        if (count < ARRAY_SIZE) {
            cout << "Enter a number (negative number to quit): ";
            cin >> number;
        }
        else {
            cout << "the array is now full." << endl;
        }
    }
    numItems = count;
}

int indexOfSmallest(const int list[], int numItems, int ind) {
    int smallest = ind;
    for (int i = ind + 1; i < numItems; i++) {
        if (list[smallest] > list[i])
            smallest = i;
    }
    return smallest;
}

void sort(int list[], int numItems) {
    //int smallest = list[0];
    for(int i = 0;i<numItems-1;i++){
        swap(list[i], list[indexOfSmallest(list,numItems,i)]);
    }

}


void reverseOrder(int list[], int numItems) {
	int backCount = numItems - 1;
	int forwardCount = 0;
	while (forwardCount < backCount) {
        swap(list[forwardCount], list[backCount]);
        forwardCount++;
        backCount--;
	}

}
void printNumber(const int list[], int numItems) {
	for (int i = 0; i < numItems; i++) {
		cout << list[i] << " ";
	}
    cout << endl;
}