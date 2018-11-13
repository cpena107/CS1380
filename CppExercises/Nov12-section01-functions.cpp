// Libraries (functions)
#include <iostream> // cout, cin
#include <string> // functions for strings

using namespace std;

//functions in c++
// sample function
void sayHello() {
	cout << "Hello" << endl;
	cout << "The result between 5*4 is " << 5 * 4 << endl;
}

// void -> returns nothing
// int -> returns an integer
// double -> returns a double
// string -> returns a string

// parameters have to specify the data type
int timesFour(int i) {
	int result;
	result = i * 4;
	cout << i << "*4 is " << result << endl;
	return i * 4;
}
// a double return type called functionC takes in int i, double c
// and double d
double functionC(int i, double c, double d) {
	double result = 0;
	for (int k = i; k < 10; k++) {
		result += c*d;
	}
	return result;
}
// Dr. racket
// (define (timesFour i) (* i 4))

// return (data) type [int]
// name of the function [main]
// parameters go inside the ( )
int main() {
	// call the funtion name, fill parameters
	sayHello();

	int number;
	number = timesFour(65);
	//cout << "5*4 is " << number << endl;

	double result;
	result = functionC(5, 2.5, 1.5);
	cout << result << endl;

	system("pause");
	return 0;
}