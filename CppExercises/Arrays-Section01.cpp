#include <iostream>
#include <string>

using namespace std;

int main() {

	// Arrays
	// not using arrays
	int num1 = 2, num2 = 4, num3 = 6, num4 = 2, num5 = 8; // imagine doing this with 1000 numbers
	
	cout << (num1 + num2 + num3 + num4 + num5)/5 << endl;

	// using arrays
	// data type, name of array, size of the array inside [ ]
	int numbers[5]; // definition of an array called numbers, size 5, type int
	// index range for numbers is 0, 1, 2, 3, 4
	// 5 or more will cause an out-of-bound error
	// if you use a negative number for the index also same error
	// array numbers is empty
	// 0. NULL <- everything starts with a NULL (which means it does not have a value)
	// 1. 6
	// 2. 5
	// 3. 0
	// 4. 7

	numbers[1] = 6;
	numbers[2] = 5;
	numbers[3] = 0;
	numbers[4] = 7;

	// the loop condition goes up to the last item of the array + 1
	numbers[0] = 0;
	for (int i = 0; i < 5; i++) {
		numbers[0] += numbers[i]; // you get a weird ouput because numbers[0] = NULL
	}
	// numbers at index 0 because we used it to sum
	cout << numbers[0] << endl;


	system("pause");
	return 0;
}
