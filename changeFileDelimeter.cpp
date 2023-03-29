#include <iostream>
#include <cstring>
#include <string>
#include <fstream>

//This program looks into a file, reads reach line
//changes file end tags from _jpg to .txt
//can be used to replace a single character delimeter if it is in each line of a file 

using namespace std;

int main() {

	ifstream infile;

	//infile.open("ParkPhotos.txt");

	string filename;
	//this is used if the file name is known
	//cout << "Enter the name of the file: ";
	/* The next 2 lines can be replaces with knowing the file name, helpful to include above line */
	cin >> filename;
	infile.open(filename);

	if (!infile) {
		cout << "couldn't open file." << endl;
	}	
	else {
		//cout << "Open succes" << endl;
		//processes each line as a string
		string astring;
		//infile >> astring;

		//stores the first line into the string "astring"
		getline(infile,astring );

		//processs the file
		while (infile) {

			//change this block as neccessary
			string toChange = "_photo.jpg";
			int ind = astring.find(toChange);
			int big = toChange.size();
			string replacement = "_info.txt";
			
			
			//replaces the line of text that is toChange and change it to the replacement string
			//this should
			astring.replace(ind,big,replacement);
			cout << astring << endl;
			getline(infile, astring);
		}
	}
	return 0;
}
