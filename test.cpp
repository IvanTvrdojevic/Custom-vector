#include "itVector.h"

int main()
{
	//	-----------------------------------------------------------------------------------------------------
	//	DEFAULT CONSTRUCTOR
	std::cout << "                       DEFAULT CONSTRUCTOR" << std::endl;

	itVector<int> arr;
	arr[0] = 22;

	//	Testing push
	std::cout << "Testing push:" << std::endl;
	arr.push(1);
	std::cout << "last operation status: " << arr.getLastOperationStatus() << std::endl;
	arr.push(2);
	std::cout << "last operation status: " << arr.getLastOperationStatus() << std::endl;
	arr.push(3);
	std::cout << "last operation status: " << arr.getLastOperationStatus() << std::endl;
	arr.push(4);
	std::cout << "last operation status: " << arr.getLastOperationStatus() << std::endl;
	std::cout << "After pushing:" << std::endl;
	for (int i = 0; i < arr.getLenght(); i++) {
		std::cout << arr[i] << std::endl;
	}
	std::cout << "----------------------------------------------------------------------" << std::endl;

	//	Testing pop
	std::cout << "Testing pop:" << std::endl;
	std::cout << "popped: " << arr.pop() << std::endl;
	std::cout << "last operation status: " << arr.getLastOperationStatus() << std::endl;
	std::cout << "popped: " << arr.pop() << std::endl;
	std::cout << "last operation status: " << arr.getLastOperationStatus() << std::endl;
	std::cout << "popped: " << arr.pop() << std::endl;
	std::cout << "last operation status: " << arr.getLastOperationStatus() << std::endl;
	std::cout << "popped: " << arr.pop() << std::endl;
	std::cout << "last operation status: " << arr.getLastOperationStatus() << std::endl;

	std::cout << "After popping:" << std::endl;

	for (int i = 0; i < arr.getLenght(); i++) {
		std::cout << arr[i] << std::endl;
	}
	std::cout << "----------------------------------------------------------------------" << std::endl;

	//	Testing peek and [] overload
	std::cout << "Testing peek and [] overload:" << std::endl;
	std::cout << arr.peek() << std::endl;
	std::cout << "last operation status: " << arr.getLastOperationStatus() << std::endl;
	arr[arr.getLenght() - 1] = 3;
	std::cout << arr.peek() << std::endl;
	std::cout << "last operation status: " << arr.getLastOperationStatus() << std::endl;
	arr[arr.getLenght() - 1] = 6;
	std::cout << arr.peek() << std::endl;
	std::cout << "last operation status: " << arr.getLastOperationStatus() << std::endl;
	arr[arr.getLenght() - 1] = 4;
	std::cout << arr.peek() << std::endl;
	std::cout << "last operation status: " << arr.getLastOperationStatus() << std::endl;

	std::cout << "After peek and testing []:" << std::endl;

	for (int i = 0; i < arr.getLenght(); i++) {
		std::cout << arr[i] << std::endl;
	}

	std::cout << "----------------------------------------------------------------------" << std::endl;
	std::cout << "----------------------------------------------------------------------" << std::endl;
	std::cout << std::endl;

	//	-----------------------------------------------------------------------------------------------------
	//	ONE PARAMETER CONSTRUCTOR
	std::cout << "                       ONE PARAMETER CONSTRUCTOR" << std::endl;

	itVector<int> arr1(2);

	for (int i = 0; i < arr1.getLenght(); i++) {
		arr1[i] = 33;
	}

	//	Testing push
	std::cout << "Testing push:" << std::endl;
	arr1.push(1);
	std::cout << "last operation status: " << arr1.getLastOperationStatus() << std::endl;
	arr1.push(2);
	std::cout << "last operation status: " << arr1.getLastOperationStatus() << std::endl;
	arr1.push(3);
	std::cout << "last operation status: " << arr1.getLastOperationStatus() << std::endl;
	arr1.push(4);
	std::cout << "last operation status: " << arr1.getLastOperationStatus() << std::endl;
	std::cout << "After pushing:" << std::endl;
	for (int i = 0; i < arr1.getLenght(); i++) {
		std::cout << arr1[i] << std::endl;
	}
	std::cout << "----------------------------------------------------------------------" << std::endl;

	//	Testing pop
	std::cout << "Testing pop:" << std::endl;
	std::cout << "popped: " << arr1.pop() << std::endl;
	std::cout << "last operation status: " << arr1.getLastOperationStatus() << std::endl;
	std::cout << "popped: " << arr1.pop() << std::endl;
	std::cout << "last operation status: " << arr1.getLastOperationStatus() << std::endl;
	std::cout << "popped: " << arr1.pop() << std::endl;
	std::cout << "last operation status: " << arr1.getLastOperationStatus() << std::endl;
	std::cout << "popped: " << arr1.pop() << std::endl;
	std::cout << "last operation status: " << arr1.getLastOperationStatus() << std::endl;

	std::cout << "After popping:" << std::endl;

	for (int i = 0; i < arr1.getLenght(); i++) {
		std::cout << arr1[i] << std::endl;
	}
	std::cout << "----------------------------------------------------------------------" << std::endl;

	//	Testing peek and [] overload
	std::cout << "Testing peek and [] overload:" << std::endl;
	std::cout << arr1.peek() << std::endl;
	std::cout << "last operation status: " << arr1.getLastOperationStatus() << std::endl;
	arr1[arr1.getLenght() - 1] = 3;
	std::cout << arr1.peek() << std::endl;
	std::cout << "last operation status: " << arr1.getLastOperationStatus() << std::endl;
	arr1[arr1.getLenght() - 1] = 6;
	std::cout << arr1.peek() << std::endl;
	std::cout << "last operation status: " << arr1.getLastOperationStatus() << std::endl;
	arr1[arr1.getLenght() - 1] = 4;
	std::cout << arr1.peek() << std::endl;
	std::cout << "last operation status: " << arr1.getLastOperationStatus() << std::endl;

	std::cout << "After peek and testing []:" << std::endl;

	for (int i = 0; i < arr1.getLenght(); i++) {
		std::cout << arr1[i] << std::endl;
	}

	std::cout << "----------------------------------------------------------------------" << std::endl;
	std::cout << "----------------------------------------------------------------------" << std::endl;
	std::cout << std::endl;

	//	-----------------------------------------------------------------------------------------------------
	//	TWO PARAMETER CONSTRUCTOR
	std::cout << "                       TWO PARAMETER CONSTRUCTOR" << std::endl;

	itVector<int> arr2(2, 4);

	//	Testing push
	std::cout << "Testing push:" << std::endl;
	arr2.push(1);
	std::cout << "last operation status: " << arr2.getLastOperationStatus() << std::endl;
	arr2.push(2);
	std::cout << "last operation status: " << arr2.getLastOperationStatus() << std::endl;
	arr2.push(3);
	std::cout << "last operation status: " << arr2.getLastOperationStatus() << std::endl;
	arr2.push(4);
	std::cout << "last operation status: " << arr2.getLastOperationStatus() << std::endl;
	std::cout << "After pushing:" << std::endl;
	for (int i = 0; i < arr2.getLenght(); i++) {
		std::cout << arr2[i] << std::endl;
	}
	std::cout << "----------------------------------------------------------------------" << std::endl;

	//	Testing pop
	std::cout << "Testing pop:" << std::endl;
	std::cout << "popped: " << arr2.pop() << std::endl;
	std::cout << "last operation status: " << arr2.getLastOperationStatus() << std::endl;
	std::cout << "popped: " << arr2.pop() << std::endl;
	std::cout << "last operation status: " << arr2.getLastOperationStatus() << std::endl;
	std::cout << "popped: " << arr2.pop() << std::endl;
	std::cout << "last operation status: " << arr2.getLastOperationStatus() << std::endl;
	std::cout << "popped: " << arr2.pop() << std::endl;
	std::cout << "last operation status: " << arr2.getLastOperationStatus() << std::endl;

	std::cout << "After popping:" << std::endl;

	for (int i = 0; i < arr2.getLenght(); i++) {
		std::cout << arr2[i] << std::endl;
	}
	std::cout << "----------------------------------------------------------------------" << std::endl;

	//	Testing peek and [] overload
	std::cout << "Testing peek and [] overload:" << std::endl;
	std::cout << arr2.peek() << std::endl;
	std::cout << "last operation status: " << arr2.getLastOperationStatus() << std::endl;
	arr2[arr2.getLenght() - 1] = 3;
	std::cout << arr2.peek() << std::endl;
	std::cout << "last operation status: " << arr2.getLastOperationStatus() << std::endl;
	arr2[arr2.getLenght() - 1] = 6;
	std::cout << arr2.peek() << std::endl;
	std::cout << "last operation status: " << arr2.getLastOperationStatus() << std::endl;
	arr2[arr2.getLenght() - 1] = 4;
	std::cout << arr2.peek() << std::endl;
	std::cout << "last operation status: " << arr2.getLastOperationStatus() << std::endl;

	std::cout << "After peek and testing []:" << std::endl;

	for (int i = 0; i < arr2.getLenght(); i++) {
		std::cout << arr2[i] << std::endl;
	}

	std::cout << "----------------------------------------------------------------------" << std::endl;
	std::cout << "----------------------------------------------------------------------" << std::endl;
	std::cout << std::endl;

	//	-----------------------------------------------------------------------------------------------------
	//	INITLIALIZER LIST CONSTRUCTOR
	std::cout << "                       INITLIALIZER LIST CONSTRUCTOR" << std::endl;

	itVector<int> arr3({10, 20, 30, 40, 50, 60, 70, 80, 90});

	//	Testing push
	std::cout << "Testing push:" << std::endl;
	arr3.push(1);
	std::cout << "last operation status: " << arr3.getLastOperationStatus() << std::endl;
	arr3.push(2);
	std::cout << "last operation status: " << arr3.getLastOperationStatus() << std::endl;
	arr3.push(3);
	std::cout << "last operation status: " << arr3.getLastOperationStatus() << std::endl;
	arr3.push(4);
	std::cout << "last operation status: " << arr3.getLastOperationStatus() << std::endl;
	std::cout << "After pushing:" << std::endl;
	for (int i = 0; i < arr3.getLenght(); i++) {
		std::cout << arr3[i] << std::endl;
	}
	std::cout << "----------------------------------------------------------------------" << std::endl;

	//	Testing pop
	std::cout << "Testing pop:" << std::endl;
	std::cout << "popped: " << arr3.pop() << std::endl;
	std::cout << "last operation status: " << arr3.getLastOperationStatus() << std::endl;
	std::cout << "popped: " << arr3.pop() << std::endl;
	std::cout << "last operation status: " << arr3.getLastOperationStatus() << std::endl;
	std::cout << "popped: " << arr3.pop() << std::endl;
	std::cout << "last operation status: " << arr3.getLastOperationStatus() << std::endl;
	std::cout << "popped: " << arr3.pop() << std::endl;
	std::cout << "last operation status: " << arr3.getLastOperationStatus() << std::endl;

	std::cout << "After popping:" << std::endl;

	for (int i = 0; i < arr3.getLenght(); i++) {
		std::cout << arr3[i] << std::endl;
	}
	std::cout << "----------------------------------------------------------------------" << std::endl;

	//	Testing peek and [] overload
	std::cout << "Testing peek and [] overload:" << std::endl;
	std::cout << arr3.peek() << std::endl;
	std::cout << "last operation status: " << arr3.getLastOperationStatus() << std::endl;
	arr3[arr3.getLenght() - 1] = 3;
	std::cout << arr3.peek() << std::endl;
	std::cout << "last operation status: " << arr3.getLastOperationStatus() << std::endl;
	arr3[arr3.getLenght() - 1] = 6;
	std::cout << arr3.peek() << std::endl;
	std::cout << "last operation status: " << arr3.getLastOperationStatus() << std::endl;
	arr3[arr3.getLenght() - 1] = 4;
	std::cout << arr3.peek() << std::endl;
	std::cout << "last operation status: " << arr3.getLastOperationStatus() << std::endl;

	std::cout << "After peek and testing []:" << std::endl;

	for (int i = 0; i < arr3.getLenght(); i++) {
		std::cout << arr3[i] << std::endl;
	}
}



