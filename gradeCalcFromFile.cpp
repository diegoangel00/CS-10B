#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
using namespace std;

int main() {

    /* TODO: Declare any necessary variables here. */
    double midterm1Avg = 0.00; 
    double midterm2Avg = 0.00;
    double gradeAvg = 0.00;
	int numPeople = 0;
    /* TODO: Read a file name from the user and read the tsv file here. */


    /* TODO: Compute student grades and exam averages, then output results to a text file here. */
	ifstream infile;
	string filename;
	ofstream outfile;
	//this is used if the file name is known
	//cout << "Enter the name of the file: ";
	//infile.open("StudentInfo.tsv");
	outfile.open("report.txt");
	cin >> filename;
	infile.open(filename);

	if (!infile) {
		cout << "couldn't open file." << endl;
	}
	else {
		//cout << "Open succes" << endl;
		string LastName;
		string FirstName;
		float Midterm1score;
		float Midterm2score;
		float Finalscore;
		char grade;
		//string astring;
		//infile >> astring;

		//reads in data from tsv file, speciffically formatted 
		infile >> LastName>>FirstName>>Midterm1score>>Midterm2score>>Finalscore;

		//this assumes that since the file is being read that there is atleast one person 
		//int numPeople = 1;

		//processs the file
		while (infile) {


			//stores the averages
			midterm1Avg = midterm1Avg + Midterm1score;
			midterm2Avg = midterm2Avg + Midterm2score;
			gradeAvg = gradeAvg + Finalscore;
         if(90 <= (Midterm1score + Midterm2score + Finalscore)/3)
            grade = 'A';
         else if(80 <= (Midterm1score + Midterm2score + Finalscore)/3 && (Midterm1score + Midterm2score + Finalscore)/3 < 90)
            grade = 'B';
         else if(70 <= (Midterm1score + Midterm2score + Finalscore)/3 && (Midterm1score + Midterm2score + Finalscore)/3 < 80)
            grade = 'C';
         else if(60 <= (Midterm1score + Midterm2score + Finalscore)/3 && (Midterm1score + Midterm2score + Finalscore)/3 < 70)
            grade = 'D';
         //(x < 60)
         else
            grade = 'F';

			//replaces the line of text that is toChange and change it to the replacement string
			//this should
			cout << LastName << "   "<< FirstName<<"  "<< Midterm1score<<" "<< Midterm2score<<" "<<Finalscore<<"  "<<grade << endl;
			outfile << LastName << "\t"<< FirstName<<"\t"<< Midterm1score<<"\t"<< Midterm2score<<"\t"<<Finalscore<< "\t" <<grade << endl;
			infile >> LastName >> FirstName >> Midterm1score >> Midterm2score >> Finalscore;
			numPeople++;	//increments the # of people for the average

		}
		//divides the summation of the scores to get the average 
		midterm1Avg =  midterm1Avg / numPeople;
		midterm2Avg = midterm2Avg / numPeople;
		gradeAvg = gradeAvg / numPeople;
		//fixed is decimal point
		cout <<setprecision(2) << fixed << "Averages: midterm1 " << midterm1Avg << ", midterm2 " << midterm2Avg << ", final " << gradeAvg << endl<<endl;
		outfile <<setprecision(2) << fixed <<endl<< "Averages: midterm1 " << midterm1Avg << ", midterm2 " << midterm2Avg << ", final " << gradeAvg << endl;

	}
	return 0;
}

/*
Grading Scheme:
A: 90 =< x
B: 80 =< x < 90
C: 70 =< x < 80
D: 60 =< x < 70
F: x < 60
*/

// Last Name, First Name, Midterm1 score, Midterm2 score, and the Final score of a student
// How Delimeted file
/*
* 
* Input from file
Barrett    Edan    70  45  59
Bradshaw    Reagan  96  97  88
Charlton    Caius   73  94  80
Mayo    Tyrese  88  61  36
Stern    Brenda  90  86  45
the file report.txt should contain:
//export after program is run
Barrett    Edan    70  45  59  F
Bradshaw    Reagan  96  97  88  A
Charlton    Caius   73  94  80  B
Mayo    Tyrese  88  61  36  D
Stern    Brenda  90  86  45  C
Averages: midterm1 83.40, midterm2 76.60, final 61.60
*/
