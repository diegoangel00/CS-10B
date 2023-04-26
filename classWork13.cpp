#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int ARRAY_SIZE = 25;

template <class T>
int indexOfSmallest(const T list[], int startingIndex, int numItems);

template <class T>
void sort(T list[], int numItems);

int main() {

	srand(static_cast<unsigned>(time(nullptr)));

	int list[ARRAY_SIZE];
	int numItems;

	for (int i = 0; i < ARRAY_SIZE; i++) {
		list[i] = rand() % 1000;
	}
	for (int i = 0; i < ARRAY_SIZE; i++) {
		cout << list[i] << " ";
	}
	cout << endl;

}

//convention is to use Capitol T
template <class T>
//original
//void sort(int list[], int numItems) {

void sort(T list[], int numItems) {
	for (int count = 0; count < numItems - 1; count++) {
		swap(list[indexOfSmallest(list, count, numItems)], list[count]);
	}
}

//original
//int indexOfSmallest(const int list[], int startingIndex, int numItems) {
template<class T>
int indexOfSmallest(const T list[], int startingIndex, int numItems) {
	int targetIndex = startingIndex;

	for (int count = startingIndex + 1; count < numItems; count++) {
		if (list[count] < list[targetIndex]) {
			targetIndex = count;
		}

	}
	return targetIndex;
}