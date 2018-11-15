#include <iostream>
#include <string>

using namespace std;

int main() {
	// Exam Review

	// Variable declaration
	// Data Types
	// int,		string,		double,		char, bool
	// any whole number is an integer
	// ex for int
	int i; // variable int named i
	// ex for char
	char h; // the variable is empty
	// Assignment ( = )
	h = 'A'; // char variables are assigned with characters
	// i = 'A'; // error
	i = 10; // assignment for i to get the value 10

	// Arithmetic Operations
	// +, -, *, /, %
	i = 2 + 2; // assignment for i to get the value 4
	i = i - 3; // subtract 4 from i ( i = 1 )
	i -= 3 + 3 - 3 + 5 / 4;
	i *= 4; // i (1) * 4 = 4 so i = 4
	i += 2; // same as i = i + 2
	// +=, -=, *=, /=

	// Modulus ( % )
	i = i % 2; // store the remainder of i/2 into i

	// boolean operators
	// >, <, ==, >=, <=
	// == is not the same as =
	// i = 1 assign 1 to i
	// i == 1 compare i with 1
	// C++ returns 0 if false, 1 if true

	cout << (2 > 4) << endl; // 0
	cout << (5 == 5) << endl; // 1
	cout << (3 > 4 % 2) << endl; // 1

	int num = 30;
	int newNum = 15;

	cout << (num > newNum % 3) << endl; // 1
	num += 50;
	newNum /= 3;
	cout << (num % 5 == newNum % 3) << endl; // 0

	// if-statements
	// basic if-else tree
	/*		(num % 5 == newNum % 3)
		if (statement) {
			//body
			// do your code inside the if
		}
		// else is the default statement for the if
		else {
			//body
			// do your code inside the else
		}
	*/

	double grade = 89.50;

	// we want to get a letter for the grade
	// check if grade is greater than 90 for an 'A'
	if (grade >= 90) { // 2 options to include 90
						// grade >= 90 or grade > 89
		cout << "A" << endl;
	}
	// check if grade is greater than 80 for a 'B'
	// if you forget the else then the tree will
	// not be connected and it will check it
	// regardless of the output in the first if
	else if (grade >= 80) {
		// output B
	}
	// check if grade is greater than 70 for a 'C'
	else if (grade >= 70) {
		// output C
	}
	else if (grade >= 60) {
		// output D
	}
	// check for F?
	else {
		// output F
	}

	// LOOPS
	// while loops

	// a loop that you run until the condition is false
	// basic while loop
	/*
		while ( statement) {
			// this is the body of the loop
		}
	*/

	// loop runs infinite unless you change 
	// the value of the variables in the condition
	// num starts at 80 and newNum starts at 15
	newNum = 15;
	int counter = 0;
	while (num > newNum) {
		cout << num << endl;
		num -= newNum; // this statement only affects num
		counter++;
	}
	cout << counter << endl;
	// Loop analysis
	// check if num (80) > newNum (15) = true
	// Output num
	// run the loop and subtract 15 from num (num = 65)
	// First Loop
	// check if num (65) > newNum (15) = true
	// Output num
	// run the loop and subtract 15 from num (num = 50)
	// Second Loop
	// .
	// .
	// .
	// check if num (20) > newNum (15) = true
	// Output num
	// run the loop and subtract 15 from num (num = 5)
	// Fifth Loop
	// check if num (5) > newNum (15) = false
	// Exit loop

	// The loop ran 5 times and num is 5

	// for loops
	// inside the ( ) 3 things to work
	// 1. intial declaration of some variable (int)
	// 2. Condition of the loop
	// 3. Update your counter variable
	// basic for loop
	/*
		for( 1.; 2.; 3.){}
		for(int k = 0; k < 10; k++) {
			// body of the for loop
		}
	*/
	i = 0;
	//	 begging of first loop
				  // condition to check if loop keeps going
						  // update your variable
	for (int k = 0; k < 10; k++) {
		// body of the for loop
		i += k * k;
	}
	cout << i << endl;
	// loop analysis
	// k = 0
	// check if k (0) < 10 = true
	// run loop i += k*k (i = 0)
	// k++
	// check if k (1) < 10 = true
	// run loop i += k*k (i = 1)
	// k++
	// check if k (2) < 10 = true
	// run loop i += k*k (i = 5)
	// .
	// .
	// .
	// check if k (9) < 10 = true
	// run loop i += k*k (i = 285)
	// k++
	// check if k (10) < 10 = false
	// exit loop

	system("pause");
	return 0;
}
