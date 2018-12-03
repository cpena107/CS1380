#include <iostream>
#include <string>

using namespace std;

int main() {

	// Array
	// not using arrays
	int num1, num2, num3, num4, num5; // imagine if you had 1000 or 10000
	num1 = 2;
	num2 = 4;
	num3 = 7;
	num4 = 5;
	num5 = 8;

	cout << (num1 + num2 + num3 + num4 + num5) / 5 << endl; 

	// using arrays
	// data type, name of the array, the size of the array between [ ]
	int number[5]; // definition of the array called number, of size 5 and type int
	// if you wanted the value in index 4, then you would call:
	// number[4]; //if you want to update the value then number[4] = 0;
	// in this particular example number[5] goes from index 0 to 4 only
	// if you try to use 5 as the index you would get an out-of-bounds error
	// if you try to use negative numbers you would get also an error
	// ex. number[-1] <- error 
	// the index has to be an integer so number[1.5] is illegal
	// uninitilized array indicies have the value NULL != 0

	number[0] = 0;
	number[1] = 4;
	number[2] = 7;
	number[3] = 4;
	number[4] = 3;
	// i < 5, for now I mean the size of the array
	for (int i = 0; i < 5; i++) {
		number[0] += number[i];
	}

	cout << number[0] / 5 << endl;

	// we can initialize the values in the array with a for loop
	for (int j = 0; j < 5; j++) {
		number[j] = j * 4;
		cout << number[j] << endl;
	}


	system("pause");
	return 0;
}
