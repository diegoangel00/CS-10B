// The goal of this script is to practice and test different character functions 
// These functions include ...
/*
int lastIndexOf(const char* inString, char target);
void reverse(char* inString);
int replace(char* inString, char target, char replacementChar);
bool isPalindrome(const char* inString);
void toupper(char* inString);
int numLetters(const char* inString);
*/
// These functions along with test scenarios that are within main help show what these functions limits are 
// Majority of these functions are o(n) length besides isPalindrome that is about O(n^2) 
// This script only uses iostream 


#include <iostream>

using namespace std;







//functions prototypes
// This function finds the last index where the target char can be found in the string.
// it returns - 1 if the target char does not appear in the string.
//The function should be case sensitive(so 'b' is not a match for 'B').
int lastIndexOf(const char* inString, char target);








// This is function alters any string that is passed in.It should reverse the string.
// If "flower" gets passed in it should be reversed in place to "rewolf".
// For efficiency, this must be done "in place", i.e., without creating a second array.
void reverse(char* inString);








// This function finds all instances of the char 'target' in the string and replace them with 'replacementChar'.
// It returns the number of replacements that it makes.If the target char does not appear in the string it should return 0.
int replace(char* inString, char target, char replacementChar);








// This function returns true if the argument string is a palindrome.
// It returns false if it is not.A palindrome is a string that is spelled the same as its reverse.
// For example "abba" is a palindrome.So are "hannah" and "abc cba" and "b" and "n$aa$n" and "" (empty string).
bool isPalindrome(const char* inString);








// This function converts the c - string parameter to all uppercase.
void toupper(char* inString);








// This function returns the number of letters in the c - string.
int numLetters(const char* inString);








int main() {
	//last index True Cases


	//last index False Cases (result should be -1)



	//palindrome True tests (this function is not case sensitive)
	char str1[] = "abba";
	char str2[] = "hannah";
	char str3[] = "abc Cba";
	char str4[] = "b";
	char str5[] = "n$aa$n";
	char str6[] = "";
	char str7[] = "Abc cba";
	cout << "Palindomes that are true" << endl;
	cout << isPalindrome(str1) << endl;
	cout << isPalindrome(str2) << endl;
	cout << isPalindrome(str3) << endl;
	cout << isPalindrome(str4) << endl;
	cout << isPalindrome(str5) << endl;
	cout << isPalindrome(str6) << endl;
	cout << isPalindrome(str7) << endl;

	//last index of Test
	cout << "lastIndexOf" << endl;
	cout << lastIndexOf(str2,'n') << endl;
	cout << lastIndexOf(str4, 'n') << endl;
	cout << lastIndexOf(str7, 'A') << endl;
	cout << lastIndexOf(str7, 'a') << endl;

	//replacement test
	cout << "Replacement Test" << endl;
	cout << "Replace $ in : " << str5 << " with s. Replaced "<< replace(str5,'$','s') <<" times, new word"<< str5 << endl;
	cout << "Replace A in : " << str7 << " with a," << replace(str7, 'A', 'a') << " times, new word" << str7 << endl;



	cout << "Palindomes that are False" << endl;
	//palindrome False Tests
	char strf1[] = "abal";
	char strf2[] = "hann";
	char strf4[] = "n$aasn";
	char strf5[] = "tp";
	char strf6[] = "NANN";
	char strf7[] = "Safety";
	char strf8[] = "Hellow World";
	cout << isPalindrome(strf1) << endl;
	cout << isPalindrome(strf2) << endl;
	cout << isPalindrome(strf4) << endl;
	cout << isPalindrome(strf5) << endl;
	cout << isPalindrome(strf6) << endl;


	// reverse order 
	//cout<< "The reverse of "<< 
}






// This function finds the last index where the target char can be found in the string.
// Returns - 1 if the target char does not appear in the string.
// The function should be case sensitive(so 'b' is not a match for 'B').
int lastIndexOf(const char* inString, char target) {
	//index variable
	int index = 0;
	int finalresult = -1;	// variable to be returned at end of function (if never changed will return -1)
	while (inString[index] != '\0') {
		// operator checks to see if character at index is the same as the target char that will be replaced
		// char is replaced by the passed char within replacemnetChar
		if (inString[index] == target)
			finalresult = index;

		index++;	//increments 
	}

	//should be an integer -1 or 0 < 
	return finalresult;
}







// This is function alters any string that is passed in.
// It should reverse the string.If "flower" gets passed in it should be reversed in place to "rewolf".
// For efficiency, this must be done "in place", i.e., without creating a second array.
void reverse(char* inString) {
	//index variable
	int index = 0;
	int lastIndex = numLetters(inString);
	char storage;	//used for storing variables
	for (int i = 0;i < numLetters(inString)/2; i++) {
		storage = inString[i];
		inString[i] = inString[lastIndex];
		inString[lastIndex] = storage;
	}


}







// This function finds all instances of the char 'target' in the string and replace them with 'replacementChar'.
// It returns the number of replacements that it makes.
// If the target char does not appear in the string it should return 0.
int replace(char* inString, char target, char replacementChar) {
	//index variable
	int index = 0;
	int result = 0;	//# of chars changed if never changed then returns 0
	while (inString[index] != '\0') {
		// operator checks to see if character at index is the same as the target char that will be replaced
		// char is replaced by the passed char within replacemnetChar
		if (inString[index] == target) {
			inString[index] = replacementChar;
			result++;
		}
		
		index++;	//increments index/counter variable
	}
	return result;

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
bool isPalindrome(const char* inString) {

	//edge cases that are palindromes (specific for this assignment)
	if (inString[0] == NULL)
		return true;
	if (inString[1] == NULL)
		return true;

	int i = 0;	//starting index of the char array
	int j;	// this is populated in either for loop

	//worst case scenario there is no pairs so efficiency would be O(n)
	while (inString[i] != '\0') {

		// tolower returns the lower case of the character
		// adhears to case sensitivity without changing the actual string
		// could also use toupper instead of tolower
		//checking if there are 2 cahracters that match (maybe a palindrome)
		if (tolower(inString[i]) == tolower(inString[i + 1])) {
			// initializes j to i and for this case changes i to i + 1. Then traverses until the edges of the string 
			// in this case the value of the center character does matter, 
			// second case below takes care of middle character not matching
			j = i;
			i = i + 1;

			//once it finds characters that are possible palindromes it checks the rest of the values
			//has to check index 0
			//worst case would be O(n), where n = strlnegth()/2
			while (j != -1) {
				//checking the cases until 
				if (tolower(inString[i]) == tolower(inString[j])) {
					i++;
				}

				//if there are no pairs at this point then it is not a palindrome
				else {
					return false;
				}

				//decrements j (until it is 0)
				j--;
				//final condition
				if (j == 0 && inString[i+1] == NULL && tolower(inString[i]) == tolower(inString[j])) {
					return true;
				}
			}
		}


		// tolower returns the lower case of the character (adhears to case sensitivity without changing the actual string)
		// could also use toupper instead of tolower
		if (tolower(inString[i]) == tolower(inString[i + 2])) {
			// initializes j to i and for this case changes i to i + 2 and skips the center term.
			// in this case the value of the center character does not matter 
			// if the characters to the right and left are matching and are the same length.
			j = i;
			i = i + 2;
			//once it finds characters that are possible palindromes it checks the rest of the values
			//has to check index 0
			while (j != -1) {
				if (tolower(inString[i]) == tolower(inString[j])) {
					i++;
				}
				else {
					return false;
				}

				//decrements j (until it is 0)
				j--;

				//final condition 
				// If the first index equals the last index, then returns true
				// j == 0 && inString[i + 1] == NULL This statement is checking that they are both the last characters checking and that they are no 
				// more. EX. NANN, Triggers this case but would end and return true without inString[i + 1] == NULL
				// NANN case should return FALSE
				if (j == 0 && inString[i + 1] == NULL && tolower(inString[i]) == tolower(inString[j])) {
					return true;
				}
			}
		}
		// increments i until there is a pair 
		// inner while will take over after the first pair 
		i++;
	}

	//if there are no cahracters that are the same it returns false
	return false;
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






//This function returns the number of letters in the c - string.
int numLetters(const char* inString) {
	//counter variable
	int result = 0;
	while (inString[result] != '\0') {
		result++;	//increments 
	}
	return result;
}