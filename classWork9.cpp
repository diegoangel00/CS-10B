#include <iostream>
using namespace std;

// automatic variables == local variables
// static variables == global variables or "static" variables
// dynamic variabls

// automatic variables allocated on the stack.
// dynamic variables allocated in 
// allocate == new
// deallocate == delete


// Stack vs. Heap
int main() {
  int* intptr;
  intptr = new int;
  // 2 options calls int constructor
  // intptr = new int(392);
  int arraySize;
  
  cout<< "Enter the size of the array: ";
  cin <<arraySize;
  string* stringArray = new string[arraySize];

  
  *intptr = 392; 
  //2 ways to write this
  //*strinArray = "Nicole";
  strinArray[0] = "Nicole";
  //*(strinArray+2) = "Ryan";
  strinArray[2] = "Ryan";
  
  cout<<*intptr<<" " << *strinArray << " "
    << stringArray[0] << " " << *(stringArray+2)
    << stringArray[2] << endl;
  
  //ways tp deallocate *intptr 
  delete intptr;
  delete [] stringArray;

  //memory leak scenario
  int* ptr1 = new item;
  int* ptr2 = new item;
  *ptr2 = 44;
  *ptr1 = *ptr2;
  
  ptr1 = ptr2;
  
  //memory leak fix below
  delete ptr1;
  //deallocate before 
  ptr1 = ptr2;
  
}
