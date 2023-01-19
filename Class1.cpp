#include <iostream>
#include <string>
using namespace std;

int main() {
	//Initializer of user inputed score
	int totalScore;

	//output and input to user
	cout << "Enter a Integer and then a punctiation character: ";
	cin >> totalScore;


	if (totalScore >= 900)
		cout << "You have received an A" << endl;
	else if (totalScore >= 800)
		cout <<  "You have received an B" << endl;
	else if (totalScore >= 700) 
		cout <<"You have received an C" << endl;
	else if (totalScore >= 600) 
		cout << "You have received an D" << endl;
	else
		cout << "You received an F" << endl;

}



