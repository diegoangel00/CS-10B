#include <iostream>

using namespace std;

//functions prototypes
// This function finds the last index where the target char can be found in the string.
// it returns - 1 if the target char does not appear in the string.
//The function should be case sensitive(so 'b' is not a match for 'B').
int lastIndexOf(const char* inString, char target);


// This is function alters any string that is passed in.It should reverse the string.If "flower" gets passed in it should be reversed in place to "rewolf".For efficiency, this must be done "in place", i.e., without creating a second array.
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



	//palindrome True tests
	char str1[] = "abba";
	char str2[] = "hannah";
	char str3[] = "abc cba";
	char str4[] = "b";
	char str5[] = "n$aa$n";
	char str6[] = "";
	//char str7[] = "Abc cba";
	cout << isPalindrome(str1) << endl;
	cout << isPalindrome(str2) << endl;
	cout << isPalindrome(str3) << endl;
	cout << isPalindrome(str4) << endl;
	cout << isPalindrome(str5) << endl;
	cout << isPalindrome(str6) << endl;
	
	/*
	//palindrome False Tests
	char strf1[] = "abal";
	char strf2[] = "hann";
	char strf3[] = "abCba";
	char strf4[] = "n$aasn";
	char strf5[] = "tp";
	cout << isPalindrome(strf1) << endl;
	cout << isPalindrome(strf2) << endl;
	cout << isPalindrome(strf3) << endl;
	cout << isPalindrome(strf4) << endl;
	cout << isPalindrome(strf5) << endl;
	//cout << isPalindrome(strf6) << endl;
	*/


}
// This function finds the last index where the target char can be found in the string.it returns - 1 if the target char does not appear in the string.The function should be case sensitive(so 'b' is not a match for 'B').
int lastIndexOf(const char* inString, char target) {
	int result = 0;


	return result;

}




// This is function alters any string that is passed in.It should reverse the string.If "flower" gets passed in it should be reversed in place to "rewolf".For efficiency, this must be done "in place", i.e., without creating a second array.
void reverse(char* inString) {



}


// This function finds all instances of the char 'target' in the string and replace them with 'replacementChar'.It returns the number of replacements that it makes.If the target char does not appear in the string it should return 0.
int replace(char* inString, char target, char replacementChar) {
	int result = 0;


	return result;


}




//This function returns true if the argument string is a palindrome.It returns false if it is not.A palindrome is a string that is spelled the same as its reverse.For example "abba" is a palindrome.So are "hannah" and "abc cba" and "b" and "n$aa$n" and "" (empty string).
// Do not get confused by white space characters, punctuation, or digits.They should not get any special treatment. "abc ba" is not a palindrome.It is not identical to its reverse. (Note, this may be different from other definitions of palindrome.
// The reason for choosing this definition is actually to make the function easier : you can just write the code without ever thinking about whether the characters are letters or not.If you had to skip over spaces and other non - letters, the code would be more complex.)
// Your function should not be case sensitive.For example, "aBbA" is a palindrome.
// You must solve this problem "in place", i.e., without creating a second array.
// As a result, calling your reverse() function from this function isn't going to help.
bool isPalindrome(const char* inString) {

	//edge cases that are palindromes 
	if (inString[0] == NULL)
		return true;
	if (inString[1] == NULL)
		return true;
	int i = 0;
	int j;

	//worst case scenario there is no pairs so efficiency would be O(n)
	while (inString[i] != '\0') {

		//checking if there are 2 cahracters that match (maybe a palindrome)
		if (inString[i] == inString[i + 1]) {
			j = i;
			i = i + 1;

			//once it finds characters that are possible palindromes it checks the rest of the values
			//has to check index 0
			//worst case would be O(n), where n = strlnegth()/2
			while (j != -1) {
				//checking the cases until 
				if (inString[i] == inString[j]) {
					i++;
				}

				//if there are no pairs at this point then it is not a palindrome
				else {
					return false;
				}

				//decrements j (until it is 0)
				j--;
				//final condition
				if (j == 0 && inString[i] == inString[j]) {
					return true;
				}
			}
		}



		if (inString[i] == inString[i + 2]) {
			j = i;
			i = i + 2;
			//once it finds characters that are possible palindromes it checks the rest of the values
			//has to check index 0
			while (j != -1) {
				if (inString[i] == inString[j]) {
					i++;
				}
				else {
					return false;
				}

				//decrements j (until it is 0)
				j--;
				//final condition
				if (j == 0 && inString[i] == inString[j]) {
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



}


//This function returns the number of letters in the c - string.
int numLetters(const char* inString) {
	int result = 0;


	return result;
}