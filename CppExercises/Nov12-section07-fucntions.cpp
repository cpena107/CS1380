#include <iostream>
using namespace std;
// functions in c++
// return type [int]
// function name [timesFour]
// parameters [int i]
int timesFour(int i) {
	int result;
	result = i * 4;
	cout << "The result of " << i << "*4 is " << result << endl;
	return result;
}

// different return types
// int -> returns an integer
// double -> returns a double
// string -> returns a string
// char -> returns character
// void -> returns nothing
// functions in racket
// (define (timesFour i)(* i 4))

void sayHello() {
	cout << "Hello" << endl;
	cout << "The result between 5*4 is " << 5 * 4 << endl;
	// does not require a return statement
}

double functionC(int i, double c, double b) {
	double sum = 0;
	for (int k = i; k < 10; k++) {
		sum += c*b;
	}
	return sum;
}

// 2^3 = 2 * 2 * 2
int powerOf(int num, int exp) {
	int result = num;
	for (int i = 1; i < exp; i++) {
		result *= num;
	}
	cout << "The number " << num << " to the power of " << exp << " is " << result << endl;
	return result;
}

// return type [int] -> same as data type
// the name of the function [main]
// parameter inside the ()
int main() {

	int result;
	// function call uses the name of the functions + () + parameters if any
	result = timesFour(4);
	timesFour(8);
	timesFour(10);
	timesFour(63);

	sayHello();

	cout << functionC(4, 2.5, 1.5) << endl;

	powerOf(2, 3);

	system("pause");
	// return 0 in main means no errors found
	return 0;
}