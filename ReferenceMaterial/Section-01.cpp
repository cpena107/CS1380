// Open VS 2107
// Create a new Project
// Right click Source Files -> Add -> New Item...
// File -> New -> File -> Visual C++ and create file 

// Libraries
#include <iostream> // Console manipulation (cout , cin)
#include <string> // Includes string variable

using namespace std; // Easier use of cout and cin
			// if you dont use you need std::cout

// Main function runs your code
int main() {
	// Naming variables don'ts
	//	start with a number
	//	put a space between the name
	// cannot use special character like %, *, /, ^ ...
	// cannot name it some special word like if while int double ...

	// type of variable		name of variable
	int					someInteger; // the int variable holds any 
									// whole number 0, 1, 2, 3, 4... 
									// negative number -1, -2, -3...
	double				someDouble; // like int holds numbers
									// but they have a decimal point
									// ex: 1.2, 3.4, 5.6 ... 
	char				someCharacter; // this will only a, b, c, d
										// will not hold abcd
										// ' ' char variable need single quotes
										// 'a', 'b', 'c', ....
	string				someString; // works as the char variable
									// but it holds a string of chars
									// they need to have " " double quotes
									// ex: "abdc"
	bool				someBool; // stores 0 (false) or 1 (true)
								  // work for comparisons like ifs and whiles

	// cout prints to the screen
	// use << to define the strings you want to print
	// you can use << to get as many string as possible
	// endl (end line) will do the same as pressing enter on keyboard
	cout << "Hello" << " World" << endl;

	// we ask the user to enter some variable with cin
	// use >> to assign the user input to some variable
	// user input and some variable have to be the same type
	cin >> someInteger; // ask the user to enter an integer and store it in someInteger
	cin >> someDouble; //input has to be double type
	cin >> someCharacter; // input has to be char type
	cin >> someString; // input has to be string type
	cin >> someBool; // input has to be bool type (0, 1, false, true)
	cout << someInteger << endl;

	// Arithmetic operation in c++
	// +, -, *, /, %
	// % "Modulus" 1/2 = 0.5 1%2 = 1 but 4%2 = 0 odd%2 is 1 even%2 is 0
	// % 1%3 = 1 2%3 = 2 3%3 = 0
	// ...

	//IN C++ WHEN USE INT 
	// if you do 5/2 = 2.5 => 5/2 = 2 // int ignores decimal point (does not round up)
	// WHE YOU USE DOUBLE
	// if you do 5/2 = 2.5 // double stores decimal point

	//examples
	someInteger = 5 / 2; // division between two int is an int division
	someDouble = 5.0 / 2.0; // division between two doubles is a double division

	cout << "Integer division of 5/2 is: " << someInteger << endl;
	cout << "Double division of 5/2 is: " << someDouble << endl;

	//bool operators 
	// >, <, ==, >=, <=, !
	// > greater than checks if one number is greater than the second
	// < less than checks if one number is less than the second
	// == not the same as = 
	// == means comparison so if one number is the same as the second
	// >= mean checks if one number is greater than equal to the second 
	// <= less than equal to the second
	// ! negate or not, ex: !true = false, !false = true

	//examples:
	cout << (7 > 6) << endl; // 1 (true) because 7 is greater than 6
	cout << (8 < 9) << endl; // 1 (true) becasue 8 is less than 9
	cout << (5 == 3) << endl; // 0 (false)
	cout << (5 <= 4) << endl; // 0 (false)
	cout << (6 >= 7) << endl; // 0 (false)
	cout << !(7 > 6) << endl; // 0 (false) because the complement of the argument is false

	// start if statements

	//template for if statement is
	/*	A >= 90, B >= 80 ...
		if(true or false statement){

		}
		else if(true or false statement){

		}
		else{

		}
	*/

	// Assume answer is random
	int answer = 4;
	cout << "Input a number between 1 and 8" << endl;
	cin >> answer;
	// if statement will run if it is true
	if (answer == 1) {
		cout << "Yes" << endl;
	}
	else if (answer == 2) {
		cout << "No" << endl;
	}
	else if (answer == 3) {
		cout << "Ask again later" << endl;
	}
	else if (answer == 4) {
		cout << "Maybe" << endl;
	}
	else if (answer == 5) {
		cout << "Ok" << endl;
	}
	else if (answer == 6) {
		cout << "Alright" << endl;
	}
	else if (answer == 7) {
		cout << "Go away" << endl;
	}
	// else is your default answer
	else{
		cout << "You" << endl;
	}


	// hold the code from exiting automatically
	system("pause");
	return 0; // 0 means the code exited without errors
}