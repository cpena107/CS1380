// Open VS 2017/15 
// File -> New Project 
// Add Empty Project
// Right click on Source Files -> Add -> New File...
// Add your .cpp file

// include cpp libraries they 3rd party
#include <iostream> // this includes cout, cin
#include <string> // includes the string variable

using namespace std; // easier to use cout and cin
			// if we do not use this line we need to call std::cout

// main function is where you write all of your code
int main() {
	// Naming variables don'ts
	// start a number
	// start %, ^, * ...
	// include a space in you variable name
	// do not use reserved words int, double, cout, cin, if, while ...
	// Note: c++ is case sensitive

	// declare the variable type	declare our variable name
			int						someInteger; // int variables hold whole numbers
												// numbers like 0, 1, 2, 3, ...
												// negative numbers -1, -2, -3, ...
			double					someDouble; // doubles hold real numbers
												// numbers like 1.2, 2.3, 3.4, ...
			char					someCharacter; // char variable will hold 
													// single letters a, b, c, d, 1, ...
													// chars go inclosed in single quotes ' '
													// ex: 'a', 'b', 'c', '1'...
			string					someString; // string variables use double quotes " "
												// they can be single characters but with " "
												// ex: "a", "abcd", "12df4" ....
			bool					someBool; // stores 0 (false) or 1 (true)
											// you use your bool to do ifs whiles; if(statement == bool)

			// cout means console out (prints to the console)
			// use this << to express the element to print
			// you use << as many times as you like
			// endl means end line, same as pressing enter on your keyboard
			cout << "Hello" << " World" << endl;

			// cin means console in (gets input from the console)
			// you use >> to assign the input from console to the variable
			// you need a variable that is the same type as you are asking the user
			cout << "Enter an integer: ";
			//cin >> someInteger; // user has to input an integer
			//cin >> someDouble; // user has to input a double
			//cin >> someCharacter; // char
			//cin >> someString; // string
			//cin >> someBool; // bool (0, 1, true, false)
			//cout << someInteger << someDouble << someCharacter << someString << someBool << endl;

			//Arithmetic operations
			// +, -, /, *, %
			// % "Modulus" 5/2 = 2.5 5%2 = 1
			// we use %2 to get odd (1) or even (0) numbers
			// if we use %3 1%3 = 1, 2%3 = 2 3%3 = 0... 9%3 = 0
			// in magic eight ball we had 8 different options so %8
				// 1%8 = 1, 2%8 = 2, ... 7%8 = 7, 8%8 = 0 (answer = rand() % 8 +1)

			//Division with variables
			someInteger = 5 / 2; // should be 2.5
								 // int do not hold decimal points so answer is 2
								// the division will not round up
			someDouble = 5.0 / 2.0; // this returns 2.5

			cout << "The division of 5/2 is " << someInteger << endl;
			cout << "The division of 5.0/2.0 is " << someDouble << endl;

			// bool operators
			// <, >, ==, >=, <=, !=, !
			// <, <= this will check if one number is less than or less than equal to the number to the right (8 < 6)
			// >, >= this will check if one number is greater than or greater than equal to the number to the right (8 > 6)
			// == is for comparison only, do not work the same as your =; (5 == 5) // correct
																		//(5 = 5) // error
			// ! it is called a negate or not, ex: !true = false, !false = true, !(5 == 5) = false
			// != not equals to, returns false when the values are not the same, true otherwise (5 != 6) = true

			//examples:

			cout << "5 < 6: " << (5 < 6) << endl; // we get true
			cout << "5 > 6: " << (5 > 6) << endl; // false
			cout << "6 >= 8: " << (6 >= 8) << endl; // false
			cout << "6 <= 8: " << (6 <= 8) << endl; // true
			cout << "7 != 9: " << (7 != 9) << endl; // true
			cout << "!(5 < 6): " << !(5 < 6) << endl; // false

			// if statements
			/*
				if(statement that needs to be true){
					// run your code in here if this statement was true
				}
				else if (statement){

				}
				else {

				}
			*/

			// Suppose this answer is random
			int answer = 6;
			cout << "Enter an integer between 1 - 8: ";
			cin >> answer;

			// initial if statement
			if (answer == 1) {
				cout << "Yes" << endl;
			}
			// subsequent if staments contain else
			else if (answer == 2) {
				cout << "It is certain" << endl;
			}
			else if (answer == 3) {
				cout << "Alright" << endl;
			}
			else if (answer == 4) {
				cout << "Ask again later" << endl;
			}
			else if (answer == 5) {
				cout << "No" << endl;
			}
			else if (answer == 6) {
				cout << "Ok" << endl;
			}
			else if (answer == 7) {
				cout << "Bye" << endl;
			}
			// default answer
			else {
				cout << "Go away" << endl;
			}


	system("pause"); // stops the code from completing until the user press any key
	return 0; // the code exited without any errors
}
