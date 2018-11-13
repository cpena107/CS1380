// Libraries for cout, cin
#include <iostream>
// Libraries for strings
#include <string>

using namespace std;

int main()
{
	/*
	// Exercise 1 example
	// declare a variable to hold a character and initialize it
	// to the letter ‘U’
	// data type of character; name for the variable; assign the value 'U'
	char someCharacter = 'U'; // this line assigns 'U' to someCharacter

	// print "The value of the variable is <variable>"
	// cout means console out, which wil print to the screen
	// you can use as many << as you need
	// use <variable> (in this case someCharacter) to print the value to the screen
	cout << "The value of the variable is " << someCharacter << endl;

	// prompt the user to enter a value
	// first ask the user to enter some kind of value (character, int, double ...)
	cout << "Please enter a character: " << endl;
	// store whatever character the user types in your variable
	// then get the user input and store it in you variable 
	// (in this cas someCharacter)
	cin >> someCharacter;

	// if the user typed ‘E’ print "Excellent. "
	// when declaring an if you need a statement to be true 
	// between the ( ), so the code can run
	// e and E are not equal
	// we can use an || operator to check if someCharacter is e
	// Truth table for or
	//	True True = True
	//	False True = True
	//	True False = True
	//	False False = False
	//	if your variable (someCharacter) is neither 
	//	E nor e the statement is false
	if (someCharacter == 'E' || someCharacter == 'e') {
		cout << "Excellent" << endl; // if the user typed 'E' print this line
	}
	// otherwise if they types 'L' print "Loser"
	// adding to the if statement we add the else if
	// where the statement between the ( ) has to be true 
	// l and L are not equal
	else if (someCharacter == 'L'|| someCharacter == 'l') {
		cout << "Loser" << endl; // if the user typed 'L' print this line
	}
	// otherwise print, "No, you fool! "
	// and else without an if does not have a statement 
	// will always be true as long as the other ifs are false
	else {
		cout << "No, you fool" << endl; // default answer
	}
	*/

	// Exercise 2.1 example
	// How many times will this lopp execute?
	// What is the value of i at the end of the loop
	int i = 1;
	// counter to check how many time the loop ran
	int counter = 0;
	while (i < 15) {
		// += means i = i + 3
		i += 3;
		counter += 1;

	}
	// We print the value of counter (number of times the loop ran)
	// Print the value of i at the end of the loop
	cout << "The loop ran " << counter << " and the value of i is "
		<< i << endl;
	// Check if i (1) < 15 = true
	// Run the loop and add 3 to i = 4
	// First loop (we add 1 to our counter)
	// Check if i (4) < 15 = true
	// Run the loop and add 3 to i = 7
	// Second loop (we add 1 to our counter)
	// Check if i (7) < 15 = true
	// Run the loop and add 3 to i = 10
	// Third loop (we add 1 to our counter)
	// Check if i (10) < 15 = true
	// Run the loop and add 3 to i = 13
	// Fourth loop (we add 1 to our counter)
	// Check if i (13) < 15 = true
	// Run the loop and add 3 to i = 16
	// Fifth loop (we add 1 to our counter)
	// Check if i (16) < 15 = false

	// Number of times the loop ran: 5
	// Value of i: 16

	// Exercise 2.2
	// What is the output of the following C++ code?

	int count = 1;
	int y = 15;
	while (count < 15) {
		y = y - 1; // we could also do -= (y -= 1)
		// y--; // same as the line before
		count++; // ++ will increment the value of count by 1
		// count += 1; //same as the previous line
	}
	// The cout (in this case) is the output of the code
	cout << "y = " << y << " and count = " << count << endl;

	// Check if count (1) < 15 = true
	// Run the loop decrement y by 1 (y = 14)
	// increment count by 1 (count = 2)
	// First loop
	// Check if count (2) < 15 = true
	// Run the loop decrement y by 1 (y = 13)
	// increment count by 1 (count = 3)
	// Second loop
	// .
	// .
	// .
	// 14 loop
	// check if count (14) < 15 = true
	// Run the loop decrement y by 1 (y = 1)
	// increment count by 1 (count = 15)
	// 15 loop
	// check if count (15) < 15 = false

	// y = 1 and count = 15
	/*
	// Exercise 2.3
	// Given a double variable n, write C++ statements to ask the 
	// user to enter a real number repeatedly until the user enters 
	// a number that is greater than n. 
	// Store the user number in a double variable number

	// initialize our variables
	// variable for our n
	double n = 123.456;
	// variable for the user input
	double number = 0;
	
	// While the value of n is less than the input fromt the user
	// then keep asking the user to enter a number
	// the value of n has to be greater than number for the loop to run
	while (n > number)
	{
		// Ask the user to enter a double (real number)
		cout << "Enter a real number: " << endl;
		// store the input of the user into our number variable
		cin >> number;
	}
	// when the user enter a number greater than n exit the loop and
	// print "Alright, you got it"
	cout << "Alright, you got it." << endl;
	*/

	int n = 123;
	// variable for the user input
	int number = 0;
	
	// 
	while (n != number)
	{
		// Ask the user to enter a int
		cout << "Enter a integer number: " << endl;
		// store the input of the user into our number variable
		cin >> number;
		// if the user value is less than our secret n
		if (number < n) {
			cout << "Too low" << endl;
		}
		// if the user value is greater than our secret n
		else if (number > n) {
			cout << "Too high" << endl;
		}
	}
	cout << "Alright, you got it." << endl;
	system("pause");
	return 0;
}
