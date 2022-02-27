#ifndef itVectorH
#define itVectorH
#include <iostream>
#include <stdlib.h>
#include <stdarg.h>
#include <initializer_list>

template<typename vectorType>
class itVector {
private:
	int numOfElements = 0;
	int currentNumOfElements = 0;
	vectorType* array;
	bool lastOperation = false;
	void allocateMemory();
	void removeLast();

public:
// ---------------------------------------------------------------------------------------
// CONSTRUCTORS
	itVector();
	itVector(int num);
	itVector(vectorType elementsValue, int num);
	itVector(std::initializer_list<vectorType> elements);
// ---------------------------------------------------------------------------------------

// OPEAROT OVERLOADS
	vectorType& operator[](int index);

// ---------------------------------------------------------------------------------------

// STACK METHODS
	void push(vectorType newElement);
	vectorType peek();
	vectorType pop(); 

// ---------------------------------------------------------------------------------------

// SETTERS AND GETTERS
	int getLenght();
	void setElement(vectorType& element, int index);
	vectorType& getElement(int index);
	bool getLastOperationStatus();
};

#include "itVector.hpp"
#endif



