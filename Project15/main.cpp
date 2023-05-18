//The function must be recursiveand must not call any 
//other functions except ispunct(), isspace(), and toupper() (described below).

//In determining whether a string is a palindrome, 
//this function must consider uppercaseand lowercase letters 
//to be the sameand ignore punctuation charactersand whitespace characters.
//You must not modify the argument in any way or 
//make a copy of the argument to accomplish this.
//The simplest way to handle uppercase / lowercase 
//issues is to make everything uppercase on the fly, 
//right at the instant that you are comparing the two characters.




//They are ispunct(char), 
//a bool function which returns true if its argument 
//is a punctuation mark and false otherwise, isspace(char), 
//which returns true if its argument is a whitespace character and false otherwise, 
//and toupper(char), which returns the uppercase equivalent 
//of its argument(without changing the argument itself).

#include "mystring.h"
#include <fstream>
#include <cctype>      // for toupper()    
#include <cassert>
#include <iostream>
using namespace std;
using namespace cs_mystring;


// added for Prokect 15
bool isAPalindrome(MyString& inString, int first, int last);



int main(){
    
    MyString s;
	MyString release = "quit";

	//asks user for info
	cout << "Enter a string: ";

	// reads until endline whitespace '\n'
	s.read(cin, '\n');
	cout << s;

	while(s!=release){
		
		if (isAPalindrome(s, 0, s.length() - 1))
			cout << " is a Palindrome " << endl;
		else
			cout << " is not a Palindrome " << endl;

		cout << "Enter a string: ";
		s.read(cin, '\n');
		if (s != release)
			cout << endl << s;

	}

}


// This function returns true if the argument string is a palindrome.It returns false if it is not.
// A palindrome is a string that is spelled the same as its reverse.
// For example "abba" is a palindrome.So are "hannah" and "abc cba" and "b" and "n$aa$n" and "" (empty string).
// Do not get confused by white space characters, punctuation, or digits.They should not get any special treatment. 
// "abc ba" is not a palindrome.It is not identical to its reverse. (Note, this may be different from other definitions of palindrome.
// The reason for choosing this definition is actually to make the function easier : 
// you can just write the code without ever thinking about whether the characters are letters or not.
// If you had to skip over spaces and other non - letters, the code would be more complex.)
// Your function should not be case sensitive.For example, "aBbA" is a palindrome.
// You must solve this problem "in place", i.e., without creating a second array.
// As a result, calling your reverse() function from this function isn't going to help.
bool isAPalindrome(MyString& inString, int first, int last) {

	//Base Case
	//Scenario 1, no input, last is -1, first is 0
	//Scenario 2, 1 char, last is 0, first is 0
	if (first >= last)
		return true;


	//Base Case checking the middle case
	// even
	if (inString.length() % 2 == 0) { //even case
		if (first == inString.length()/2 && last == inString.length() / 2 + 1 && tolower(inString[first]) == tolower(inString[last])) {
			return true;
		}
	}

	//Base Case checking the middle case
	// odd
	if (inString.length() % 2 != 0) { //odd case
		if (first == inString.length()/2-1 && last == inString.length()/2 + 1 && tolower(inString[first]) == tolower(inString[last])) {
			return true;
		}
	}

	//passes over spaces and gets rid of them
	if (isspace(inString[first]) ) {
		return isAPalindrome(inString, first + 1, last);
	}

	//passes over spaces and gets rid of them
	if (isspace(inString[last])) {
		return isAPalindrome(inString, first + 1, last);
	}

	// tolower returns the lower case of the character
	// adhears to case sensitivity without changing the actual string
	// tolower returns the lower case of the character (adhears to case sensitivity without changing the actual string)
	// could also use toupper instead of tolower
	if (tolower(inString[first]) == tolower(inString[last])) {
		return isAPalindrome(inString, first + 1, last - 1);
	}
	else {
		return false;
	}

}






//This function converts the c - string parameter to all uppercase.
void toupper(char* inString) {
	//index variable
	int index = 0;
	while (inString[index] != '\0') {
		//changes the character at index to upper case
		inString[index] = toupper(inString[index]);
		index++;	//increments 
	}
}






