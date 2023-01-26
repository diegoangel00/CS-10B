#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	ifstream infile;  //step 2, declare in input stream variable
	char ch;
	string filename;
	string word;
	int count = 0;

	//Asks user to enter the file name and then tries to open the file
	cout << "Enter the name of a file: ";
	cin >> filename;
	infile.open(filename);

	//alternate older version
	//infile.open(filename.c_str());

	//infile.open("myinputfile.txt");	//step 3, open the file


	//or

	//ifstream infile("myinputfile.txt");	//step 2 & 3 combined
	
	//checks to se if file is opened, if not outputs message,
	//
	if (!infile) {
		cout << "Couldn't open file" << endl;
	}
	else {
		//file.get(ch);
		infile >> word;
		while (infile) {
			count++;
			//file.get(ch);
			infile >> word;

		}

	}
	cout <<"This file has " << count << " characters." << endl;
	infile.close();	//close file

	return 0;
}