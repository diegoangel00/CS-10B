#pragma once
#include <cstdlib>

template <class T>
class MyVector {
	public:
		//std::size_t is a provided function
		typedef std::size_t size_type;
		// originally was 
		// typedef int value_type;
		typedef T value_type;
		MyVector(size_type inSize = 0, const value_type & inValue = value_type());
		size_type size() const;
		size_type capacity() const;
		value_type at(size_type i) const;
		void push_back(const value_type& insertMe);
	private:
		value_type* items;
		size_type mSize;
		size_type mCapacity;
};

#include "myvector.cpp"


//place the template prefix before the class declaration and before each member function definition
// that occurs outside the class declaration.

// step 2. place a <T> after each occurance of the lass name that ocurs outside the class declaration 

// step 3. replace each occurance of the original with type "T"

// step 4. Outside the scope of the class, add the kayword "typename" before any use of a type that 
// is defined inside the class.

// step 5. 

// a. remove the #include "x.h" from the tpo of the implementation file
// b. add #include "x.cpp" to the bottom of the header file.
// c.remove the implementation file from the project.
// d. Eliminate any using directivess in the implementation file

// step 6. 

// some compilers require default parameters to be in both the prototype and the function header.