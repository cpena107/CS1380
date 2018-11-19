#include <iostream>
#include <string>

using namespace std;

// return types in C++
// int, double, string, char, bool
// we add an extra return type ... void

void sayHello() {

}
// three thing to define a function
// 1. return type ( int, double, string, char, bool)
// 2. name of the funtion
// 3. inside the () you need parameter
//	3.1 parameter have to specify the data type
//	3.2 separate extra parameters with a ,
// functions can be called inside the main function by name and parameters
// ex. 
// int main(){
//		sayGoobye(6, 3); // this is legal
//		int i = sayGoodbye(6, 3) // this also legal
//		// if sayGoodbye runs then 26 would be stored in i
// }
// Return Type is int
// Function name is sayGoodbye
// Parameters are int i and int y
int sayGoodbye(int i, int y) {
	i += 20;
	return i;
}

// function template
// ReturnType FunctionName(Param1, Param2, ...) 
//{ 
//
//} 
// there can be as many parameters as you need including 0

// Return type void does not return data back to main
void sayHello(string name) {
	cout << "Hello " << name << endl;
}

// int type for getting some number to the power of power
int PowerOf(int num, int power) {
	int result = num;
	for (int i = 1; i < power; i++) {
		result *= num;
	}

	if (power == 0) {
		result = 1;
	}
	cout << "The result is " << result << endl;
	return result;
}

int main() {

	// test PowerOf
	PowerOf(2, 2); // this statement does not store the data back from the function
	PowerOf(3, 2);
	int myPower = PowerOf(4, 3);
	PowerOf(80, 0);
	cout << myPower << endl;
	// test sayHello
	sayHello("Carlos");

	// Exam Review

	// Variables declaration
	// Data Types
	// int, double, char, string, bool
	// int ex. 2, 4, 5, 9, 1000
	// double ex. 2.1, 3.7, 8.55, 0.12
	// char ex. 'A', 'B', '8' (accepts any single character in ' ')
	// string ex. "Hello World", "Goodbye World" (accepts any size of string in " ")
	// bool two values possible 0 (false), or 1 (true)
	// false, true are reserved words
	// ex. declarations
	// data type, name of variable
	int			i;
	char		h; // does not contain the value 'h'
				   // the rest
				   // Assignment ( = )
	i = 10;
	i = 3; // changes the value of the variable from 10 to 3
	h = 'H'; // has the value 'H'
	h = 'A'; // has the of 'A'

	// Arithmetic operations
	// +, -, *, /, %
	i = 2 + 2; // now i is 4
	i = i + 2 + 2; // i (4) + 2 + 2 = 8
				   // +=, -=, *=, /= (these operators mean that you want to 
				   // use the value of your variable in the operation
	i += 2 + 2; // i (8) + 2 + 2 = 12
	i -= 3; // subtract 3 from i
	i *= 2; // multiply i by 2
	i /= 4; // divide i by 4.

	// Modulus ( % )
	// i = 8 % 2; // i = 0
	i = 2 % 3; // i = 2
	cout << "The 2 % 3 result is " << i << endl;
			   
	// boolean operators
	// >, <, ==, >=, <=
	// == is not the same =
	// i = 1 // assign 1 to i
	// i == 1 // compare the value of i with 1
	// C++ returns a 0 if false or a 1 if true

	cout << (2 > 4) << endl; // 0
	cout << (5 == 5) << endl; // 1
	cout << (3 > 4 % 2) << endl; // 1

	int num = 30;
	int newNum = 15;

	cout << (num > newNum % 3) << endl; // 1
	num += 50; // num becomes 80
	newNum /= 3; // newNum becomes 5
	cout << (num % 5 == newNum % 3) << endl; // 0

	// if-statements
	// basic if-else statement
	/*
	// if some condition is true then run the body of the if
	if (condition){
	// body of the if statement
	}
	// else if it is not true run the else (default)
	else {
	// body of the else
	}
	*/

	double grade = 89.50;

	// We want to get the user the letter grade for the variable grade
	// check if grade is greater than 90 to display 'A'
	if (grade >= 90) { // two possibilities to check if grade is 90
					   // grade > 89 or grade >= 90
		cout << "A" << endl;
	}
	// check if grade is greater than 80 to display 'B'
	// else if connects the if statement tree
	else if (grade >= 80) {
		cout << "B" << endl;
	}
	// check if grade is greater than 70 to display 'C'
	else if (grade >= 70) {
		cout << "C" << endl;
		cout << "Congratz" << endl;
	}
	// display C
	else if (grade >= 60) {
		cout << "D" << endl;
	}
	// display F?
	//else if (grade < 60) {
	//	cout << "F" << endl;
	//}
	else {
		cout << "F" << endl;
	}

	// LOOPS!!
	// while loops
	// while loops repeat until the condition is false
	/*
	while(condition){
	// body of while loop
	}
	*/
	// this creates an infinite loop
	// you need to modify num or newNum to eventually 
	// break out of the loop
	int counter = 0;
	// num is 80
	// newNum is 5
	while (num > newNum) {
		cout << num << endl;
		num -= newNum;
		counter++;
	}
	cout << counter << endl;
	// loop analysis
	// check if num (80) > newNum (5) = true
	// run loop
	// display num
	// subtract newNum from num (num = 75)
	// First loop
	// check if num (75) > newNum (5) = true // 1
	// run loop display num
	// subtract newNum from num (num = 70)
	// Second loop
	// .
	// .
	// .
	// check if num (10) > newNum (5) = true
	// run loop display num
	// subtract newNum from num (num = 5)
	// 15 loop
	// check if num (5) > newNum (5) = false
	// exit the loop

	// the loop ran 15 times and num is 5

	// for loops
	// used mainly as counter
	// it needs three things inside the ( )
	// 1. initial declaration (int)
	// 2. condition for the loop
	// 3. update for the variable in the initial declaration
	/*
	for (1.; 2.; 3.){}
	for (int k = 0; k < 10; k++){
	//body of the loop
	}
	*/
	i = 0; // assign 0 to i to keep track of i in the loop
	for (int k = 0; k < 10; k++) {
		//body of the loop
		i += k*k;
	}
	cout << i << endl;
	// loop analysis
	// k = 0
	// check if k (0) < 10
	// run the loop i += 0*0 (k*k) (i = 0)
	// k++ // k = k + 1; // k += 1; // increase k by 1
	// check if k (1) < 10
	// run the loop i += 1*1 (i = 1)
	// k++
	// .
	// .
	// .
	// check if k (9) < 10 = true
	// run the loop i += 9*9 (i = 285)
	// k++
	// check if k (10) < 10 = false
	// exit the loop

	// the loop ran 10 times and i is 285

	// Functions

	// int main(){} // function to run the C++ code
	// return types (data types) its the telling the function that it
	// needs to return some type of value from the function

	// Functions go declared outside the main function

	system("pause");
	return 0;
}
