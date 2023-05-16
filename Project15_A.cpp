#include <iostream>
#include <cstring>

using namespace std;

//Write a recursive function named reverseWithinBounds that has an argument that is an array 
//of charactersand two arguments that are bounds on array indices.The function should reverse 
//the order of those entries in the array whose indices are between the two bounds(including the bounds).
char reverseWithinBounds(char reverse[], int starting, int ending);



//Embed the function in a programand test it.After you have fully debugged this function,
//define another function named reverseCString that takes a single argument that is a 
//C stringand modifies the argument so that it is reversed.
//This function will include a call to the recursive definition you did for the first part of this project,
//and need not be recursive.Embed this second function in a programand test it.
//Turn in only this final result.
void reverseCString(char *stringArray);

int main() {

	char test1[10] = {'A','B','C','D','E','\n'};
	int begin = 0;
	int last = 4;

	int i = 0;
	while (test1[i] != '\n'){
		cout << test1[i];
		i++;
	}
	cout << endl;

	reverseWithinBounds(test1,begin,last);


	//cstring checks
	char str1[7] = "Earth";
	char str2[20] = "Earthlings";
	char str3[5] = "Mars";

	cout << "Original: "<< str1 << endl;
	reverseCString(str1);
	cout << "Reverse: " << str1<<endl;

	cout << "Original: "<< str2 << endl;
	reverseCString(str2);
	cout << "Reverse: " << str2 << endl;

	cout << "Original: " << str3 << endl;
	reverseCString(str3);
	cout << "Reverse: " << str3 << endl;

}

//reverse the order of a char array
char reverseWithinBounds(char reverse[], int starting, int ending) {

	//This was the original without recursion
	//while (starting != ending) {
	//	char temp = reverse[starting];
	//	reverse[starting] = reverse[ending];
	//	reverse[ending] = temp;

	//	starting++;
	//	ending--;
	//}



	//Base Case 1
	if (starting == ending || (ending - starting) == 1 ) {
		swap(reverse[starting], reverse[ending]);
		return reverse[starting];
	}
	else{
		swap(reverse[starting], reverse[ending]);
		return reverseWithinBounds(reverse, starting+1 , ending-1 );
	}



}
//reverses a cstring by calling the above recursive function
void reverseCString(char* stringArray) {
	
	reverseWithinBounds(stringArray, 0, strlen(stringArray) -1);
	
}