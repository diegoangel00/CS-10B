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
    cout << "Think of a number between " << LOWER_LIMIT << " and " << UPPER_LIMIT << endl;

    do {//loop will end when user inputs upper or lower case of c
        
        //asks user for input, returns the result of user questions
        getUserResponseToGuess(guess, result);

    } while (result != 'c' && result != 'C');
}

void getUserResponseToGuess(int guess, char& result) {
    int lastGuess = guess;
    int low;
    int high;
    

    //initializes if result is 'I', the initial char
    //if (result == 'I') {
        low = LOWER_LIMIT;
        high = UPPER_LIMIT;
     //   guess = 50;

    //}

    cout << "Got reinit to: " << guess << endl;

    //prompts user for input and output message
    cout << "My guess is " << guess << ". Enter 'l' if your number is lower, 'h' if it is higher, 'c' if it is correct : ";
    cin >> result;

    //win condition 
    if (result == 'c' || result == 'C') {
        cout << "Awesome" << endl;

    }
       
    else if (result == 'l') {
        guess = guess - getMidpoint(low, lastGuess);

    }
        
    else if (result == 'h') {
        guess = guess + getMidpoint(lastGuess, high);
        cout << guess << endl;

    }

    //only if user doesn't enter a lower case, or unknown character
    else {
        cout << "Please enter a lower case 'l', 'h', or 'c'" << endl;
    }   

    cout << "Got reset to: "<<guess << endl;
}

int getMidpoint(int low, int high) {
    int result;

    result = (high - low) / 2;

    return result;

}