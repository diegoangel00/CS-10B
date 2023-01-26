#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void drawHorizontalLine(int);
void drawVerticalLine(int);


int main() {

	char symbol = 'X';
	int width;
	int height;


	cout << "Enter the width of the magical box: ";
	cin >> width;
	cout << "Enter the height of the magical box: ";
	cin >> height;

	drawHorizontalLine(width);
	for(int i = 0;i<height;i++)
		drawVerticalLine(width);
	drawHorizontalLine(width);
}

void drawHorizontalLine(int width) {
	for (int i = 1; i <= width; i++) {
		cout << "X";
	}
	cout << endl;
}

void drawVerticalLine(int width) {
	for (int i = 1; i <= width; i++) {
		if (i == 1 || i == width)
			cout << "X";
		else
			cout << " ";
	}
	cout << endl;
}