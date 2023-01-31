#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void drawHorizontalLine(int);
void drawVerticalLine(int);
//--Instructor Code
//void draw2VerticalLines(int numRows, int numSpaces);
//void draw2HorizontalLines(int numXs);
//void drawOneRow(int numSpaces);
void getDimensions(int& width,int& height);
void drawBox(int ,int);

int main() {

	char symbol = 'X';
	int width;
	int height;

	getDimensions( width,  height );
	drawBox(width, height);

	/*
	cout << "Enter the width of the magical box: ";
	cin >> width;
	cout << "Enter the height of the magical box: ";
	cin >> height;

//--Instructor Code
//void draw2HorizontalLines(width);
//void draw2VerticalLines(height -2, height -2);
//void drawOneRow(width);



	drawHorizontalLine(width);
	for (int i = 0; i < height; i++)
		drawVerticalLine(width);
	drawHorizontalLine(width);
*/
}
void getDimensions(int & width, int & height) {

	cout << "Enter the width of the magical box: ";
	cin >> width;
	cout << "Enter the height of the magical box: ";
	cin >> height;
}
void drawBox(int width, int height) {
	drawHorizontalLine(width);
	for (int i = 0; i < height-2; i++)
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


/* --Instructors Code --

 void draw2VerticalLines(int numRows, int numSpaces){

	int count;
	
	for(rowCount


 }
void draw2HorizontalLines(int numXs){
	int count;

	for(count = 0; count < numXs; count++){
		cout<<"X";
	}
	cout<<endl;

}
void drawOneRow(int numSpaces){


}
 
 
 
 
 */
 


 
 
