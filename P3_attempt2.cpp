#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int LOWER_LIMIT = 1;
int UPPER_LIMIT = 100;

void getUserResponseToGuess(int, char&);
void playOneGame();
int getMidpoint(int, int);


/* Given Code */
int main() {
    char response;

    cout << "Ready to play (y/n)? ";
    cin >> response;
    while (response == 'y') {
        playOneGame();
        cout << "Great! Do you want to play again (y/n)? ";
        cin >> response;
    }
}
/* --End of Given Code-- */

void playOneGame() {
    int guess = 50;
    char result = 'I';

    //prompts user once per game
    cout << "Think of a number between " << LOWER_LIMIT << " and " << UPPER_LIMIT<<"." << endl;


    //asks user for input, returns the result of user questions
    getUserResponseToGuess(guess, result);

}

void getUserResponseToGuess(int guess, char& result) {
    int lastGuess = guess;
    int low;
    int high;

        low = LOWER_LIMIT;
        high = UPPER_LIMIT;

    while (result != 'c' && result != 'C') {//loop will end when user inputs upper or lower case of c
        //prompts user for input and output message
        cout << "My guess is " << guess << ". Enter 'l' if your number is lower, 'h' if it is higher, 'c' if it is correct: ";
        cin >> result;

        //win condition 
        //Only useful when someone enters a wrong character 
        if (result == 'c' || result == 'C') {

        }

        else if (result == 'l') {
            //changes the highest value to previous guess
            high = guess +1;
            guess = getMidpoint(low, guess-1);
            //guess = getMidpoint(low, lastGuess);
            //lastGuess = guess - 1;
        }

        //used when cin is higher than guess
        else if (result == 'h') {
            //changes the lowest value to previous guess
            low = guess-1;    //stores lowest value 
            guess = getMidpoint(guess+1, high);
            //guess = getMidpoint(lastGuess, high);
            //lastGuess = guess + 1;
        }

        //only if user doesn't enter a lower case, or unknown character
        //is never called if all data is inputed correctly 
        else {
            cout << "Please enter a lower case 'l', 'h', or 'c'" << endl;
        }
    }
    
}

int getMidpoint(int low, int high) {
    return (high + low) / 2 ;
}