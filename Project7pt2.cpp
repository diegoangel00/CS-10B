#include <iostream>
#include <string>
using namespace std;

//Write a program that records high-score data for a fictitious game. 
// The program will ask the user to enter the number of scores,
// create two dynamic arrays sized accordingly, 
// ask the user to enter the indicated number of names and scores, 
// and then print the names and scores sorted by score in descending order.






// The user input of the namesand scores should be done in a function named readData().It should have the following signature :
void readData(string names[], int scores[], int size);







// You must also write two more functions : one to sort both arrays in descending order by score
void sortData(string names[], int scores[], int size);





// display the final list of namesand scores.
void displayData(const string names[], const int scores[], int size);


int main() {



}






void readData(string names[], int scores[], int size) {
//This function takes in an array of strings, and of scores as well as the size of these arrays.
// This functions prints out the scores and names of each of these within the array.
// It is outputted in Descending Order

	cout << "How many scores will you enter?: ";
	cin >> size;

	int people = 1;
	while (people <= size) {
		cout << "Enter the name for score #" << people << ": ";
		cin >> names[people - 1];
		cout << "Enter the score for score #" << people << ": ";
		cin >> scores[people - 1];
	}

}






void sortData(string names[], int scores[], int size) {
//This function sorts the data Descending Order
	int mximum = scores[0];
	int index = 0;
	string name = names[0];
	
	
	for (int i = 1; i < size; i++) {
		//if condition is met it will replace the highest score 
		if(score[i] > maximum) {
			score[index] = score[i];
			names[index] = names[i];
			
			maximum = score[i];
			name = names[i];
			index++;
		}
		
	}	
}






void displayData(const string names[], const int scores[], int size) {
	cout << "Top Scorers:" << endl;

	for (int i = 0; i < size; i++) {
		cout << names[i] << ": " << scores[i] << endl;
	}
}

//Expected Output

/*
How many scores will you enter?: 4
Enter the name for score #1: Suzy
Enter the score for score #1: 600
Enter the name for score #2: Kim
Enter the score for score #2: 9900
Enter the name for score #3: Armando
Enter the score for score #3: 8000
Enter the name for score #4: Tim
Enter the score for score #4: 514

Top Scorers:
Kim: 9900
Armando: 8000
Suzy: 600
Tim: 514

*/
