//#include "itVector.h"

// ***************************************************************************************
// PRIVATE METHODS
// ***************************************************************************************

// ---------------------------------------------------------------------------------------
// HELPER METHODS
template<typename vectorType>
void itVector<vectorType>::allocateMemory() {
	lastOperation = false;

	if (array == NULL) return;

	if (currentNumOfElements == 0) {
		free(array);
		lastOperation = true;
		return;
	}

	if (currentNumOfElements > numOfElements) numOfElements++;
	else if (currentNumOfElements < numOfElements) numOfElements--;

	vectorType* tmp = (vectorType*)realloc(array, numOfElements * sizeof(vectorType));
	if (tmp == NULL) return;

	array = tmp;
	lastOperation = true;
}

template<typename vectorType>
void itVector<vectorType>::removeLast() {
	lastOperation = false;

	if (currentNumOfElements == 0) return;

	currentNumOfElements--;
	allocateMemory();

	lastOperation = true;
}
// ---------------------------------------------------------------------------------------
// ***************************************************************************************

// ***************************************************************************************
// PUBLIC METHODS
// ***************************************************************************************

// ---------------------------------------------------------------------------------------
// CONSTRUCTORS
template<typename vectorType>
itVector<vectorType>::itVector() {
	numOfElements = 1;
	currentNumOfElements = 1;


	array = (vectorType*)malloc(numOfElements * sizeof(vectorType));
	if (array == NULL) return;
}

template<typename vectorType>
itVector<vectorType>::itVector(int num) {
	numOfElements = num;
	currentNumOfElements = num;

	array = (vectorType*)malloc(numOfElements * sizeof(vectorType));
	if (array == NULL) return;
}

template<typename vectorType>
itVector<vectorType>::itVector(vectorType elementsValue, int num) {
	numOfElements = num;
	currentNumOfElements = num;

	array = (vectorType*)malloc(numOfElements * sizeof(vectorType));
	if (array == NULL) return;
	for (int i = 0; i < numOfElements; i++) {
		array[i] = elementsValue;
	}
}
template<typename vectorType>
itVector<vectorType>::itVector(std::initializer_list<vectorType> elements) {
	numOfElements = elements.size();
	currentNumOfElements = elements.size();;

	array = (vectorType*)malloc(numOfElements * sizeof(vectorType));
	if (array == NULL) return;
	int i = 0;
	for (auto element : elements) {
		array[i] = element;
		i++;
	}
}
// ---------------------------------------------------------------------------------------

// OPEAROT OVERLOADS
template<typename vectorType>
vectorType& itVector<vectorType>::operator[](int index) {
	return array[index];
}
// ---------------------------------------------------------------------------------------

// STACK METHODS
template<typename vectorType>
void itVector<vectorType>::push(vectorType newElement) {
	lastOperation = false;

	currentNumOfElements++;
	allocateMemory();

	if (array == NULL) return;
	array[numOfElements - 1] = newElement;

	lastOperation = true;
}

template<typename vectorType>
vectorType itVector<vectorType>::peek() {
	lastOperation = false;
	
	if (currentNumOfElements == 0) return{};
	if (array == NULL) return {};
	
	lastOperation = true;
	return array[currentNumOfElements - 1];
}

template<typename vectorType>
vectorType itVector<vectorType>::pop() {
	lastOperation = false;
	
	vectorType lastElement = peek();
	if (!lastOperation) return{};

	removeLast();

	lastOperation = true;
	return lastElement;
}
// ---------------------------------------------------------------------------------------

// SETTERS AND GETTERS
template<typename vectorType>
bool itVector<vectorType>::getLastOperationStatus() {
	return lastOperation;
}

template<typename vectorType>
int itVector<vectorType>::getLenght() {
	return currentNumOfElements;
}

template<typename vectorType>
void itVector<vectorType>::setElement(vectorType& element, int index) {
	array[index] = element;
}

template<typename vectorType>
vectorType& itVector<vectorType>::getElement(int index) {
	return array[index];
}
// ---------------------------------------------------------------------------------------
// ***************************************************************************************
