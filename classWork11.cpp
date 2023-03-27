#include "FeetInches.h"
#include <iostream>
#include<complex>

using namespace std;
using namespace std::complex_literals;
int main() {
	FeetInches f1, f2(3), f3(4, 7);

	//f1 = f2.addedTo(f3);
	f1 = f2 + f3;

	
	cout << f2 << " plus " << f3 << "equals " << f1 << endl;
	
	// We cannot overload an operator as a member function if the left operand is not
	//an object of the class.
	
	// A friend function is only required when we want to allow the left operand to be 
	// something other than an object of the class.
	
	cout<< f1++ << endl;
	cout<< ++f1 << endl;
	cout<< f1 << endl;
	
	f1 = f3 + i;
	cout << " f1 is now " << f1 << endl;
	
	
	
	f2.print();
	cout << " plus ";
	f3.print();
	cout << " equals ";
	f1.print();
	
	int p = 9;
	double t = 1.2;

    //complex<double> i(0.0, 1.0);

	//double complex c = 1.0 + 3.0i;

	cout << endl;
	//cout << i << endl;
	//i = i*i;
	//post operator
	(++f1).print();
	
	cout << endl;
	cout << p++ << " and " << p << endl;
	//cout << i << " and " << i << endl;
	cout << t++ << " and " << t << endl;
}
